#include<iostream>
using namespace std;
#include<cstring>

class Person
{
private:
	char name[20];
	int age;
public:
	Person(const char* np = "noname", int a=0)
	{
		cout << "Person::Person()..." << endl;
		strcpy(this->name, np);
		this->age = a;
	}
	~Person() { cout << "Person::~Person()..." << endl; }
	void personShow() {
		cout << this->name << "/" << this->age << endl;
	}
	//void setName(const char* np)
	//{
	//	strcpy(this->name, np);
	//}
	//void setAge(int age)
	//{
	//	this->age = age;
	//}
};
class Student
{
private:
	Person per; //���԰���
	int number;
public:
	Student(const char* np = "noname", int a = 0, int num = 0):per(np,a),number(num)//���Ե� ��ü�� �ʱ�ȭ�Ҷ� Ŭ���ʱ�ȭ
	{														//per(), ���� ������
		/*per.setName(np);
		per.setAge(a);*/
		cout << "Student::Student()..."<<endl;
	}
	~Student() { cout << "Student::~Student()..." << endl; }
	void studentShow()
	{
		this->per.personShow();//���Ե� ��ü�� ����Լ��� ȣ���ϴ� ǥ��
		cout << "�й�:" << this->number << endl;
	}
};
int main()
{
	//Person pob("ȫ�浿",20);
	Student sob("�̼���", 30, 1234);
	sob.studentShow();

	return 0;
}