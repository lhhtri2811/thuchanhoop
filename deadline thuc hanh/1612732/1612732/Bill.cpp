#include "Bill.h"

void Bill::buy(BookList list)
{
	_book = Book(list.searchBook());
	cout << "Nhap so luong sach muon mua: ";
	cin >> _quanity;
	_total = _quanity * _book.getPrice();
}

void Bill::outputBill()
{
	cout << "BILL" << endl;
	cout << "\t\tName: " << _book.getName() << endl;
	cout << "\t\tID: " << _book.getID() << endl;
	cout << "\t\tPrice: " << _book.getPrice() << endl;
	cout << "\t\tQuanity: " << _quanity << endl;
	cout << "\t\tTotal: " << _total << endl;
}

int Bill::getTotal()
{
	return _total;
}

int Bill::getQuanity()
{
	return _quanity;
}

Bill::Bill()
{
}

Bill::~Bill()
{
}
