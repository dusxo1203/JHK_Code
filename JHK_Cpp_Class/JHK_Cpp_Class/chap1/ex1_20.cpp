#include <iostream>
using namespace  std;
int &counter();
int cnt=0;

int main()
{
	int res;

	res=counter();  // 호출결과가 변수가 된다. res=cnt; 
	cout << res << endl;
	counter()=10;  // cnt=10;
	cout << cnt << endl;
	counter()++;  // cnt++;
	cout << cnt << endl;
	cout << counter()+5 << endl;  // cnt+5

	return 0;
}

int &counter()
{
	cnt++;
	return cnt;  // 변수 자체를 리턴한다.
}
