#include <iostream>
using namespace std;
class Obj
{
public:
	void Foo(void) { cout << __FUNCTION__ << endl; }
};

int main()
{
	Obj o;	//o�� Obj Ÿ�� ��ü ����

	void (Obj::*pmFunc)(void); //Obj Ŭ������ void(*)(void) ����� ���� ������ ����
	pmFunc = &Obj::Foo; //��� �Լ� �����Ϳ� ��� �Լ� �ּ� ����

	(o.*pmFunc)(); // o��ü�� ��� �Լ� �����͸� �̿��� Obj::Foo() ȣ��

	return 0;
}
