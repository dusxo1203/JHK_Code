#include <iostream>
using namespace std;

int& func(int &);
int main()
{
	int num = 7;
	num = func(num);
	cout << num << endl;
	return 0;
}

int& func(int &r)
{
	//int a = 10;	//자동변수
	r += 10;
	return r;
}