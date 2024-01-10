#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>  // find, sort�� �˰��� ����� ���� include

int main()
{
	vector<int> v; // vector(ǥ�� ������, �迭��� �����̳�, ���� ���� �ݺ���)�����̳��� ��ü ����

	v.push_back(40);
	v.push_back(30); 
	v.push_back(10);
	v.push_back(50);
	v.push_back(10);

	//-------------------------- find test ----------------------------------
	vector<int>::iterator iter;
	iter = find(v.begin(), v.end(), 10); // [begin, end) ����(range)���� 10 ã��
	if (iter != v.end()) 
		cout << "10 ã�� ���� : " << *iter << endl;
	else
		cout << "10 ã�� ����!!" << endl;

	iter = find(v.begin(), v.end(), 40); // [begin, end) ����(range)���� 40 ã��
	if (iter != v.end())
		cout << "40 ã�� ���� : " << *iter << endl;
	else
		cout << "40 ã�� ����!!" << endl;

	iter = find(v.begin(), v.end(), 20); // [begin, end) ����(range)���� 20 ã��
	if (iter != v.end())
		cout << "20 ã�� ���� : " << *iter << endl;
	else
		cout << "20 ã�� ����!!" << endl;

	//-------------------------- sort test ----------------------------------
	sort(v.begin(), v.end());
	for (auto val : v) {
		cout << val << ' ';
	}
	cout << endl;

	return 0;
}
