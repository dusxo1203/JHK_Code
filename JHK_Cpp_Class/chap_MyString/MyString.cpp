#include "MyString.h"
#pragma warning(disable:4996)
#include<cstring>

MyString::MyString() : str(new char[1]), len(0) // "", 0으로 초기화
{
	strcpy(str, "");
}
MyString::MyString(const char* cp)  // 오버로디드 생성자
{
	len = strlen(cp);
	str = new char[len+1];
	strcpy(str, cp);
}
MyString::MyString(const MyString& br) // 복사 생성자 (깊은 복사)
{
	len = br.len;
	str = new char[len+1];
	strcpy(str, br.str);
}
MyString::~MyString() // 리소스 반납
{
	delete[] str;
}
MyString& MyString::operator=(const MyString& br)// 깊은 복사
{
	if(this == &br) {
		return *this;
	}
	delete[] str;
	len = br.len;
	str = new char[len+1];
	strcpy(str, br.str);
	return *this;
}
MyString MyString::operator+(const MyString& br) // 덧셈 연산자
{
	MyString temp;
	temp.len = len + br.len;
	delete[] temp.str;  // 기존 메모리 해제
	temp.str = new char[temp.len+1];  // 새 메모리 붙이기
	strcpy(temp.str, str);
	strcat(temp.str, br.str);
	return temp;
}
MyString MyString::operator*(int n) // 문자열을 n번 반복되는 문자열로 만들어 리턴
{
	MyString temp;
	temp.len = len * n;
	temp.str = new char[temp.len+1];
	strcpy(temp.str, str);
	for (int i = 1; i < n; i++) {
		strcat(temp.str, str);
	}
	return temp;
}
MyString& MyString::operator+=(const char* p) // 문자열에 전달된 문자열을 붙여서 저장
{
	int tlen = len + strlen(p);
	char* sp = new char[tlen+1];
	strcpy(sp, str);
	strcat(sp, p);
	delete[] str;
	str = sp;
	len = tlen;
	return *this;
}
bool MyString::find(const char* p) // 문자열 내에 전달된 문자열이 존재하는가 검사
{
	int flag=0;  
	int i=0, j;
	int tlen = strlen(p);
	while (str[i] != '\0') {
		if (str[i] == p[0]) {
			flag = 1;
			for (j = 1; j < tlen; j++) {
				cout << i+j << " : " << str[i + j] << p[j] << endl;
				if (str[i + j] != p[j]) {
					flag = 0;
				}
			}
		}
		if (flag == 1) {
			return true;
		}
		i++;
	}
	return false;
}
bool MyString::operator>(const MyString& br)// 관계연산자 멤버함수(길이 비교)
{
	if (len > br.len) {
		return true;
	}
	else {
		return false;
	}
}
bool MyString::operator==(const MyString& br) // 길이같은가 검사
{
	if (len == br.len) {
		return true;
	}
	else {
		return false;
	}
}
bool MyString::operator<(const MyString& br) // 길이 짧은가 검사
{
		if (len < br.len) {
			return true;
		}
		else {
			return false;
		}
}

ostream& operator<<(ostream& os, MyString&r)
{
	os << r.str << "(" << r.len << ")" << endl;
	return os;
}
istream& operator>>(istream& is, MyString&r)
{	
	char temp[100];
	is >> temp;
	delete[] r.str;
	r.len = strlen(temp);
	r.str = new char[r.len + 1];
	strcpy(r.str,temp);
	return is;
}

