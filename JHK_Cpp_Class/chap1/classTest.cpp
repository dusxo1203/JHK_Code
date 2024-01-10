#pragma warning(disable : 4996)
#include<iostream>
using namespace std; //두줄은 세트
//#include<string.h>
#include<cstring>	//string.h의 신버전 헤더파일명

class Person {	//class형틀 선언부
private :
	char name[20];
	int age;
public :
	void setName(const char* np);	//setName()함수의 선언부
	void setAge(int a);
	char* getName(void);	//char *getName();와 동일한 표현임
	int getAge(void);
};
void Person::setName(const char* np)	//class Member 함수 정의부(머리부), 소속 표기!(person클래스 소속이야)
{				
	if (np != NULL) //::는 scope operator, 더 적어야됨 56분
	{
		strcpy(name, np);
	}
	else 
	{
		strcpy(name,"noname");
	}
	
}
void Person::setAge(int a)
{
	if (a >= 0)
	{
		age = a;
	}
	else
	{
		age = 0;
	}

}

char* Person::getName(void)
{
	return name;

}
int Person::getAge(void)
{
	return age;
}
int main()
{
	Person ob;	//Person class의 실제 메모리 블럭인 ob객체 생성
	ob.setAge(20);
	ob.setName("HGD");
	cout << ob.getName() << " / " << ob.getAge() << endl;	//endl:줄바꿈 객체
	return 0; //c++에서는 생략가능
}