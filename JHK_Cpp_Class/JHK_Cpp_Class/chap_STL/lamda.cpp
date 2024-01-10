#include<iostream>
using namespace std;
#include<cstdlib>
#include<ctime>
#include<vector>
#include<algorithm>

int main()
{
	int size = 100;
	vector<int> data(size);
	srand((unsigned int)time(0));
	generate(data.begin(), data.end(), rand);
	int count_mod3 = count_if(data.begin(), data.end(), [](int x) {return ((x %
		3) == 0); });
	cout << "mod3 = " << count_mod3 << endl;
	int count_mod13 = 0;
	for_each(data.begin(), data.end(), [&count_mod13](int x) { count_mod13 +=
		((x % 13) == 0); });
	cout << "mod13 = " << count_mod13 << endl;
	count_mod3 = count_mod13 = 0;
	for_each(data.begin(), data.end(), [&count_mod3, &count_mod13](int
		x) {count_mod3 += ((x % 3) == 0); count_mod13 += ((x % 13) == 0); });
	cout << "mod3 = " << count_mod3 << ", mod13 = " << count_mod13 << endl;

	return 0;
}
