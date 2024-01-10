#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>  // find, sort등 알고리즘 사용을 위해 include

int main()
{
	vector<int> v; // vector(표준 시퀀스, 배열기반 컨테이너, 임의 접근 반복자)컨테이너의 객체 생성

	v.push_back(40);
	v.push_back(30); 
	v.push_back(10);
	v.push_back(50);
	v.push_back(10);

	//-------------------------- find test ----------------------------------
	vector<int>::iterator iter;
	iter = find(v.begin(), v.end(), 10); // [begin, end) 구간(range)에서 10 찾기
	if (iter != v.end()) 
		cout << "10 찾기 성공 : " << *iter << endl;
	else
		cout << "10 찾기 실패!!" << endl;

	iter = find(v.begin(), v.end(), 40); // [begin, end) 구간(range)에서 40 찾기
	if (iter != v.end())
		cout << "40 찾기 성공 : " << *iter << endl;
	else
		cout << "40 찾기 실패!!" << endl;

	iter = find(v.begin(), v.end(), 20); // [begin, end) 구간(range)에서 20 찾기
	if (iter != v.end())
		cout << "20 찾기 성공 : " << *iter << endl;
	else
		cout << "20 찾기 실패!!" << endl;

	//-------------------------- sort test ----------------------------------
	sort(v.begin(), v.end());
	for (auto val : v) {
		cout << val << ' ';
	}
	cout << endl;

	return 0;
}
