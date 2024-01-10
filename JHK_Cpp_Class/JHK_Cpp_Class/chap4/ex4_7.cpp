#include <iostream>
using namespace std;
#include <string.h>
class Teacher {
private:
	char name[20];
	int pay;
public:
	Teacher(const char *np = "아무개", int p = 0) {
		strcpy(name, np);
		pay = p;
	}
	virtual void teach() = 0; // 순수 가상함수 (정의부를 갖지 않음) - Teacher는 추상클래스가 됨
	//자식클래스들은 이 순수가상함수를 반드시 overriding 해야만 하는 의무감을 갖게 됨
	//자식클래스에서 순수가상함수를 overriding하지 않으면 자식 클래스도 추상클래스가 됨
	//{ cout << "가르친다..." << endl; }
	void view() {
		cout << "이름 : " << name << ", 수업료 : " << pay << endl;
	}
	virtual ~Teacher() {}  // 가상소멸자 (상속관계에서 부모클래스의 소멸자는 반드시 가상 소멸자 여야함)
};

class kTeacher : public Teacher {
public:
	kTeacher(const char *np = "아무개", int p = 0) : Teacher(np, p) {}
	void teach() { cout << "국어를 가르친다..." << endl; }
};

class eTeacher : public Teacher {
public:
	eTeacher(const char *np = "아무개", int p = 0) : Teacher(np, p) {}
	void teach() { cout << "영어를 가르친다..." << endl; }
};

class mTeacher : public Teacher {
public:
	mTeacher(const char *np = "아무개", int p = 0) : Teacher(np, p) {}
	void teach() { cout << "수학을 가르친다..." << endl; }
};

int main()
{
	//Teacher ob;
	Teacher *cheoli[2];
	cheoli[0] = new kTeacher("홍길동", 70);
	cheoli[1] = new mTeacher("이순신", 80);

	Teacher *metel[3];
	metel[0] = new kTeacher("신사임당", 200);
	metel[1] = new eTeacher("임꺽정", 50);
	metel[2] = new mTeacher("강감찬", 90);

	int i;
	cout << "철이의 선생님..." << endl;
	for (i = 0; i < 2; i++) {
		cheoli[i]->view();
		cheoli[i]->teach();  // 다형성 
	}

	cout << "메텔의 선생님..." << endl;
	for (i = 0; i < 3; i++) {
		metel[i]->view();
		metel[i]->teach();
	}

	for (auto t : cheoli) {
		delete t; 
	}

	for (auto t : metel) {
		delete t;
	}
	return 0;
}
