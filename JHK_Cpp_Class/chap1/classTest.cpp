#pragma warning(disable : 4996)
#include<iostream>
using namespace std; //������ ��Ʈ
//#include<string.h>
#include<cstring>	//string.h�� �Ź��� ������ϸ�

class Person {	//class��Ʋ �����
private :
	char name[20];
	int age;
public :
	void setName(const char* np);	//setName()�Լ��� �����
	void setAge(int a);
	char* getName(void);	//char *getName();�� ������ ǥ����
	int getAge(void);
};
void Person::setName(const char* np)	//class Member �Լ� ���Ǻ�(�Ӹ���), �Ҽ� ǥ��!(personŬ���� �Ҽ��̾�)
{				
	if (np != NULL) //::�� scope operator, �� ����ߵ� 56��
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
	Person ob;	//Person class�� ���� �޸� ���� ob��ü ����
	ob.setAge(20);
	ob.setName("HGD");
	cout << ob.getName() << " / " << ob.getAge() << endl;	//endl:�ٹٲ� ��ü
	return 0; //c++������ ��������
}