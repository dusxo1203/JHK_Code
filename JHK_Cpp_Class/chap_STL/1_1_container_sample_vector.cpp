#include<iostream>
using namespace std;
#include <vector>  // vector �����̳ʸ� ����ϱ� ���� include

int main()
{
	vector<int> v;  // int Ÿ��(����)�� �����ϴ� �����̳� ��ü v ����
	unsigned int i;

	cout << "vector��ü ������ �߰� �� ���� ���� : " << v.size() << endl;

	v.push_back(10);  // v[0] =10;�� ǥ���� ��Ÿ�� ���� �߻�
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << "vector��ü ������ �߰� �� ���� ���� : " << v.size() << endl;
	cout << "vector��ü�� ������ 5�� �߰� �� ���" << endl;

	for (i = 0; i<v.size(); i++)
	{
		cout << v[i] << endl;
	}

	v.pop_back();  // ������ ����
	v.pop_back();  // ������ ����

	cout << "vector��ü���� ������ 2�� ���� �� ���" << endl;
	for (i = 0; i<v.size(); i++)
	{
		cout << v[i] << endl;  // cout << v.pop_back() << endl; �� ������ ���� �߻�(pop_back()�� ���ϰ��� ����� �� ����)
	}
	//for (auto val : v)
	//{
	//	cout << val << endl;  // cout << v.pop_back() << endl; �� ������ ���� �߻�(pop_back()�� ���ϰ��� ����� �� ����)
	//}
	return 0;
}
