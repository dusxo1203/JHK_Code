#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char namestr[100];
	int score1, score2, score3;
	int sum = 0;
	double avr = 0;
	cout << "�̸�: ";
	cin.getline(namestr, sizeof(namestr));
	cout << "�� ������ ���� :";
	cin >> score1 >> score2 >> score3;
	sum = score1 + score2 + score3;
	avr = (double)sum / 3;
	cout << "===================== ����ǥ =======================" << endl;
	cout << "====================================================" << endl;
	cout.setf(ios::right);
	cout << "\t�̸�\t����\t����\t����\t����\t���" << endl;
	cout << "====================================================" << endl;
	cout << setprecision(2);
	cout << fixed;
	cout <<"\t" << namestr << "\t" << score1 << "\t" << score2 
		<< "\t" << score3 << "\t" << sum << "\t" << avr << endl;


	return 0;
} 