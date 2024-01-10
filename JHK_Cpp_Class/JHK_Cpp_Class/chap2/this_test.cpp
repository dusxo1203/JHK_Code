//#pragma warning (disable:4996)	//string 사용할때 비주얼스튜디오에서 에러
//#include<iostream>
//#include<cstring>		//string.h 헤더파일의 신버전
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
//{										//표기x
//	//np포인터변수가 NULL pointer인지 확인 후, NULL pointer이면 "noname"
//	//NULL pointer이 아니면 전달된 문자열로 name 멤버를 초기화 시킴
//	if (np != NULL)
//	{
//		strcpy(name, np);	//strcpy(this->name, np); 표기가능
//
//	}
//	else
//	{
//		strcpy(name, "noname");		//strcpy(this->name,"noname");
//	}
//
//}		//this해제
//void Person::setAge(int a)
//{
//	//a가 음수이거나 0이면 0으로 age멤버 초기화
//	//양수이면 전달인자값으로 초기화
//	if (a > 0)
//	{
//		age = a;	//this->age=a; 표기가능
//	}
//	else
//	{
//		age = 0;
//	}
//}
//char* Person::getName(void)
//{
//
//	//name멤버값 리턴
//	return name;
//}
//int Person::getAge(void)
//{
//	//age멤버값 리턴
//	return age;
//}
//
//int main()
//{
//	Person a, b;
//	//a.age = 20;//age,name멤버는 private멤버이므로 접근불가
//	a.setName("HDG");		//a.setName(&a,"HGD")
//							//표기x
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




#pragma warning (disable:4996)	//string 사용할때 비주얼스튜디오에서 에러
#include<iostream>
#include<cstring>		//string.h 헤더파일의 신버전
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

Person::Person()//default cons 정의부
{
	strcpy(this->name, "noname");
	this->age = 0;
	cout <<"default cons...." <<this->name << "(" << this->age << ")" << endl;
}
Person::Person(const char* np, int age) //overloaded cons정의부
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
Person::Person(const Person& r)//copy cons 정의부
{
	strcpy(this->name, r.name);//멤버 대 멤버로 복사
	this->age = r.age;
	cout << "copy cons...." << this->name << "(" << this->age << ")" << endl;
}
void Person::setName(const char* np)	//void Person::setName(Person*const this, const char* np)
{										//표기x
	//np포인터변수가 NULL pointer인지 확인 후, NULL pointer이면 "noname"
	//NULL pointer이 아니면 전달된 문자열로 name 멤버를 초기화 시킴
	if (np != NULL)
	{
		strcpy(name, np);	//strcpy(this->name, np); 표기가능

	}
	else
	{
		strcpy(name, "noname");		//strcpy(this->name,"noname");
	}

}		//this해제
void Person::setAge(int a)
{
	//a가 음수이거나 0이면 0으로 age멤버 초기화
	//양수이면 전달인자값으로 초기화
	if (a > 0)
	{
		age = a;	//this->age=a; 표기가능
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

	//name멤버값 리턴
	return name;
}
int Person::getAge(void)
{
	//age멤버값 리턴
	return age;
}

int main()
{
	Person a;										//auto 기억 class =>램 내의 stack영역 
	Person b("LSS",25);							//소멸은 생성의 역순
	Person c(b);
	cout << a.getName() << "(" << a.getAge() << ")" << endl;
	cout << b.getName() << "(" << b.getAge() << ")" << endl;
	cout << c.getName() << "(" << c.getAge() << ")" << endl;
	//a.setName("HDG");		//a.setName(&a,"HGD")
	//						//표기x
	//a.setAge(20);
	//cout << a.getName() << " " << a.getAge() << endl;

	//b.setName("LLS");		//b.setName(&b,"LSS")
	//b.setAge(25);
	//cout << b.getName() << " " << b.getAge() << endl;



	return 0;
}
