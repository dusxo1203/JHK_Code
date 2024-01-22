#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char namestr[100];
	int score1, score2, score3;
	int sum = 0;
	double avr = 0;
	cout << "이름: ";
	cin.getline(namestr, sizeof(namestr));
	cout << "세 과목의 점수 :";
	cin >> score1 >> score2 >> score3;
	sum = score1 + score2 + score3;
	avr = (double)sum / 3;
	cout << "===================== 성적표 =======================" << endl;
	cout << "====================================================" << endl;
	cout.setf(ios::right);
	cout << "\t이름\t국어\t영어\t수학\t총점\t평균" << endl;
	cout << "====================================================" << endl;
	cout << setprecision(2);
	cout << fixed;
	cout <<"\t" << namestr << "\t" << score1 << "\t" << score2 
		<< "\t" << score3 << "\t" << sum << "\t" << avr << endl;


	return 0;
} 