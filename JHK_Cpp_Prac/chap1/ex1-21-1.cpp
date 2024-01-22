#include <iostream>
using namespace std;

int& sub();

int main()
{
	int res;
	res = sub();
	cout << "res=" << res << endl;

	res = sub();
	cout << "res=" << res << endl;

	return 0;
}
int& sub()
{
	static int stNum = 10;	//static함수는 자기가 속했던 함수가 끝나도,그 값이 사라지지 않고 남아있는 특징
	stNum++;
	return stNum;
} 