#include<iostream>
using namespace std;

class Robot
{

public:
	Robot()
	{
		//cout << "Robot constructor" << endl;
		cout << __FUNCTION__ << endl;//__FUNCTION__:��ũ�� - ��ũ�ΰ� ���� �Լ����� ���ڿ��� �������

	}
	~Robot()
	{
		cout << "Robot destructor" << endl;

	}
};

int main()
{
	Robot* rp;
	rp = new Robot[3];
	delete[] rp;
	return 0;
}