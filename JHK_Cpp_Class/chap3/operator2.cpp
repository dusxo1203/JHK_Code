//#pragma warning(disable:4996)
//#include <iostream>
//using namespace std;
//
//class Person
//{
//private:
//	char* name;	//�ΰ��޸𸮸� �����Ҵ��ؼ� �̸��� �����ϰ� �� �ּҸ� name����� ����
//	int age;
//public:
//	Person(const char* name = "noname", int age = 0);
//	Person(const Person& r);
//	~Person() 
//	{ 
//		cout << __FUNCTION__ << "()..." << endl;
//		delete[] this->name; 
//	}
//	Person operator=(const Person& r);
//	void prn()
//	{
//		cout << this->name << " " << this->age<<endl;
//	}
//	//void setName(const char* rp);
//};
//
////void Person::setName(const char* rp)
////{
////
////}
//Person Person::operator=(const Person& r)
//{
//	this->name = r.name;	//���� ����(�ּҸ� ����)
//	this->age = r.age;
//	cout << __FUNCTION__ << "()..." << endl;
//	return *this;
//}
//Person::Person(const char* name, int age):age(age)
//{
//	this->name = new char[strlen(name) + 1];
//	strcpy(this->name, name);
//
//}
//Person::Person(const Person& r):age(r.age)
//{
//	this->name = name;	//���� ����(�ּҸ� ����)
//}
//
//int main()
//{
//	//Person ob1("�̼���", 20);
//	//Person ob2("�Ż��Ӵ�", 30);
//	//Person ob3;
//
//	//ob1.prn();
//	//ob2.prn();
//	//ob3.prn();
//
//	//ob3 = ob2; //����� ȣ��: ob3.operator=(ob2);
//	////ob3.prn();
//	////ob3.setName("�̻���");
//	//ob2.prn();
//	//ob3.prn();
//	
//	Person* p1;
//	Person* p2;
//	p1 = new Person("�Ӳ���", 30);
//	p2 = new Person("����ѹ� �ź���", 200);
//
//	*p1 = *p2;
//
//	p1->prn();
//	p2->prn();
//
//	delete p1;
//	delete p2;
//
//	cout << "������� ����?" << endl;
//
//	//Person ob1("�̼���", 20);
//	//Person ob2("�Ż��Ӵ�", 30);
//	//Person ob3;
//
//	//ob1.prn();
//	//ob2.prn();
//	//ob3.prn();
//
//	//ob3 = ob2; //����� ȣ��: ob3.operator=(ob2);
//	////ob3.prn();
//	////ob3.setName("�̻���");
//	//ob2.prn();
//	//ob3.prn();
//
//	return 0;
//}


//��������
#pragma warning(disable:4996)
#include <iostream>
using namespace std;

class Person
{
private:
	char* name;	//�ΰ��޸𸮸� �����Ҵ��ؼ� �̸��� �����ϰ� �� �ּҸ� name����� ����
	int age;
public:
	Person(const char* name = "noname", int age = 0);
	Person(const Person& r);
	~Person()
	{
		cout << __FUNCTION__ << "()..." << endl;
		delete[] this->name;
	}
	Person operator=(const Person& r);
	void prn()
	{
		cout << this->name << " " << this->age << endl;
	}
	//void setName(const char* rp);
};

//void Person::setName(const char* rp)
//{
//
//}
Person Person::operator=(const Person& r)
{
	//this->name = r.name;	//���� ����(�ּҸ� ����)
	
	if (this == &r) { return *this; }//������ ���� �����Ϸ��� ��� �ٷ� ���� ��
	//��������
	delete[] this->name;	//this->name����� ������ �ִ� ���� �ΰ� �޸𸮸� ���� ��
	this->name = new char[strlen(r.name) + 1];//�ΰ��޸��� ���� ����
	strcpy(this->name, r.name);

	this->age = r.age;
	cout << __FUNCTION__ << "()..." << endl;
	return *this;
}
Person::Person(const char* name, int age) :age(age)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	cout << __FUNCTION__ << "()..." << endl;

}
Person::Person(const Person& r) :age(r.age)	//���� ������ ���Ǻ�
{
	//this->name = name;	//���� ����(�ּҸ� ����)
	//��������
	//delete[]this->name;	//���ڵ尡 ����ߵǴ� ����:�����ڼ����� this->name�� �ΰ� �޸𸮰� ���� ����
	this->name = new char[strlen(r.name) + 1];
	strcpy(this->name, r.name);
	cout << __FUNCTION__ << "()..." << endl;
}

int main()
{
	//Person ob1("�̼���", 20);
	//Person ob2("�Ż��Ӵ�", 30);
	//Person ob3;

	//ob1.prn();
	//ob2.prn();
	//ob3.prn();

	//ob3 = ob2; //����� ȣ��: ob3.operator=(ob2);
	////ob3.prn();
	////ob3.setName("�̻���");
	//ob2.prn();
	//ob3.prn();

	//Person* p1;
	//Person* p2;
	//p1 = new Person("�Ӳ���", 30);
	//p2 = new Person("����ѹ� �ź���", 200);

	//*p1 = *p2;

	//p1->prn();
	//p2->prn();

	//delete p1;
	//delete p2;

	//cout << "������� ����?" << endl;

	Person ob1("�̼���", 20);
	Person ob2("�Ż��Ӵ�", 30);
	Person ob3;

	ob1.prn();
	ob2.prn();
	ob3.prn();

	ob3 = ob2; //����� ȣ��: ob3.operator=(ob2);
	//ob3.prn();
	//ob3.setName("�̻���");
	ob2.prn();
	ob3.prn();
	cout << "==========================================" << endl;
	ob1 = ob1;	//������ ���� ����
	//pb1 = sub(pb1,ob2); //ob1 = ob1; �̰ų� ob1 = ob2;
	ob1.prn();

	return 0;
}