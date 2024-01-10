#include <iostream>
using namespace std;
void prn(const char *);		//1�� ->vPrnccp()�� �ٲ� ������
void prn(const char *, int);//2�� ->vPrnccpi()
void prn(char, int);	//->vprnci()
void prn(char*);	//4��  ->vPrndi()
void prn(double, int rc);	//5��

int main()
{
	char str[10]="Star";


	prn(str);  // prn(char *) ȣ�� �Ǵ� prn(const char *)�� ȣ���Ҽ��� ����
	prn("Moon");  // prn(char *) ȣ��
	prn("Gogumi", 3);  // prn(char *, int) ȣ��
	prn('#', 7);  // prn(char, int) ȣ��
	
	//----------------------------------------------------------
	double da = 65.5;
	prn(da, 6);	//3�� ȣ�������� �ν��ؼ� ���߻�

	return 0;
}

void prn(double dnum, int rc)
{
	int i;
	for (i = 0; i < rc; i++)
	{
		cout << dnum << endl;
	}
}

void prn(const char *p)
{
	cout << p << endl;
}

void prn(const char *p, int rc)
{
	int i;
	for(i=0; i<rc; i++){
		cout << p << endl;
	}
}

void prn(char ch, int rc)
{
	int i;
	for(i=0; i<rc; i++){
		cout << ch;
	}
	cout << endl;
}

void prn(char* p)
{
	cout << "4�� prn() : " << p << "\n";
}
