#include <iostream>
using namespace  std;

class Time {
private:
	int hour;  // �ð��� ������ �����͸��
	int min;  // ���� ������ �����͸��
public:
	Time(int h = 0, int m = 0);  // ������
	Time operator*(int);  // ������ ���ϴ� ������ ����Լ�
	//void operator<<(ostream &os);  // ��¿����� ����Լ�
	//void operator>>(istream &is);  // �Է¿����� ����Լ�
	friend ostream& operator<<(ostream& os, Time& br);
	friend istream& operator>>(istream& os, Time& br);
};

//void Time::operator<<(ostream& os)
//{
//	cout << "Time::operator<<()..." << endl;
//	os << this->hour << "��" << this->min << "��" << endl;
//}
//void Time::operator>>(istream& is)
//{
//	cout << "Time::operator>>()..." << endl;
//	is >> this->hour >> this->min;
//}
Time::Time(int h, int m)
{
	hour = h;
	min = m;
}

Time Time::operator*(int n)  // ���ϴ� �������� �Ű������� �޴´�.
{
	int h, m;
	h = hour * n;
	m = min * n;
	if (m >= 60) {
		h += m / 60;
		m = m % 60;
	}
	return Time(h, m);
}

Time operator*(int n, Time &a);
//ostream &operator<<(ostream &os, Time &br);
//istream &operator>>(istream &is, Time &br);

int main()
{
	Time a, b;
	cout << "�ð��� ���� �Է��ϼ��� : ";
	cin >> a;
	b = 3 * a;  // a.operator*(3) ȣ��, a�� �ð��� �п� ���� 3�� ����
	cout << a << b;

	return 0;
}

Time operator*(int n, Time &a)  // 3*a�� a*3���� �ٲٴ� �Ϲ��Լ�
{
	return a * n;  // �������ڷ� ���� ���� ��ġ�� �ٲپ� �����Ѵ�.
}

ostream &operator<<(ostream &os, Time &br)  // ��� �Ϲ��Լ�
{
	cout << "operator<<()..." << endl;
	//br << os;
	os << br.hour << "�ð�" << br.min << "min" << endl;//friend������� ������ ǥ��
	return os;
}

istream &operator>>(istream &is, Time &br)  // �Է� �Ϲ��Լ�
{
	cout << "operator>>()..." << endl;
	//br >> is;
	is >> br.hour >> br.min;
	return is;
}
