#include <iostream>
using namespace std;
void prn(const char *);		//1번 ->vPrnccp()로 바뀌어서 컴파일
void prn(const char *, int);//2번 ->vPrnccpi()
void prn(char, int);	//->vprnci()
void prn(char*);	//4번  ->vPrndi()
void prn(double, int rc);	//5번

int main()
{
	char str[10]="Star";


	prn(str);  // prn(char *) 호출 또는 prn(const char *)를 호출할수도 있음
	prn("Moon");  // prn(char *) 호출
	prn("Gogumi", 3);  // prn(char *, int) 호출
	prn('#', 7);  // prn(char, int) 호출
	
	//----------------------------------------------------------
	double da = 65.5;
	prn(da, 6);	//3번 호출모양으로 인식해서 경고발생

	return 0;
}

void prn(double dnum, int rc)
{
	int i;
	for (i = 0; i < rc; i++)
	{
		cout << dnum << endl;
	}
}

void prn(const char *p)
{
	cout << p << endl;
}

void prn(const char *p, int rc)
{
	int i;
	for(i=0; i<rc; i++){
		cout << p << endl;
	}
}

void prn(char ch, int rc)
{
	int i;
	for(i=0; i<rc; i++){
		cout << ch;
	}
	cout << endl;
}

void prn(char* p)
{
	cout << "4번 prn() : " << p << "\n";
}
