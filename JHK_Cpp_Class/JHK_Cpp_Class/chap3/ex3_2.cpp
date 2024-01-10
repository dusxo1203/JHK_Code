//#include <iostream>
//using namespace  std;
// class Time{
// private:
//int hour;  // 시간을 저장할 데이터멤버
//int min;  // 분을 저장할 데이터멤버
//  public:
//Time(int h=0, int m=0);  // 생성자
//	Time operator+(const Time &br);  // 덧셈연산자 멤버함수
//	Time operator-();  // Unary minus 연산자 멤버함수
//	Time &operator++();  // 전위표기 증가연산자
//	Time operator++(int);  // 후위표기 증가연산자
//	void show();  // 시간을 출력하는 멤버함수
//  };
//
//  Time::Time(int h, int m)
//  {
//	hour=h;
//	min=m;
//  }
//
//  Time Time::operator+(const Time &br)
//  {
//	int h, m;  // 시간, 분을 임시로 저장할 변수
//	h=hour+br.hour;  // 시간의 합
//	m=min+br.min;  // 분의 합
//	if(m>=60){  // 더한 값이 60분 이상이면
//	    h+=m/60;  // 시간에 추가
//	    m=m%60;  // 나머지 분 계산
//	}
//	Time res(h, m);  // 임시객체 생성
//	return res;  // 임시객체를 리턴한다.
//  }	
//
//  Time Time::operator-()  // 매개변수가 없다.
//  {
//	 Time temp(-hour, -min);  // 부호를 바꾸어 임시객체 생성
//	 return temp;  // 임시객체 리턴
//  }
//
//  Time &Time::operator++()  // 전위표기 증가연산자 
//  {
//	 min++;
//	 if(min==60){
//	     hour++;
//	     min=0;
//	 }
//	 cout << "operator++()..." << endl;
//
//	 return *this;  // 증가된 객체를 리턴한다.
//  }
//
//  Time Time::operator++(int)  // 후위표기 증가연산자
//  {
//	Time temp(hour, min);  // 증가되기 전의 객체를 임시 보관한다.
//	min++;
//	if(min==60){
//	    hour++;
//	    min=0;
//	}
//	cout << "operator()..." << endl;
//	return temp;   // 증가되기 전의 객체를 리턴한다.
//  }
//
//  void Time::show()
//  {
//	cout << hour << "시간 " << min << "분" << endl;
//  }
//
//  void func(Time &br);
//
//  int main()
//  {
//	Time a(5, 50), b(3, 30), c;
//
//	c=-b+a;  // c.operator=(b.operator-().operator+(a))
//	a.show();  // 5시간 50분
//	b.show();  // 3시간 30분
//	c.show();  // 2시간 20분
//
//	c=++a+b;
//	a.show();  // 5시간 51분
//	b.show();  // 3시간 30분
//	c.show();  // 9시간 21분 
//
//	c=a+b++;
//	a.show();  // 5시간 51분
//	b.show();  // 3시간 31분
//	c.show();  // 9시간 21분
//
//	func(++a);
//	a.show();  // 5시간 53분
//
//	return 0;
//  }
//
//  void func(Time &br)
//  {
//	br++;
//  }
//




