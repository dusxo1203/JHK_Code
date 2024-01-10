//#pragma warning(disable : 4996)
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//// 클래스 선언
//class MoneyBox {
//private:
//	char name[20];
//	int sum;
//public:
//	MoneyBox();  // 디폴트 생성자
//	MoneyBox(const char* np, int m = 0);  // 오버로디드 생성자
//	MoneyBox(const MoneyBox& br);  // 복사 생성자
//	~MoneyBox() { } // 소멸자 
//	void save(int m);
//	void use(int m);
//	void prn();
//};
//// 멤버함수 정의
//MoneyBox::MoneyBox()
//{
//	strcpy(this->name, "아무개");
//	this->sum = 0;
//	cout << "디폴트 생성자 호출..." << this->name << endl;
//}
//
//MoneyBox::MoneyBox(const char* np, int m)
//{
//	strcpy(this->name, np);
//	this->sum = m;
//	cout << "오버로디드 생성자 호출..." << this->name << endl;
//}
//
//MoneyBox::MoneyBox(const MoneyBox& br)
//{
//	strcpy(this->name, br.name);
//	this->sum = br.sum;
//	cout << "복사 생성자 호출..." << this->name << endl;
//}
//
//void MoneyBox::save(int m)
//{
//	if (m >= 0) { this->sum += m; }
//}
//
//void MoneyBox::use(int m)
//{
//	if (m > 0 && m <= this->sum) { this->sum -= m; }
//}
//
//void MoneyBox::prn()
//{
//	cout << "이름 : " << this->name << endl;
//	cout << "잔액 : " << this->sum << endl;
//}
//
//MoneyBox func(MoneyBox m);  // 객체를 리턴하는 일반함수
//int main()
//{
//	MoneyBox a;
//	MoneyBox b("홍길동");
//	MoneyBox c("이순신", 500);
//	MoneyBox d = b;
//	MoneyBox* mp1 = new MoneyBox("홍길동");
//	MoneyBox* mp2 = new MoneyBox(c);
//
//	func(b);
//
//	delete mp1;
//	delete mp2;
//
//	return 0;
//}
//MoneyBox func(MoneyBox m)
//{
//	return m;
//}

//asdflkjalfdja;lksjdfjaldjfasjdf;lajdsf

//char* name 로 변경시!!!!!!!!!!!
//#pragma warning(disable : 4996)
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//// 클래스 선언
//class MoneyBox {
//private:
//	//char name[20];
//	char* name;	//char* name; 은 실제 이름문자열은 동적할당된 기억공간에 저장하고 
//	int sum;	//그 할당된 기억공간의 주소를 저장하는 멤버
//public:
//	MoneyBox();  // 디폴트 생성자
//	MoneyBox(const char* np, int m = 0);  // 오버로디드 생성자
//	MoneyBox(const MoneyBox& br);  // 복사 생성자
//	~MoneyBox()
//	{
//		cout << "destructor..." << this->name << endl;
//		//생성자에서 할당한 기억공간을 이곳에서 해제!!
//		if (this->name != NULL)		//안전장치 
//		{
//			delete[] name; 
//		}
//	} // 소멸자 
//	void save(int m);
//	void use(int m);
//	void prn();
//};
//// 멤버함수 정의
//MoneyBox::MoneyBox()
//{
//	this->name = new char[strlen("아무개")+1];	//null문자가 저장될수 있도록 문자열의
//	strcpy(this->name, "아무개");				//길이+1만큼 동적 메모리 할당
//	this->sum = 0;
//	cout << "디폴트 생성자 호출..." << this->name << endl;
//}
//
//MoneyBox::MoneyBox(const char* np, int m)
//{
//	//동적메모리 할당 하는 부분
//	this->name = new char[strlen(np) + 1];
//	strcpy(this->name, np);
//	this->sum = m;
//	cout << "오버로디드 생성자 호출..." << this->name << endl;
//}
//
//MoneyBox::MoneyBox(const MoneyBox& br)
//{
//	//동적메모리 할당 하는 부분
//	this->name = new char[strlen(br.name) + 1];
//	strcpy(this->name, br.name);
//	this->sum = br.sum;
//	cout << "복사 생성자 호출..." << this->name << endl;
//}
//
//void MoneyBox::save(int m)
//{
//	if (m >= 0) { this->sum += m; }
//}
//
//void MoneyBox::use(int m)
//{
//	if (m > 0 && m <= this->sum) { this->sum -= m; }
//}
//
//void MoneyBox::prn()
//{
//	cout << "이름 : " << this->name << endl;
//	cout << "잔액 : " << this->sum << endl;
//}
//
//MoneyBox func(MoneyBox m);  // 객체를 리턴하는 일반함수
//int main()
//{
//	MoneyBox a;
//	MoneyBox b("홍길동");
//	MoneyBox c("이순신", 500);
//	MoneyBox d = b;
//	MoneyBox* mp1 = new MoneyBox("홍길동");
//	MoneyBox* mp2 = new MoneyBox(c);
//
//	func(b);
//
//	delete mp1;
//	delete mp2;
//
//	return 0;
//}
//MoneyBox func(MoneyBox m)
//{
//	return m;
//}


