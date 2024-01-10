#include<iostream>
using namespace std;

int main()
{
	int intAry[5] = { 10,20,30,40,50 };
	char charAry[] = "apple";

	cout << intAry << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << intAry[i] << endl;
	}
	cout << charAry << endl;
	cout << (void*)charAry << endl;

}