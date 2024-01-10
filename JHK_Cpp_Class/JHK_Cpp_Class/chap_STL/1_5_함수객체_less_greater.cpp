#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>  // 알고리즘 사용을 위해 include
#include<functional> // 함수객체 사용을 위해 include

int main()
{
	vector<int> v; // vector(표준 시퀀스, 배열기반 컨테이너, 임의 접근 반복자)컨테이너의 객체 생성

	v.push_back(40);
	v.push_back(30); 
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);

	vector<int>::iterator iter;
	sort(v.begin(), v.end(), less<int>()); // [begin, end) 구간(range)의 원소를 오름차순 소트
    // sort(v.begin(), v.end() ); sort 알고리즘의 default 정렬 기준은 less 이므로 생략해도 동일한 효과 임
	
	for (iter = v.begin(); iter != v.end(); iter++)	{
		cout << *iter << endl;
	}
	cout << endl;
	sort(v.begin(), v.end(), greater<int>()); // [begin, end) 구간(range)의 원소를 내림차순 소트

	for (iter = v.begin(); iter != v.end(); iter++)	{
		cout << *iter << endl;
	}
	cout << endl;

	return 0;
}