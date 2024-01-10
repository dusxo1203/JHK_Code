#include<iostream>
using namespace std;

class Time
{
private:
	int hour;
	int min;
public:
	 Time(int h = 0, int m = 0);  // ��, ���� �޴� �����ε�� ������
	 Time(double t);  // �ð��� �Ǽ������� �ʱ�ȭ�ϴ� ������
	//operator double() const;  // ����ȯ�Լ�1
	//operator int() const;	//����ȯ�Լ�2
	 double to_double() const;
	 int to_int()const;
	void show(); // ��� ����Լ�
};

Time::Time(int h, int m)
{
	cout << "int, int  ������ ȣ��..." << endl;
	hour = h;
	min = m;
}

Time::Time(double t)
{
	cout << "double ������ ȣ��..." << endl;
	hour = int(t);
	min = (int)((t - hour) * 60.0);
}

//Time::operator double() const
//{
//	cout << "����ȯ�Լ� ȣ��..." << endl;
//	double temp;
//	temp = hour + min / 60.0;
//	return temp;
//}
//
//Time::operator int() const
//{
//	cout << "double ����ȯ�Լ� ȣ��..." << endl;
//	return hour;
//}


double Time::to_double() const
{
	cout << "to_double ȣ��..." << endl;
	double temp;
	temp = hour + min / 60.0;
	return temp;
}
int Time::to_int()const
{
	cout << "to_int ȣ��..." << endl;
	return hour;
}


void Time::show()
{
	cout << this->hour << "�ð� " << this->min << "��" << endl;
}


int main()
{
	Time a;
	a = 3.5;  // ������ �Լ� ȣ��
	a.show();

	double res;
	
	//res = 1.0 + a;  // operator double() ����ȯ ����Լ� ȣ��
	res = 1.0 + a.to_double();//to_double()�Լ��� �̿��ؼ� ��ü�� �Ǽ������� ��ȯ
	cout << res << endl;	

	res = 1.0 + a.to_int();//to_int()�Լ��� �̿��ؼ� ��ü�� ���������� ��ȯ
	cout << res << endl;

	return 0;
}
