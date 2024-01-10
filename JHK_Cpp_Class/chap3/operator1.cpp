#include<iostream>
using namespace std;

class Number 
{
private:	//class의 default 접근지정자이므로 생략 가능
	
	int num;
public:
	Number(int n = 0) :num(n) {}	 // { num = n; }
	//~Number(){}	<<==  컴파일러가 추가하는 디폴트 소멸자의 형태
	//Number(const Number &r){ this->num = r.num;} <<==컴파일러가 추가하는 복사생성자의 형태
	void prn()const;
	Number operator+(const Number& r);		//value로 받아도 됨
	Number operator-(const Number& r);
	Number operator%(const Number& r);
};

Number Number::operator+(const Number& r)
{
	Number temp(this->num + r.num);
	cout << __FUNCTION__ << "()..." << endl;
	return temp;
}
Number Number::operator-(const Number& r)
{
	Number temp(this->num - r.num);
	cout << __FUNCTION__ << "()..." << endl;
	return temp;	//temp는 auto 기억클래스이므로 값으로만 리턴이 가능하다!!
}
Number Number::operator%(const Number& r)
{
	Number temp(this->num % r.num);
	cout << __FUNCTION__ << "()..." << endl;
	return temp;
}
void Number::prn() const
{
	cout << "num=" << this->num << endl;
}


int main()
{
	Number ob1(25), ob2(10);
	Number res;

	res = ob1 + ob2;//암시적 호출	//명시적 호출 =>res = ob1.operator+(ob2);
	res.prn();

	res = ob1 - ob2;
	res.prn();

	res = ob1 % ob2;
	res.prn();

	ob1.prn();
	ob2.prn();


	return 0;
}