#pragma once
#include"BookList.h"
class Bill
{
private:
	Book _book;
	int _quanity;
	int _total;
public:
	void buy(BookList list);
	void outputBill();
	int getTotal();
	int getQuanity();
public:
	Bill();
	~Bill();
};