//#include <iostream>
//using namespace  std;
//class Time {
//private:
//	int hour;  // 시간을 저장할 데이터멤버
//	int min;  // 분을 저장할 데이터멤버
//public:
//	Time(int h = 0, int m = 0);  // 생성자
//	Time operator+(const Time& br);  // 덧셈연산자 멤버함수
//	Time operator-();  // Unary minus 연산자 멤버함수
//	Time& operator++();  // 전위표기 증가연산자
//	Time operator++(int);  // 후위표기 증가연산자
//	void show();  // 시간을 출력하는 멤버함수
//	//-------------------------
//	Time& operator--();		//전위표기 감소연산자(1분 감소 기능)
//	Time operator--(int);	//후위표기 감소연산자(1분 감소 기능)
//	//-----------------------------
//	Time operator*(int);//곱셈연산자 함수(Time*정수)	
//};
//Time Time::operator*(int n)
//{
//	int h, m;
//	h = this->hour * n;
//	m = this->min * n;
//	if (m = 60)
//	{
//		h += m/60;
//		m = m % 60;
//	}
//	return Time(h, m);
//}
//
//Time& Time:: operator--()	//전위표기 감소연산자
//{
//	min--;
//	if (min == 0)
//	{
//		hour--;
//		min = 59;
//	}
//	else
//	{
//		min--;
//	}
//	cout << "operator--()..." << endl;
//	return *this;	//감소된 객체를 리턴
//}
//
//Time Time::operator--(int)
//{
//	Time temp(hour, min);	//감소되기 전의 객체를 임시 보관
//	min--;
//	if (min == 0)
//	{
//		hour--;
//		min = 59;
//	}
//	else
//	{
//		min--;
//	}
//	cout << "operator--(int)..." << endl;
//	return temp;	//감소되기 전의 객체를 리턴
//}
//
//Time::Time(int h, int m)
//{
//	hour = h;
//	min = m;
//}
//
//Time Time::operator+(const Time& br)
//{
//	int h, m;  // 시간, 분을 임시로 저장할 변수
//	h = hour + br.hour;  // 시간의 합
//	m = min + br.min;  // 분의 합
//	if (m >= 60) {  // 더한 값이 60분 이상이면
//		h += m / 60;  // 시간에 추가
//		m = m % 60;  // 나머지 분 계산
//	}
//	Time res(h, m);  // 임시객체 생성
//	return res;  // 임시객체를 리턴한다.
//}
//
//Time Time::operator-()  // 매개변수가 없다.
//{
//	Time temp(-hour, -min);  // 부호를 바꾸어 임시객체 생성
//	return temp;  // 임시객체 리턴
//}
//
//Time& Time::operator++()  // 전위표기 증가연산자 
//{
//	min++;
//	if (min == 60) {
//		hour++;
//		min = 0;
//	}
//	cout << "operator++()..." << endl;
//
//	return *this;  // 증가된 객체를 리턴한다.
//}
//
//Time Time::operator++(int)  // 후위표기 증가연산자
//{
//	Time temp(hour, min);  // 증가되기 전의 객체를 임시 보관한다.
//	min++;
//	if (min == 60) {
//		hour++;
//		min = 0;
//	}
//	cout << "operator()..." << endl;
//	return temp;   // 증가되기 전의 객체를 리턴한다.
//}
//
//void Time::show()
//{
//	cout << hour << "시간 " << min << "분" << endl;
//}
//
//void func(Time& br);
//
//int main()
//{
//	Time a(5, 50), b(3, 30), c;
//
//	c = -b + a;  // c.operator=(b.operator-().operator+(a))
//	a.show();  // 5시간 50분
//	b.show();  // 3시간 30분
//	c.show();  // 2시간 20분
//
//	c = ++a + b;
//	a.show();  // 5시간 51분
//	b.show();  // 3시간 30분
//	c.show();  // 9시간 21분 
//
//	c = a + b++;
//	a.show();  // 5시간 51분
//	b.show();  // 3시간 31분
//	c.show();  // 9시간 21분
//
//	func(++a);
//	a.show();  // 5시간 53분
//	//----------------------
//	cout << "----------------------------------------------------------------" << endl;
//	c = --a;
//	a.show();
//	c.show();
//
//	c = a--;
//	a.show();
//	c.show();
//	return 0;
//}
//
//void func(Time& br)
//{
//	br++;
//}
//



#include <iostream>
using namespace  std;
Time operator*(int n, Time& r);	//extern 곱셈연산자 선언부
Time operator-(int n, Time& r);
Time operator+(int n, Time& r);

class Time {
private:
	int hour;  // 시간을 저장할 데이터멤버
	int min;  // 분을 저장할 데이터멤버
public:
	Time(int h = 0, int m = 0);  // 생성자
	Time operator+(const Time& br);  // 덧셈연산자 멤버함수
	Time operator-();  // Unary minus 연산자 멤버함수
	Time& operator++();  // 전위표기 증가연산자
	Time operator++(int);  // 후위표기 증가연산자
	void show();  // 시간을 출력하는 멤버함수
	//-------------------------
	Time& operator--();		//전위표기 감소연산자(1분 감소 기능)
	Time operator--(int);	//후위표기 감소연산자(1분 감소 기능)
	//-----------------------------
	Time operator*(int);//곱셈연산자 함수(Time*정수)	
	Time operator-(int);	//min멤버에서 정수값을 빼주는 뺄셈 연산자함수
	Time operator+(int);	//min멤버에서 정수값을 더해주는 덧셈 연산자함수
};
Time Time::operator+(int n)
{
	int h, m;
	h = this->hour;
	m = this->min + n;	//min멤버는 0~59분 유지
	if (m >= 60)
	{
		h += m / 60;
		m = m % 60;
	}
	return Time(h, m);
}
Time Time::operator-(int n)
{
	int h, m;
	h = this->hour;
	m = this->min - n;	//min멤버는 0~59분 유지
	if (m < 0)
	{
		h--;
		m = 60 + m;
	}
	return Time(h, m);
}
Time Time::operator*(int n)
{
	int h, m;
	h = this->hour * n;
	m = this->min * n;
	if (m = 60)
	{
		h += m / 60;
		m = m % 60;
	}
	return Time(h, m);
}

