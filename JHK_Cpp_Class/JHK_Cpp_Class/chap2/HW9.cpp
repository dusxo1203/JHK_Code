#pragma warning(disable:4996)
#include<iostream>
using namespace std;
#include"Robot.h"
#include<cstring>
#include<iomanip>

void input(int& cnt);
void input(Robot* rp, int cnt);
void work(Robot* rp, int cnt);
void prn(Robot* rp, int cnt);

int main()
{

	int cnt; //�κ��� ��� ���庯��
	Robot* rp;
	input(cnt);//�κ��� ��� �Է� �Լ�
	
	rp = new Robot[cnt];	//�κ� ��ü�迭 �����Ҵ�

	input(rp, cnt);	//�κ���� �������� �Է� �Լ�

	work(rp, cnt);	//�κ� �Ͻ�Ű�� �Լ�

	prn(rp, cnt);	//�κ���� ������ ��� �Լ�

	delete[] rp;

	return 0;
}