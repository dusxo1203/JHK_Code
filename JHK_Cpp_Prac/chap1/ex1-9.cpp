#include <iostream>
using namespace std;

#include "ioacademy.h"
#include "lectopia.h"

using namespace lectopia;

int main()
{
	cout << "main()���� ����ϴ� lectopia ���Ӥ����̽��� number =" << number << endl;
	print();
	cout << "main()���� ����ϴ� ioacademy ���ӽ����̽��� number=" << ioacademy::number << endl;
	ioacademy::print();

	return 0;

} 