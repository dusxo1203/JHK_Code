#include <iostream>
using namespace std;

int main()
{
	bool b = true;
	cout << boolalpha << b << endl;
	cout << noboolalpha << b << endl;

	int n = sizeof(b);
	cout << n << endl;

	int data[10];
	for (int i = 0; i < sizeof(data) / sizeof(data[0]); ++i)
	{
		data[i] = rand() % 100;
	}
	for (auto t : data)
	{
		cout << t << ' ';
	}
	
	return 0;
} 