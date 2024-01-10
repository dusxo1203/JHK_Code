#include <iostream>
using namespace std;
class Obj
{
public:
	void Foo(void) { cout << __FUNCTION__ << endl; }
};

int main()
{
	Obj o;	//o는 Obj 타입 객체 선언

	void (Obj::*pmFunc)(void); //Obj 클래스의 void(*)(void) 멤버에 대한 포인터 변수
	pmFunc = &Obj::Foo; //멤버 함수 포인터에 멤버 함수 주소 대입

	(o.*pmFunc)(); // o객체와 멤버 함수 포인터를 이용해 Obj::Foo() 호출

	return 0;
}
