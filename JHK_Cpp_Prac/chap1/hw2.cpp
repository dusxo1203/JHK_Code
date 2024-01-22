#include <iostream>
#include <cstring>
using namespace std;

double max(double, double);
char* max(char[], char[]);
int main()
{
	double a, b;
	char str1[100], str2[100];

	cout << "두 실수 입력: ";
	cin >> a >> b;
	cout << max(a, b) << endl;
	cout << "두 문자열 입력: ";
	cin >> str1 >> str2;
	cout << max(str1, str2) << endl;

	return 0;
}

double max(double a, double b)
{
	if (a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

char* max(char str1[], char str2[])
{
	if (strlen(str1) >= strlen(str2))
	{
		return str1;
	}
	else
	{
		return str2;
	}
} 

//#include <iostream>
//#include <cstring> // strlen 함수를 사용하기 위한 헤더
//using namespace std;
//
//double max(double, double);
//char* max(char[], char[]);
//
//int main() {
//	double a, b;
//	char str1[100], str2[100];
//
//	cout << "두 실수 입력: ";
//	cin >> a >> b;
//	cin.ignore(); // 실수 입력 후 남은 개행 문자 제거
//	cout << max(a, b) << endl;
//
//	cout << "두 문자열 입력: ";
//	cin.getline(str1, 100);
//	cin.getline(str2, 100);
//	cout << max(str1, str2) << endl;
//
//	return 0;
//}
//
//double max(double a, double b) {
//	return (a >= b) ? a : b;
//}
//
//char* max(char str1[], char str2[]) {
//	return (strlen(str1) >= strlen(str2)) ? str1 : str2;
//}