#include <iostream>
using namespace std;

int main()
{
	int intArray[5] = { 1,3,5,7,9 };
	char charArray[10] = "apple";

	cout << intArray << endl;
	cout << charArray << endl;
	cout << (void*)charArray << endl;
	return 0;
} 