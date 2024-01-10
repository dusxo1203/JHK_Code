#include<iostream>
using namespace std;

class Number 
{
private:	//class�� default �����������̹Ƿ� ���� ����
	
	int num;
public:
	Number(int n = 0) :num(n) {}	 // { num = n; }
	//~Number(){}	<<==  �����Ϸ��� �߰��ϴ� ����Ʈ �Ҹ����� ����
	//Number(const Number &r){ this->num = r.num;} <<==�����Ϸ��� �߰��ϴ� ����������� ����
	void prn()const;
	Number operator+(const Number& r);		//value�� �޾Ƶ� ��
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
	return temp;	//temp�� auto ���Ŭ�����̹Ƿ� �����θ� ������ �����ϴ�!!
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

	res = ob1 + ob2;//�Ͻ��� ȣ��	//����� ȣ�� =>res = ob1.operator+(ob2);
	res.prn();

	res = ob1 - ob2;
	res.prn();

	res = ob1 % ob2;
	res.prn();

	ob1.prn();
	ob2.prn();


	return 0;
}