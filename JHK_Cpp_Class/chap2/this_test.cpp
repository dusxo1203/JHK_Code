//#pragma warning (disable:4996)	//string ����Ҷ� ���־�Ʃ������� ����
//#include<iostream>
//#include<cstring>		//string.h ��������� �Ź���
//using namespace std;
//
//class Person
//{private:
//	char name[20];
//	int age;
//public:
//	void setName(const char* np);
//	void setAge(int a);
//	char* getName(void);
//	int getAge(void);
//};
//
//void Person::setName(const char* np)	//void Person::setName(Person*const this, const char* np)
//{										//ǥ��x
//	//np�����ͺ����� NULL pointer���� Ȯ�� ��, NULL pointer�̸� "noname"
//	//NULL pointer�� �ƴϸ� ���޵� ���ڿ��� name ����� �ʱ�ȭ ��Ŵ
//	if (np != NULL)
//	{
//		strcpy(name, np);	//strcpy(this->name, np); ǥ�Ⱑ��
//
//	}
//	else
//	{
//		strcpy(name, "noname");		//strcpy(this->name,"noname");
//	}
//
//}		//this����
//void Person::setAge(int a)
//{
//	//a�� �����̰ų� 0�̸� 0���� age��� �ʱ�ȭ
//	//����̸� �������ڰ����� �ʱ�ȭ
//	if (a > 0)
//	{
//		age = a;	//this->age=a; ǥ�Ⱑ��
//	}
//	else
//	{
//		age = 0;
//	}
//}
//char* Person::getName(void)
//{
//
//	//name����� ����
//	return name;
//}
//int Person::getAge(void)
//{
//	//age����� ����
//	return age;
//}
//
//int main()
//{
//	Person a, b;
//	//a.age = 20;//age,name����� private����̹Ƿ� ���ٺҰ�
//	a.setName("HDG");		//a.setName(&a,"HGD")
//							//ǥ��x
//	a.setAge(20);
//	cout << a.getName() << " " << a.getAge() << endl;
//
//	b.setName("LLS");		//b.setName(&b,"LSS")
//	b.setAge(25);
//	cout << b.getName() << " " << b.getAge() << endl;
//
//
//
//	return 0;
//}




#pragma warning (disable:4996)	//string ����Ҷ� ���־�Ʃ������� ����
#include<iostream>
#include<cstring>		//string.h ��������� �Ź���
using namespace std;

class Person
{
private:
	char name[20];
	int age;
public:
	Person();//default cons
	Person(const char* np, int age);//overloaded cons
	Person(const Person& r);//copy cons
	~Person(void);//destructor
	void setName(const char* np);
	void setAge(int a);
	char* getName(void);
	int getAge(void);
};

Person::Person()//default cons ���Ǻ�
{
	strcpy(this->name, "noname");
	this->age = 0;
	cout <<"default cons...." <<this->name << "(" << this->age << ")" << endl;
}
Person::Person(const char* np, int age) //overloaded cons���Ǻ�
{
	if (np != NULL)
	{
		strcpy(this->name, np);
	}
	else
	{
		strcpy(this->name, "noname");
	}
	if (age >= 0)
	{
		this->age = age;
	}
	else
	{
		this->age = 0;
	}
	cout << "overloaded cons...." << this->name << "(" << this->age << ")" << endl;
}
Person::Person(const Person& r)//copy cons ���Ǻ�
{
	strcpy(this->name, r.name);//��� �� ����� ����
	this->age = r.age;
	cout << "copy cons...." << this->name << "(" << this->age << ")" << endl;
}
void Person::setName(const char* np)	//void Person::setName(Person*const this, const char* np)
{										//ǥ��x
	//np�����ͺ����� NULL pointer���� Ȯ�� ��, NULL pointer�̸� "noname"
	//NULL pointer�� �ƴϸ� ���޵� ���ڿ��� name ����� �ʱ�ȭ ��Ŵ
	if (np != NULL)
	{
		strcpy(name, np);	//strcpy(this->name, np); ǥ�Ⱑ��

	}
	else
	{
		strcpy(name, "noname");		//strcpy(this->name,"noname");
	}

}		//this����
void Person::setAge(int a)
{
	//a�� �����̰ų� 0�̸� 0���� age��� �ʱ�ȭ
	//����̸� �������ڰ����� �ʱ�ȭ
	if (a > 0)
	{
		age = a;	//this->age=a; ǥ�Ⱑ��
	}
	else
	{
		age = 0;
	}
}
Person::~Person()
{
	cout << "destructor..." << this->name << endl;
}





char* Person::getName(void)
{

	//name����� ����
	return name;
}
int Person::getAge(void)
{
	//age����� ����
	return age;
}

int main()
{
	Person a;										//auto ��� class =>�� ���� stack���� 
	Person b("LSS",25);							//�Ҹ��� ������ ����
	Person c(b);
	cout << a.getName() << "(" << a.getAge() << ")" << endl;
	cout << b.getName() << "(" << b.getAge() << ")" << endl;
	cout << c.getName() << "(" << c.getAge() << ")" << endl;
	//a.setName("HDG");		//a.setName(&a,"HGD")
	//						//ǥ��x
	//a.setAge(20);
	//cout << a.getName() << " " << a.getAge() << endl;

	//b.setName("LLS");		//b.setName(&b,"LSS")
	//b.setAge(25);
	//cout << b.getName() << " " << b.getAge() << endl;



	return 0;
}
