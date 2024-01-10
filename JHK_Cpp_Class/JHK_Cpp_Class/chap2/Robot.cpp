#pragma warning(disable:4996)
#include <iostream>
using namespace std;
#include "Robot.h"
#include<cstring>
#include<iomanip>

void Robot::errPrn()
{
	cout << "에너지 부족!" << endl;
}

Robot::Robot()
{
	this->name = new char[strlen("") + 1];	//this->name = new char[0+1];
	strcpy(this->name, "");			//NULL string으로 초기화
	//this->name=NULL; //NULL pointer로 초기화
	this->energy = 0;

}

Robot::Robot(const char* name, int energy)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	this->energy = energy;
}
Robot::Robot(const Robot& r)
{
	this->name = new char[strlen(r.name)+1];
	strcpy(this->name, r.name);
	this->energy = r.energy;
}
Robot::~Robot()
{
	delete[] this->name; 

}
void Robot::go()
{
	if (this->energy >= 10)
	{
		cout <<this->name<< "전진" << endl;
		this->energy -= 10;
	}
	else
	{
		errPrn();
	}
	
}
void Robot::back()
{
	if (this->energy >= 20)
	{
		cout << this->name << "후진" << endl;
		this->energy -= 20;
	}
	else
	{
		errPrn();
	}
}

void Robot::turn()
{
	if (this->energy >= 30)
	{
		cout << this->name << "턴" << endl;
		this->energy -= 30;
	}
	else
	{
		errPrn();
	}
}

void Robot::jump()
{
	if (this->energy >= 40)
	{
		cout << this->name << "점프" << endl;
		this->energy -= 40;
	}
	else
	{
		errPrn();
	}
}

void Robot:: charge(int e)
{
	if (e >= 0)
	{
		this->energy += e;
	}
	else
	{
		this->energy += 0;
	}
}

void Robot::setName(const char* np)	//name멤버의 값을 전달된 문자열로 재 초기화(깊은복사)
{
	delete[] this->name;//기존의 부가메모리 해제(메모리 누수 예방)
	this->name = new char[strlen(np) + 1];
	strcpy(this->name, np);

}

char* Robot::getName()	//name멤버의 값 리턴
{
	return this->name;
}

int Robot::getEnergy()
{
	return this->energy;
}
void Robot::setEnergy(int e)
{
	if (e >= 0)
	{
		this->energy = e;
	}
	else
	{
		this->energy = 0;
	}
	
}
void Robot::prn()
{
	cout << "로봇명은:" << this->name << "," << this->name << "의 에너지 양은" <<  this->energy<<endl;
}