#include<iostream>
using namespace std;
#include "iMoneyBox.h"
int main()
{
	iMoneyBox a("철이", 100, 2000), b("메텔", 500, 3000);

	a.save(600);
	//a.MoneyBox::save(600); 위와 같은 표현
	b.use(100);
	cout << a.MoneyBox::getName() << " " << a.getSum() << " " << a.getLimit() << endl;
	cout << b.getName() << " " << b.getSum() << " " << b.getLimit() << endl;
	cout << "철이의저금통사용량: " << a.check() << '%' << endl;
	cout << "메텔의저금통사용량: " << b.check() << '%' << endl;
	return 0;
}
