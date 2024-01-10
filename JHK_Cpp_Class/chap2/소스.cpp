#include<iostream>
using namespace std;
int main()
{
	int* p1 = new int;
	int* p2 = new int[6];
	int(*p3) [3] = new int[2][3];

	delete p1;
	delete p2;
	delete[] p3;
}