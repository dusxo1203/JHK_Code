#include <iostream>
using namespace std;

#define SQUARE(x) ((x)*(x))
inline int square(int x) { return x * x; }

int main()
{
	int ires;
	int n = 5;
	ires = square(3+4);
	cout << "inline�Լ��� �̿��� 3+4�� �ŵ����� : " << ires << endl;
	ires = square(++n);
	cout << "inline�Լ��� �̿��� n++�� �ŵ����� : " << ires << endl;
	n = 5;
	ires = SQUARE(3+4);
	cout << "��ũ�� �Լ��� �̿��� 3+4�� �ŵ����� : " << ires << endl;
	ires = SQUARE(++n);
	cout << "��ũ�� �Լ��� �̿��� n++�� �ŵ����� : " << ires << endl;
	return 0;
}