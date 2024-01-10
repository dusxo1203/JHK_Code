//#pragma warning(disable:4996)
//#include <iostream>
//using namespace std;
//
//class Person
//{
//private:
//	char* name;	//부가메모리를 동적할당해서 이름을 저장하고 그 주소를 name멤버에 저장
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
//	this->name = r.name;	//얕은 복사(주소만 복사)
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
//	this->name = name;	//얕은 복사(주소만 복사)
//}
//
//int main()
//{
//	//Person ob1("이순신", 20);
//	//Person ob2("신사임당", 30);
//	//Person ob3;
//
//	//ob1.prn();
//	//ob2.prn();
//	//ob3.prn();
//
//	//ob3 = ob2; //명시적 호출: ob3.operator=(ob2);
//	////ob3.prn();
//	////ob3.setName("이쁜이");
//	//ob2.prn();
//	//ob3.prn();
//	
//	Person* p1;
//	Person* p2;
//	p1 = new Person("임꺽정", 30);
//	p2 = new Person("김수한무 거북이", 200);
//
//	*p1 = *p2;
//
//	p1->prn();
//	p2->prn();
//
//	delete p1;
//	delete p2;
//
//	cout << "여기까지 수행?" << endl;
//
//	//Person ob1("이순신", 20);
//	//Person ob2("신사임당", 30);
//	//Person ob3;
//
//	//ob1.prn();
//	//ob2.prn();
//	//ob3.prn();
//
//	//ob3 = ob2; //명시적 호출: ob3.operator=(ob2);
//	////ob3.prn();
//	////ob3.setName("이쁜이");
//	//ob2.prn();
//	//ob3.prn();
//
//	return 0;
//}


//깊은복사
#pragma warning(disable:4996)
#include <iostream>
using namespace std;

class Person
{
private:
	char* name;	//부가메모리를 동적할당해서 이름을 저장하고 그 주소를 name멤버에 저장
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
	//this->name = r.name;	//얕은 복사(주소만 복사)
	
	if (this == &r) { return *this; }//나에게 나를 대입하려는 경우 바로 리턴 함
	//깊은복사
	delete[] this->name;	//this->name멤버가 가지고 있는 기존 부가 메모리를 해제 함
	this->name = new char[strlen(r.name) + 1];//부가메모리의 내용 복사
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
Person::Person(const Person& r) :age(r.age)	//복사 생성자 정의부
{
	//this->name = name;	//얕은 복사(주소만 복사)
	//깊은복사
	//delete[]this->name;	//이코드가 없어야되는 이유:생성자수행당시 this->name에 부가 메모리가 없기 때문
	this->name = new char[strlen(r.name) + 1];
	strcpy(this->name, r.name);
	cout << __FUNCTION__ << "()..." << endl;
}

int main()
{
	//Person ob1("이순신", 20);
	//Person ob2("신사임당", 30);
	//Person ob3;

	//ob1.prn();
	//ob2.prn();
	//ob3.prn();

	//ob3 = ob2; //명시적 호출: ob3.operator=(ob2);
	////ob3.prn();
	////ob3.setName("이쁜이");
	//ob2.prn();
	//ob3.prn();

	//Person* p1;
	//Person* p2;
	//p1 = new Person("임꺽정", 30);
	//p2 = new Person("김수한무 거북이", 200);

	//*p1 = *p2;

	//p1->prn();
	//p2->prn();

	//delete p1;
	//delete p2;

	//cout << "여기까지 수행?" << endl;

	Person ob1("이순신", 20);
	Person ob2("신사임당", 30);
	Person ob3;

	ob1.prn();
	ob2.prn();
	ob3.prn();

	ob3 = ob2; //명시적 호출: ob3.operator=(ob2);
	//ob3.prn();
	//ob3.setName("이쁜이");
	ob2.prn();
	ob3.prn();
	cout << "==========================================" << endl;
	ob1 = ob1;	//나에게 나를 대입
	//pb1 = sub(pb1,ob2); //ob1 = ob1; 이거나 ob1 = ob2;
	ob1.prn();

	return 0;
}