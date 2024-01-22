#include <iostream>
using namespace std;

#include "ioacademy.h"
#include "lectopia.h"

using namespace lectopia;

int main()
{
	cout << "main()에서 출력하는 lectopia 네임ㅅ페이스의 number =" << number << endl;
	print();
	cout << "main()에서 출력하는 ioacademy 네임스페이스의 number=" << ioacademy::number << endl;
	ioacademy::print();

	return 0;

} 