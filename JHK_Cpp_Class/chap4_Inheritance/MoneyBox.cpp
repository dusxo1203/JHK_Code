// MoneyBox ����Լ�������(MoneyBox.cpp)
#include <iostream>
using namespace std;
#include <cstring>
#include "MoneyBox.h"
//-------------------------------------------------------------------------
MoneyBox::MoneyBox(const char *name, int sum) : name(name) // �������������ڸ��̰�������������?������!
{
	this->sum = sum;
	cout << __FUNCTION__ << "(const char *name, int sum)..." << endl;
}
//-------------------------------------------------------------------------
MoneyBox::MoneyBox(const MoneyBox &br) : name(br.name)
{
	this->sum = br.sum;
	cout << __FUNCTION__ << "(const MoneyBox &br)..." << endl;
}
//-------------------------------------------------------------------------
void MoneyBox::save(int money)
{
	if (money >= 0)
	{
		this->sum += money;
	}
}
//-------------------------------------------------------------------------
void MoneyBox::use(int money)
{
	if (money >= 0 && money <= this->sum)
	{
		this->sum -= money;
	}
}
//-------------------------------------------------------------------------
void MoneyBox::setName(string name)
{
	this->name = name;
}
//-------------------------------------------------------------------------
string MoneyBox::getName()
{
	return this->name;
}
//-------------------------------------------------------------------------
void MoneyBox::setSum(int sum)
{
	this->sum = sum;
}
//-------------------------------------------------------------------------
int MoneyBox::getSum()
{
	return this->sum;
}
//-------------------------------------------------------------------------