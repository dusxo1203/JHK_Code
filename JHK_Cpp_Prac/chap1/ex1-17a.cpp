#include <iostream>
#include "myhdr.h"
using namespace std;

int main()
{
	int ary[ArySize] = { 10,20,30,40,50 };
	int sum;
	sum = ary_sum(ary);

	cout << "�迭 ����� ��: " << sum << endl;
	cout << "main()�� ArySize�� �ּ�: " << &ArySize << endl;

	return 0;
}