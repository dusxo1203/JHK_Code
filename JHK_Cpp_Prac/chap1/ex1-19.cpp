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

int sub(const int& num)	//const int로 해야 에러 안남
{
	return num * num;
} 