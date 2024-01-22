#include <iostream>
using namespace std;

int my_strlen(char str1[], char a = '\0');

int main()
{
	char str1[100];
	char a;
	
	cout << "문자열 입력 : ";
	cin >> str1;
	cout << "문자열 길이 : " << strlen(str1) << endl;
	cout << "문자 입력 : ";
	cin >> a;
	cout << a << "이전 까지의 길이 : "<<my_strlen(str1,a);

	return 0;
}

//int my_strlen(char* str1, char a)
//{
//	int cnt = 0;
//	while (*str1 != a && *str1 != '\0')
//	{
//		//cout << *str1++;
//		str1++;
//		cnt+=1;
//	}
//	return cnt;
//}
int my_strlen(char str1[], char a)
{
	int cnt = 0;
	while (*str1 != a && *str1 != '\0')
	{
		//cout << *str1++;
		str1++;
		cnt += 1;
	}
	return cnt;
} 