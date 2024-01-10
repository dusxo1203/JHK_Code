#pragma warning(disable : 4996)
#include<iostream>
using namespace std;
#include<string.h>
class Wow
{
private:
	char name[20];
	int age;
public:
	Wow(const char * = "����", int = 0);
	~Wow(void) { };
	void update(const char *, int);
	void output();
	//----------------------------------
	void setName(const char*);
	void setAge(int);
};
void Wow::setName(const char*name)
{
	strcpy(this->name, name);	//bit copy - ���� ����
}
void Wow::setAge(int age)
{
	if (age >=0)
	{
		this->age = age;
	}
	else
	{
		this->age = 0;
	}
}
Wow::Wow(const char *p, int n) : age(n)  // �ݷ��ʱ�ȭ
{
	strcpy(name, p); // name ����� �ݷ��ʱ�ȭ ����� ����� �� ����
}
void Wow::update(const char *p, int n)
{
	strcpy(name, p);
	age = n;
}
void Wow::output()
{
	cout << "* �̸� : " << name << endl;
	cout << "* ���� : " << age << endl;
}
int main()
{
	Wow person1;
	Wow person2("King", 20);
	Wow person3 = person2;
	person1.output();
	person3.output();
	person3.update("King Kong", 77);
	person3.output();
	//-------------------------------
	person1.setName("ȫ�浿");
	person1.setAge(27);
	person1.output();

	return 0;
}
