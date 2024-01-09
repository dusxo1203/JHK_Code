#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int number = 12;
	cout << showbase;
	cout << "10진수로출력: " << number << endl;
	cout << "16진수로출력: " << hex << number << endl;
	cout << "8진수로출력: " << oct << number << endl;
	cout << "10진수로출력: " <<dec << number << endl;

	double dnumber = 7.12345;
	cout << setprecision(3);
	cout << dnumber << endl;
	cout << fixed;
	cout << dnumber << endl;
	cout << scientific;
	cout << dnumber << endl;

	cout << "|"<< setw(10) << number << "|" << setw(15) << dnumber << "|" << endl;

	cout << left;
	cout << "|" << setw(10) << number << "|" << setw(15) << dnumber << "|" << endl;

	cout << right;
	cout << "|" << setw(10) << number << "|" << setw(15) << dnumber << "|" << endl;
	return 0;

}