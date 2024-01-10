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
		cout << this->hour << "시" << this->min << "분" << endl;
	}
	//Time&operator=(const Time &r){멤버대 멤버로 복사}
};

int main()
{
	Time a;
	a.show();
	a = Time(3.5);	//명시적으로 임시 객체를 만드는 표현(0)
	//a = 3.5;	//a.operator=(3.5); explicit==>a.operator=(Time(3.5));(X)
	a.show();
	a = Time(3);	//생성자를 이용해서 형변환시키는 표현(0)
	//a = 3;	//a.operator=(3); ==>> a.operator=(Time(3.0));
	a.show();

}