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
	static int stNum = 10;	//static�Լ��� �ڱⰡ ���ߴ� �Լ��� ������,�� ���� ������� �ʰ� �����ִ� Ư¡
	stNum++;
	return stNum;
} 