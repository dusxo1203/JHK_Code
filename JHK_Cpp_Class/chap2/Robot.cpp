#pragma warning(disable:4996)
#include <iostream>
using namespace std;
#include "Robot.h"
#include<cstring>
#include<iomanip>

void Robot::errPrn()
{
	cout << "������ ����!" << endl;
}

Robot::Robot()
{
	this->name = new char[strlen("") + 1];	//this->name = new char[0+1];
	strcpy(this->name, "");			//NULL string���� �ʱ�ȭ
	//this->name=NULL; //NULL pointer�� �ʱ�ȭ
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
		cout <<this->name<< "����" << endl;
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
		cout << this->name << "����" << endl;
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
		cout << this->name << "��" << endl;
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
		cout << this->name << "����" << endl;
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

void Robot::setName(const char* np)	//name����� ���� ���޵� ���ڿ��� �� �ʱ�ȭ(��������)
{
	delete[] this->name;//������ �ΰ��޸� ����(�޸� ���� ����)
	this->name = new char[strlen(np) + 1];
	strcpy(this->name, np);

}

char* Robot::getName()	//name����� �� ����
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
	cout << "�κ�����:" << this->name << "," << this->name << "�� ������ ����" <<  this->energy<<endl;
}