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
	Person per; //포함관계
	int number;
public:
	Student(const char* np = "noname", int a = 0, int num = 0):per(np,a),number(num)//포함된 객체를 초기화할때 클론초기화
	{														//per(), 위에 없을시
		/*per.setName(np);
		per.setAge(a);*/
		cout << "Student::Student()..."<<endl;
	}
	~Student() { cout << "Student::~Student()..." << endl; }
	void studentShow()
	{
		this->per.personShow();//포함된 객체의 멤버함수를 호출하는 표현
		cout << "학번:" << this->number << endl;
	}
};
int main()
{
	//Person pob("홍길동",20);
	Student sob("이순신", 30, 1234);
	sob.studentShow();

	return 0;
}