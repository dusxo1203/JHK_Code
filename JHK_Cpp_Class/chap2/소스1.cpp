#include<iostream>
using namespace std;

class Robot
{

public:
	Robot()
	{
		//cout << "Robot constructor" << endl;
		cout << __FUNCTION__ << endl;//__FUNCTION__:매크로 - 매크로가 사용된 함수명을 문자열로 만들어줌

	}
	~Robot()
	{
		cout << "Robot destructor" << endl;

	}
};

int main()
{
	Robot* rp;
	rp = new Robot[3];
	delete[] rp;
	return 0;
}