Time& Time:: operator--()	//전위표기 감소연산자
{
	min--;
	if (min == 0)
	{
		hour--;
		min = 59;
	}
	else
	{
		min--;
	}
	cout << "operator--()..." << endl;
	return *this;	//감소된 객체를 리턴
}

Time Time::operator--(int)
{
	Time temp(hour, min);	//감소되기 전의 객체를 임시 보관
	min--;
	if (min == 0)
	{
		hour--;
		min = 59;
	}
	else
	{
		min--;
	}
	cout << "operator--(int)..." << endl;
	return temp;	//감소되기 전의 객체를 리턴
}

Time::Time(int h, int m)
{
	hour = h;
	min = m;
}

Time Time::operator+(const Time& br)
{
	int h, m;  // 시간, 분을 임시로 저장할 변수
	h = hour + br.hour;  // 시간의 합
	m = min + br.min;  // 분의 합
	if (m >= 60) {  // 더한 값이 60분 이상이면
		h += m / 60;  // 시간에 추가
		m = m % 60;  // 나머지 분 계산
	}
	Time res(h, m);  // 임시객체 생성
	return res;  // 임시객체를 리턴한다.
}

Time Time::operator-()  // 매개변수가 없다.
{
	Time temp(-hour, -min);  // 부호를 바꾸어 임시객체 생성
	return temp;  // 임시객체 리턴
}

Time& Time::operator++()  // 전위표기 증가연산자 
{
	min++;
	if (min == 60) {
		hour++;
		min = 0;
	}
	cout << "operator++()..." << endl;

	return *this;  // 증가된 객체를 리턴한다.
}

Time Time::operator++(int)  // 후위표기 증가연산자
{
	Time temp(hour, min);  // 증가되기 전의 객체를 임시 보관한다.
	min++;
	if (min == 60) {
		hour++;
		min = 0;
	}
	cout << "operator()..." << endl;
	return temp;   // 증가되기 전의 객체를 리턴한다.
}

void Time::show()
{
	cout << hour << "시간 " << min << "분" << endl;
}

void func(Time& br);

int main()
{
//{
//	Time a(5, 50), b(3, 30), c;
//
//	c = -b + a;  // c.operator=(b.operator-().operator+(a))
//	a.show();  // 5시간 50분
//	b.show();  // 3시간 30분
//	c.show();  // 2시간 20분
//
//	c = ++a + b;
//	a.show();  // 5시간 51분
//	b.show();  // 3시간 30분
//	c.show();  // 9시간 21분 
//
//	c = a + b++;
//	a.show();  // 5시간 51분
//	b.show();  // 3시간 31분
//	c.show();  // 9시간 21분
//
//	func(++a);
//	a.show();  // 5시간 53분
//	//----------------------
//	cout << "----------------------------------------------------------------" << endl;
//	c = --a;
//	a.show();
//	c.show();
//
//	c = a--;
//	a.show();
//	c.show();

Time a(2, 30), b;
b = a * 3;
a.show();
b.show();

b = 5 * a;	//곱셈 연산자는 교환법칙이 성립하므로 이 표현도 가능해야함
//b=operator*(5,a); <==일반(외부) 연산자 함수의 명시적 호출
a.show();
b.show();

//----------------------------------------
b = a - 15;	//a객체에서 15분을 뺀 결과의 내용을 b객체에 저장
a.show();
b.show();
//----------------------------------------
b = a + 30;
a.show();
b.show();

b = 40 + a;		//외부(일반)함수로 구현해줘야 함
a.show();
b.show();


return 0;
}
Time operator-(int n, Time& r)
{
	return r - n;
}
Time operator+(int n, Time& r)
{
	return r + n;
}
Time operator*(int n, Time& r)	//외부(일반)함수 이므로 this가 존재하지 x
{
	//int h, m;
	//h = this->hour * n;	//오류!!hour,min이 private멤버이기 때문!!
	//m = this->min * n;	//오류!!

	return r*n;	//return r.operator*(n);	<== 클래스의 멤버함수로 정의된 곱셈연산자 함수 호출
}
void func(Time& br)
{
	br++;
}

