#include <iostream>
#include <cstring>
using namespace std;

double max(double, double);
char* max(char[], char[]);
int main()
{
	double a, b;
	char str1[100], str2[100];

	cout << "�� �Ǽ� �Է�: ";
	cin >> a >> b;
	cout << max(a, b) << endl;
	cout << "�� ���ڿ� �Է�: ";
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
//#include <cstring> // strlen �Լ��� ����ϱ� ���� ���
//using namespace std;
//
//double max(double, double);
//char* max(char[], char[]);
//
//int main() {
//	double a, b;
//	char str1[100], str2[100];
//
//	cout << "�� �Ǽ� �Է�: ";
//	cin >> a >> b;
//	cin.ignore(); // �Ǽ� �Է� �� ���� ���� ���� ����
//	cout << max(a, b) << endl;
//
//	cout << "�� ���ڿ� �Է�: ";
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