#include <iostream>
using namespace std;

int sub(const int& num);

int main()
{
	int res;
	res = sub(10 + 20);
	cout << res << endl;
	return 0;
}

int sub(const int& num)	//const int�� �ؾ� ���� �ȳ�
{
	return num * num;
} 