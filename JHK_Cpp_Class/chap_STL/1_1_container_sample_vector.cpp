#include<iostream>
using namespace std;
#include <vector>  // vector 컨테이너를 사용하기 위해 include

int main()
{
	vector<int> v;  // int 타입(정수)을 저장하는 컨테이너 객체 v 생성
	unsigned int i;

	cout << "vector객체 데이터 추가 전 원소 개수 : " << v.size() << endl;

	v.push_back(10);  // v[0] =10;의 표현은 런타임 오류 발생
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << "vector객체 데이터 추가 후 원소 개수 : " << v.size() << endl;
	cout << "vector객체에 데이터 5개 추가 후 출력" << endl;

	for (i = 0; i<v.size(); i++)
	{
		cout << v[i] << endl;
	}

	v.pop_back();  // 데이터 삭제
	v.pop_back();  // 데이터 삭제

	cout << "vector객체에서 데이터 2개 삭제 후 출력" << endl;
	for (i = 0; i<v.size(); i++)
	{
		cout << v[i] << endl;  // cout << v.pop_back() << endl; 는 컴파일 에러 발생(pop_back()의 리턴값을 출력할 수 없음)
	}
	//for (auto val : v)
	//{
	//	cout << val << endl;  // cout << v.pop_back() << endl; 는 컴파일 에러 발생(pop_back()의 리턴값을 출력할 수 없음)
	//}
	return 0;
}
