#include<iostream>
using namespace std;

class Time
{
private:
	int hour;
	int min;
public:
	explicit Time(double t=0.0)
	{
		this->hour = (int)t;
		this->min = (t - this->hour) * 60;
		cout << __FUNCTION__<< "(double)"<< endl;
	}
	void show()
	{
		cout << this->hour << "��" << this->min << "��" << endl;
	}
	//Time&operator=(const Time &r){����� ����� ����}
};

int main()
{
	Time a;
	a.show();
	a = Time(3.5);	//��������� �ӽ� ��ü�� ����� ǥ��(0)
	//a = 3.5;	//a.operator=(3.5); explicit==>a.operator=(Time(3.5));(X)
	a.show();
	a = Time(3);	//�����ڸ� �̿��ؼ� ����ȯ��Ű�� ǥ��(0)
	//a = 3;	//a.operator=(3); ==>> a.operator=(Time(3.0));
	a.show();

}