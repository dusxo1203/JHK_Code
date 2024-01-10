// iMoneyBox의선언, 멤버함수의정의 (iMoneyBox.cpp)
#include <iostream>
using namespace std;
#include "iMoneyBox.h"

iMoneyBox::iMoneyBox(const char *np, int m, int l) : MoneyBox(np, m)//강추
{
	/*this->setName(np); 콜론초기화를 안했을시 해야됨
	this->setSum(m);*/
	this->limit = l;
	cout << __FUNCTION__ << "(const char *np, int m, int l)..." << endl;
}
//-------------------------------------------------------------------------
int iMoneyBox::check()
{
	int temp;
	temp = int((double)this->getSum() / this->limit * 100);
	return temp;
}
//-------------------------------------------------------------------------
void iMoneyBox::setLimit(int limit)
{
	this->limit = limit;
}
//-------------------------------------------------------------------------
int iMoneyBox::getLimit()
{
	return this->limit;
}
