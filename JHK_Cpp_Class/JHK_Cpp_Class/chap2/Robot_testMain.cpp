#pragma warning(disable:4996)
#include<iostream>
using namespace std;
#include"Robot.h"
#include<cstring>
#include<iomanip>

int main()
{
	Robot ob1;
	Robot ob2("�±�v", 200);
	Robot ob3(ob2);

	ob1.prn();
	ob2.prn();
	ob3.prn();
	ob3.setName("����κ�");
	ob3.setEnergy(500);
	ob3.prn();
	cout << endl;
	
	ob1.go();
	ob2.back();
	ob3.turn();
	ob3.jump();

	cout << "---------------------�߰�����---------------------------" << endl;
	ob1.prn();
	ob2.prn();
	ob3.prn();
	cout << "-------------------------------------------------------" << endl;
	cout << endl;
	
	char inName[20];
	int inEnergy;
	cout << "�κ����� �Է��Ͻÿ� :";
	cin >> inName;
	cout << "�������� ���� �Է��Ͻÿ�:";
	cin >> inEnergy;
	ob2.setName(inName);
	ob2.setEnergy(inEnergy);
	ob2.prn();
	ob2.jump();
	ob2.back();
	ob2.prn();
	cout << endl;

	cout << "---------------------�߰�����---------------------------" << endl;
	ob1.prn();
	ob2.prn();
	ob3.prn();
	cout << "-------------------------------------------------------" << endl;
	cout << endl;
	
	ob1.setName("��ī��");
	ob1.prn();
	ob1.jump();
	ob1.prn();
	cout << endl;
	
	int inCharge;
	cout << "������ ������ ����:";
	cin >>inCharge;
	ob1.charge(inCharge);
	ob1.prn();
	cout << endl;
	
	ob1.go();
	ob1.prn();
	ob1.back();
	ob1.prn();
	ob1.turn();
	ob1.prn();
	ob1.jump();
	ob1.prn();

	return 0;
}