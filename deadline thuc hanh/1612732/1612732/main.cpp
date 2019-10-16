#include"Book.h"
#include"BookList.h"
#include"Bill.h"
#include"BillList.h"
int main()
{
	//tuan 2
	//Book book;
	//book.setName("Co so du lieu");
	//book.setID("s001");
	//book.setPrice(78000);
	//cout << "Name: " << book.getName() << endl;
	//cout << "ID: " << book.getID() << endl;
	//cout << "Price: " << book.getPrice() << endl;

	//tao list
	Book book1("Huong doi tuong", "s1", 23000);
	Book book2("Huong doi tuong", "s2", 45000);
	Book book3("Nhap mon lap trinh", "s3", 56000);
	vector<Book> ls;
	ls.push_back(book1);
	ls.push_back(book2);
	ls.push_back(book3);
	BookList list(ls);
	list.outputListBook();

	//tuan 3
	//list.delete_update_book();

	//tuan 4
	BillList billLS;
	billLS.buy(list);

	return 0;
}