#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>

using namespace std;
// 클래스 선언
class MoneyBox {
private:
	//char name[20];
	char* name;	//char* name; 은 실제 이름문자열은 동적할당된 기억공간에 저장하고 
	int sum;	//그 할당된 기억공간의 주소를 저장하는 멤버
public:
	MoneyBox();  // 디폴트 생성자
	MoneyBox(const char* np, int m = 0);  // 오버로디드 생성자
	MoneyBox(const MoneyBox& br);  // 복사 생성자
	~MoneyBox()
	{
		cout << "destructor..." << this->name << endl;
		//생성자에서 할당한 기억공간을 이곳에서 해제!!
		if (this->name != NULL)		//안전장치 
		{
			delete[] name;
		}
	} // 소멸자 
	void save(int m);
	void use(int m);
	void prn();
	void setName(const char* np);
	void setSum(int m);
};
// 멤버함수 정의
MoneyBox::MoneyBox()
{
	this->name = new char[strlen("아무개") + 1];	//null문자가 저장될수 있도록 문자열의
	strcpy(this->name, "아무개");				//길이+1만큼 동적 메모리 할당
	this->sum = 0;
	cout << "디폴트 생성자 호출..." << this->name << endl;
}

MoneyBox::MoneyBox(const char* np, int m)
{
	//동적메모리 할당 하는 부분
	this->name = new char[strlen(np) + 1];
	strcpy(this->name, np);
	this->sum = m;
	cout << "오버로디드 생성자 호출..." << this->name << endl;
}

MoneyBox::MoneyBox(const MoneyBox& br)
{
	//동적메모리 할당 하는 부분
	this->name = new char[strlen(br.name) + 1];
	strcpy(this->name, br.name);

	
	this->sum = br.sum;
	cout << "복사 생성자 호출..." << this->name << endl;
}

void MoneyBox::save(int m)
{
	if (m >= 0) { this->sum += m; }
}

void MoneyBox::use(int m)
{
	if (m > 0 && m <= this->sum) { this->sum -= m; }
}

void MoneyBox::prn()
{
	cout << "이름 : " << this->name << endl;
	cout << "잔액 : " << this->sum << endl;
}


void MoneyBox::setName(const char* np)
{
	delete[] name;
	this->name = new char[strlen(np) + 1];
	strcpy(this->name, np);
	
}
void MoneyBox::setSum(int m)
{
	if (m >= 0)
	{
		this->sum = m;
	}
	else
	{
		this->sum = 0;
	}
}

MoneyBox func(MoneyBox m);  // 객체를 리턴하는 일반함수
int main()
{
	//MoneyBox a;
	//MoneyBox b("홍길동");
	//MoneyBox c("이순신", 500);
	//MoneyBox d = b;
	//MoneyBox* mp1 = new MoneyBox("홍길동");
	//MoneyBox* mp2 = new MoneyBox(c);
	//func(b);
	//delete mp1;
	//delete mp2;

	MoneyBox ob1("정혜경", 1000);
	MoneyBox ob2("신사임당", 2000);
	MoneyBox ob3(ob2);

	ob1.prn();
	ob2.prn();
	ob3.prn();

	ob3.setName("김수한무 거북이와 두루미...");
	ob3.setSum(3000);

	ob3.prn();

	char tname[100];
	cin >> tname;
	ob1.setName(tname);
	ob1.prn();

	cin >> tname;
	ob1.prn();


	return 0;
}
MoneyBox func(MoneyBox m)
{
	return m;
}
