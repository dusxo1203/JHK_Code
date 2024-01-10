#include "MyString.h"
#pragma warning(disable:4996)
#include<cstring>

MyString::MyString() : str(new char[1]), len(0) // "", 0���� �ʱ�ȭ
{
	strcpy(str, "");
}
MyString::MyString(const char* cp)  // �����ε�� ������
{
	len = strlen(cp);
	str = new char[len+1];
	strcpy(str, cp);
}
MyString::MyString(const MyString& br) // ���� ������ (���� ����)
{
	len = br.len;
	str = new char[len+1];
	strcpy(str, br.str);
}
MyString::~MyString() // ���ҽ� �ݳ�
{
	delete[] str;
}
MyString& MyString::operator=(const MyString& br)// ���� ����
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
MyString MyString::operator+(const MyString& br) // ���� ������
{
	MyString temp;
	temp.len = len + br.len;
	delete[] temp.str;  // ���� �޸� ����
	temp.str = new char[temp.len+1];  // �� �޸� ���̱�
	strcpy(temp.str, str);
	strcat(temp.str, br.str);
	return temp;
}
MyString MyString::operator*(int n) // ���ڿ��� n�� �ݺ��Ǵ� ���ڿ��� ����� ����
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
MyString& MyString::operator+=(const char* p) // ���ڿ��� ���޵� ���ڿ��� �ٿ��� ����
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
bool MyString::find(const char* p) // ���ڿ� ���� ���޵� ���ڿ��� �����ϴ°� �˻�
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
bool MyString::operator>(const MyString& br)// ���迬���� ����Լ�(���� ��)
{
	if (len > br.len) {
		return true;
	}
	else {
		return false;
	}
}
bool MyString::operator==(const MyString& br) // ���̰����� �˻�
{
	if (len == br.len) {
		return true;
	}
	else {
		return false;
	}
}
bool MyString::operator<(const MyString& br) // ���� ª���� �˻�
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

