#include<iostream>
using namespace std;
#include<iomanip>

int main()
{
	/*double da = 123.456;
	cout << setprecision(3);
	cout << da << endl;*/


	//int a[5] = { 1,2,3 };
	//for (auto t : a) {
	//	t += 10;
	//	cout << endl;
	//}
	//	
	//for (auto t : a) {
	//	cout << t << " ";
	//}

	
	//cout << endl;//
	//char cnum = 'A';
	//short snum = 5;
	//
	//decltype(cnum + snum)vnum1;
	//decltype(7.5f) vnum2;
	//cout<< sizeof(snum) << sizeof(cnum) << sizeof(vnum1) << ";" << sizeof(vnum2) << endl;


	//bool b = 3;
	//cout << b << endl;
	//cout << boolalpha << b << endl;
	//b = !b;
	//cout << noboolalpha << b << endl;



	//int in = 5;
	//double d = 7.5;
	//auto num = in + d;
	//cout << sizeof(num) << endl;


	//int num[10];
	//for (int i = 0; i < 3; i++)
	//{
	//	cin >> num[i];
	//	cout << num[i];
	//}


	class T
	{
		int data;
	public:
		void setData() const {
			data = 0;
		}
		void setData(int n)
		{
			message();
			data = n;
		}
		int getData()const {
			return data;
		}
		int getData(int n)const {
			message();
			return data + n;
		}
		void message()
		{
			cout << "Àç¹Õ¾î¿ä" << endl;
		}
	};


	//int main()
	//{
	//	T t;

	//	t.setData();
	//	t.setData(10);
	//	int v1 = t.getData();
	//	int v3 = t.getData(20);

	//	return 0;
	//}
}