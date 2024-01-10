#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>  // �˰��� ����� ���� include
#include<functional> // �Լ���ü ����� ���� include

int main()
{
	vector<int> v; // vector(ǥ�� ������, �迭��� �����̳�, ���� ���� �ݺ���)�����̳��� ��ü ����

	v.push_back(40);
	v.push_back(30); 
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);

	vector<int>::iterator iter;
	sort(v.begin(), v.end(), less<int>()); // [begin, end) ����(range)�� ���Ҹ� �������� ��Ʈ
    // sort(v.begin(), v.end() ); sort �˰����� default ���� ������ less �̹Ƿ� �����ص� ������ ȿ�� ��
	
	for (iter = v.begin(); iter != v.end(); iter++)	{
		cout << *iter << endl;
	}
	cout << endl;
	sort(v.begin(), v.end(), greater<int>()); // [begin, end) ����(range)�� ���Ҹ� �������� ��Ʈ

	for (iter = v.begin(); iter != v.end(); iter++)	{
		cout << *iter << endl;
	}
	cout << endl;

	return 0;
}