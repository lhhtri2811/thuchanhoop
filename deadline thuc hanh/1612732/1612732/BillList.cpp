#include "BillList.h"

void BillList::buy(BookList list)
{
	int option;
	do
	{
		Bill bill;
		bill.buy(list);
		_billList.push_back(bill);
		cout << "1 Mua tiep - 2 Thoat" << endl;
		cin >> option;
		cin.ignore();
		if (option == 2)
		{
			break;
		}
	} while (option==1);
	outputBillList();
}

void BillList::outputBillList()
{
	cout << "\t\t\t\t\tBILL LIST" << endl;
	int total = 0;
	for (int i = 0; i < _billList.size(); i++)
	{
		_billList[i].outputBill();
		total += _billList[i].getTotal();
	}
	cout << "\t\t\t\t\t\t\t\t\tTOTAL: " << total << endl;
}

BillList::BillList()
{

}

BillList::~BillList()
{

}
