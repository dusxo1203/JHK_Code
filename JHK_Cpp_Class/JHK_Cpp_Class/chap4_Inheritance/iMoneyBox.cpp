// iMoneyBox�Ǽ���, ����Լ������� (iMoneyBox.cpp)
#include <iostream>
using namespace std;
#include "iMoneyBox.h"

iMoneyBox::iMoneyBox(const char *np, int m, int l) : MoneyBox(np, m)//����
{
	/*this->setName(np); �ݷ��ʱ�ȭ�� �������� �ؾߵ�
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
