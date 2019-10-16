#include "BookList.h"

void BookList::inputListBook()
{
	cout << "So luong sach muon nhap: ";
	cin >> _sizeList;
	cin.ignore();
	for (int i = 0; i < _sizeList; i++)
	{
		Book book;
		book.inputBook();
		_bookList.push_back(book);
		cin.ignore();
	}
}

void BookList::outputListBook()
{
	cout << "\t\t\t\t\tBOOK LIST" << endl;
	for (int i = 0; i < _sizeList; i++)
	{
		_bookList[i].outputBook();
	}
}

void BookList::delete_update_book()
{
	string strName;
	cout << "Nhap ten sach muon tim kiem: ";
	getline(cin, strName);
	//cin.ignore();

	int count = 0;//dem so luong sach cung ten
	int temp = 0;//vi tri sach tim duoc
	for (int i = 0; i < _sizeList; i++)
	{
		if (_bookList[i].getName() == strName) 
		{
			count++;
			temp += i;
		}
	}

	if (count == 1)
	{
		int option;
		cout << "1 Delete - 2 Update" << endl;
		cin >> option;
		if (option != 1 && option != 2)
		{
			cout << "ERROR" << endl;
			cin >> option;
		}

		//Delete
		else if (option == 1)
		{
			_bookList.erase(_bookList.begin() + temp);
			_sizeList -= 1;
			outputListBook();
		}

		//Update
		else if(option==2)
		{
			string s1 = _bookList[temp].getName();
			string s2= _bookList[temp].getID();
			int newPrice;
			cout << "Gia moi: ";
			cin >> newPrice;
			Book book(s1, s1, newPrice);
			_bookList[temp] = book;
			outputListBook();
		}
	}
	
	//co sach trung ten, tiem kiem theo ID
	else
	{
		string strID;
		cout << "Nhap ID: ";
		getline(cin, strID);

		int temp2 = 0;
		for (int i = 0; i < _sizeList; i++)
		{
			if (_bookList[i].getName() == strName && _bookList[i].getID()==strID)
			{
				temp2 += i;
			}
		}

		int option;
		cout << "1 Delete - 2 Update" << endl;
		cin >> option;
		if (option != 1 && option != 2)
		{
			cout << "ERROR" << endl;
			cin >> option;
		}

		//Delete
		else if (option == 1)
		{
			_bookList.erase(_bookList.begin() + temp2);
			_sizeList -= 1;
			outputListBook();
		}

		//Update
		else if (option == 2)
		{
			string s1 = _bookList[temp2].getName();
			string s2 = _bookList[temp2].getID();
			int newPrice;
			cout << "Gia moi: ";
			cin >> newPrice;
			Book book(s1, s1, newPrice);
			_bookList[temp2] = book;
			outputListBook();
		}
	}
}

Book BookList::searchBook()
{
	string strName;
	cout << "Nhap ten sach muon tim kiem: ";
	getline(cin, strName);
	//cin.ignore();

	int count = 0;//dem so luong sach cung ten
	int temp = 0;//vi tri sach tim duoc
	for (int i = 0; i < _sizeList; i++)
	{
		if (_bookList[i].getName() == strName)
		{
			count++;
			temp += i;
		}
	}

	if (count == 1)
	{
		return Book(_bookList[temp]);
	}

	else
	{
		string strID;
		cout << "Nhap ID: ";
		getline(cin, strID);

		int temp2 = 0;
		for (int i = 0; i < _sizeList; i++)
		{
			if (_bookList[i].getName() == strName && _bookList[i].getID() == strID)
			{
				temp2 += i;
			}
		}
		return Book(_bookList[temp2]);
	}
}

BookList::BookList(const vector<Book>& other)
{
	_bookList = other;
	_sizeList = other.size();
}

BookList::BookList()
{
}

BookList::~BookList()
{
}
