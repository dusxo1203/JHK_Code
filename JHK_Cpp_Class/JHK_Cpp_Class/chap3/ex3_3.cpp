#include<iostream>
using namespace std;

class Time
{
private:
	int hour;
	int min;
public:
	 Time(int h = 0, int m = 0);  // 시, 분을 받는 오버로디드 생성자
	 Time(double t);  // 시간을 실수값으로 초기화하는 생성자
	//operator double() const;  // 형변환함수1
	//operator int() const;	//형변환함수2
	 double to_double() const;
	 int to_int()const;
	void show(); // 멤버 출력함수
};

Time::Time(int h, int m)
{
	cout << "int, int  생성자 호출..." << endl;
	hour = h;
	min = m;
}

Time::Time(double t)
{
	cout << "double 생성자 호출..." << endl;
	hour = int(t);
	min = (int)((t - hour) * 60.0);
}

//Time::operator double() const
//{
//	cout << "형변환함수 호출..." << endl;
//	double temp;
//	temp = hour + min / 60.0;
//	return temp;
//}
//
//Time::operator int() const
//{
//	cout << "double 형변환함수 호출..." << endl;
//	return hour;
//}


double Time::to_double() const
{
	cout << "to_double 호출..." << endl;
	double temp;
	temp = hour + min / 60.0;
	return temp;
}
int Time::to_int()const
{
	cout << "to_int 호출..." << endl;
	return hour;
}


void Time::show()
{
	cout << this->hour << "시간 " << this->min << "분" << endl;
}


int main()
{
	Time a;
	a = 3.5;  // 생성자 함수 호출
	a.show();

	double res;
	
	//res = 1.0 + a;  // operator double() 형변환 멤버함수 호출
	res = 1.0 + a.to_double();//to_double()함수를 이용해서 객체를 실수형으로 변환
	cout << res << endl;	

	res = 1.0 + a.to_int();//to_int()함수를 이용해서 객체를 정수형으로 변환
	cout << res << endl;

	return 0;
}
