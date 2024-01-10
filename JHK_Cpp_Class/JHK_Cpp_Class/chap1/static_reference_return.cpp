#include<iostream>
using namespace std;

int& sub();
int main()
{

	int res;
	res = sub();
	cout << "res="<< res << endl;

	res = sub();
	cout << "res=" << res << endl;

}
int& sub()
{
	static int stNum = 10;
	stNum++;

	return stNum;
}