#include <iostream>
using namespace std;

#define ARRAY_SIZE(a) (static_cast<unsigned int>(sizeof(a) / sizeof(a)[0]))
#define ARRAY_ITEM_SIZE(a) (static_cast<unsigned int>(sizeof(a[0])))

class Obj
{
public:
	Obj() : pFunc(&Obj::compare) {} //��ü�� ������ �� pFunc�� compare�� �ʱ�ȭ
	int compare(const int* one, const int* two) { return (*one < *two) ? -1 : 1; }
	int (Obj::* pFunc)(const int*, const int*); //compare Ÿ���� ��� ������ ����
};

int wrapper_comp1(const int* one, const int* two)
{
	Obj o;
	int (Obj:: * mpFunc)(const int*, const int*) = &Obj::compare;
	return ((o.*mpFunc)(one, two)); //���� ��� ������ ������ �̿��� ���� ȣ��
}

int wrapper_comp2(const int* one, const int* two)
{
	Obj o;
	return ((o.*o.pFunc)(one, two)); //Ŭ������ ��������� ������ �̿��� ���� ȣ��
}
int main()
{
	int a[] = { 20, 50, 30, 70, 40, 60 };

	qsort(a, ARRAY_SIZE(a), ARRAY_ITEM_SIZE(a),
		reinterpret_cast<int(*)(const void*, const void*)>(wrapper_comp2));

	for (auto value : a) {
		cout << value << ' ';
	}

	return 0;
}

