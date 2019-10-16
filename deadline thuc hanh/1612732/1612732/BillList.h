#pragma once
#include"Bill.h"
class BillList
{
private:
	vector<Bill> _billList;
	int _sizeListBill;
public:
	void buy(BookList list);
	void outputBillList();
public:
	BillList();
	~BillList();
};

