//#include<iostream>
//using namespace std;
//#include <windows.h> 
//class  Point
//{
//  private : 
//    int x;
//    int y;
//  protected : 
//    void gotoxy();
//  public :
//    void init(int, int);
//    void put_char(char);
//};
//void Point::gotoxy() 
//{ 
//    COORD Pos = {x - 1, y - 1}; 
//    SetConsoleCursorPosition(
//    GetStdHandle(STD_OUTPUT_HANDLE), 
//    Pos); 
//} 
//void Point::init(int a, int b)
//{
//    x = a;
//    y = b;
//}
//void Point::put_char(char ch)
//{
//    gotoxy();
//    cout << ch;
//}
//int main()
//{
//    Point ob1, ob2;
//    ob1.init(20,10);
//    ob1.put_char('*');
//    ob2.init(60,10);
//    ob2.put_char('#');
//    cout << "\n\n종료..." << endl;
//    return 0;
//}
//생략부분 추가한거
#include<iostream>
using namespace std;
#include <windows.h> 
class  Point
{
private:
	int x;
	int y;
protected:
	void gotoxy();
public:
	void init(int, int);
	void put_char(char);
};
void Point::gotoxy()
{
	COORD Pos = {this-> x - 1,this-> y - 1 };	//
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE),
		Pos);
}
void Point::init(int a, int b)
{
	this->x = a;							//
	this->y = b;							//
}	
//void Point::init(int x, int x)
//{
//	this->x = x;						//x가 둘다 파라미터x로 인식하게 됨(이상태에선this가 필수!!)
//	this->y = y;						//
//}
void Point::put_char(char ch)
{
	this->gotoxy();							//
	cout << ch;
}
int main()
{
	Point ob1, ob2;
	ob1.init(20, 10);
	ob1.put_char('*');
	ob2.init(60, 10);
	ob2.put_char('#');
	cout << "\n\n종료..." << endl;
	return 0;
}

