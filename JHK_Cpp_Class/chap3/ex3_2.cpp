//#include <iostream>
//using namespace  std;
// class Time{
// private:
//int hour;  // �ð��� ������ �����͸��
//int min;  // ���� ������ �����͸��
//  public:
//Time(int h=0, int m=0);  // ������
//	Time operator+(const Time &br);  // ���������� ����Լ�
//	Time operator-();  // Unary minus ������ ����Լ�
//	Time &operator++();  // ����ǥ�� ����������
//	Time operator++(int);  // ����ǥ�� ����������
//	void show();  // �ð��� ����ϴ� ����Լ�
//  };
//
//  Time::Time(int h, int m)
//  {
//	hour=h;
//	min=m;
//  }
//
//  Time Time::operator+(const Time &br)
//  {
//	int h, m;  // �ð�, ���� �ӽ÷� ������ ����
//	h=hour+br.hour;  // �ð��� ��
//	m=min+br.min;  // ���� ��
//	if(m>=60){  // ���� ���� 60�� �̻��̸�
//	    h+=m/60;  // �ð��� �߰�
//	    m=m%60;  // ������ �� ���
//	}
//	Time res(h, m);  // �ӽð�ü ����
//	return res;  // �ӽð�ü�� �����Ѵ�.
//  }	
//
//  Time Time::operator-()  // �Ű������� ����.
//  {
//	 Time temp(-hour, -min);  // ��ȣ�� �ٲپ� �ӽð�ü ����
//	 return temp;  // �ӽð�ü ����
//  }
//
//  Time &Time::operator++()  // ����ǥ�� ���������� 
//  {
//	 min++;
//	 if(min==60){
//	     hour++;
//	     min=0;
//	 }
//	 cout << "operator++()..." << endl;
//
//	 return *this;  // ������ ��ü�� �����Ѵ�.
//  }
//
//  Time Time::operator++(int)  // ����ǥ�� ����������
//  {
//	Time temp(hour, min);  // �����Ǳ� ���� ��ü�� �ӽ� �����Ѵ�.
//	min++;
//	if(min==60){
//	    hour++;
//	    min=0;
//	}
//	cout << "operator()..." << endl;
//	return temp;   // �����Ǳ� ���� ��ü�� �����Ѵ�.
//  }
//
//  void Time::show()
//  {
//	cout << hour << "�ð� " << min << "��" << endl;
//  }
//
//  void func(Time &br);
//
//  int main()
//  {
//	Time a(5, 50), b(3, 30), c;
//
//	c=-b+a;  // c.operator=(b.operator-().operator+(a))
//	a.show();  // 5�ð� 50��
//	b.show();  // 3�ð� 30��
//	c.show();  // 2�ð� 20��
//
//	c=++a+b;
//	a.show();  // 5�ð� 51��
//	b.show();  // 3�ð� 30��
//	c.show();  // 9�ð� 21�� 
//
//	c=a+b++;
//	a.show();  // 5�ð� 51��
//	b.show();  // 3�ð� 31��
//	c.show();  // 9�ð� 21��
//
//	func(++a);
//	a.show();  // 5�ð� 53��
//
//	return 0;
//  }
//
//  void func(Time &br)
//  {
//	br++;
//  }
//




//#include <iostream>
//using namespace  std;
//class Time {
//private:
//	int hour;  // �ð��� ������ �����͸��
//	int min;  // ���� ������ �����͸��
//public:
//	Time(int h = 0, int m = 0);  // ������
//	Time operator+(const Time& br);  // ���������� ����Լ�
//	Time operator-();  // Unary minus ������ ����Լ�
//	Time& operator++();  // ����ǥ�� ����������
//	Time operator++(int);  // ����ǥ�� ����������
//	void show();  // �ð��� ����ϴ� ����Լ�
//	//-------------------------
//	Time& operator--();		//����ǥ�� ���ҿ�����(1�� ���� ���)
//	Time operator--(int);	//����ǥ�� ���ҿ�����(1�� ���� ���)
//	//-----------------------------
//	Time operator*(int);//���������� �Լ�(Time*����)	
//};
//Time Time::operator*(int n)
//{
//	int h, m;
//	h = this->hour * n;
//	m = this->min * n;
//	if (m = 60)
//	{
//		h += m/60;
//		m = m % 60;
//	}
//	return Time(h, m);
//}
//
//Time& Time:: operator--()	//����ǥ�� ���ҿ�����
//{
//	min--;
//	if (min == 0)
//	{
//		hour--;
//		min = 59;
//	}
//	else
//	{
//		min--;
//	}
//	cout << "operator--()..." << endl;
//	return *this;	//���ҵ� ��ü�� ����
//}
//
//Time Time::operator--(int)
//{
//	Time temp(hour, min);	//���ҵǱ� ���� ��ü�� �ӽ� ����
//	min--;
//	if (min == 0)
//	{
//		hour--;
//		min = 59;
//	}
//	else
//	{
//		min--;
//	}
//	cout << "operator--(int)..." << endl;
//	return temp;	//���ҵǱ� ���� ��ü�� ����
//}
//
//Time::Time(int h, int m)
//{
//	hour = h;
//	min = m;
//}
//
//Time Time::operator+(const Time& br)
//{
//	int h, m;  // �ð�, ���� �ӽ÷� ������ ����
//	h = hour + br.hour;  // �ð��� ��
//	m = min + br.min;  // ���� ��
//	if (m >= 60) {  // ���� ���� 60�� �̻��̸�
//		h += m / 60;  // �ð��� �߰�
//		m = m % 60;  // ������ �� ���
//	}
//	Time res(h, m);  // �ӽð�ü ����
//	return res;  // �ӽð�ü�� �����Ѵ�.
//}
//
//Time Time::operator-()  // �Ű������� ����.
//{
//	Time temp(-hour, -min);  // ��ȣ�� �ٲپ� �ӽð�ü ����
//	return temp;  // �ӽð�ü ����
//}
//
//Time& Time::operator++()  // ����ǥ�� ���������� 
//{
//	min++;
//	if (min == 60) {
//		hour++;
//		min = 0;
//	}
//	cout << "operator++()..." << endl;
//
//	return *this;  // ������ ��ü�� �����Ѵ�.
//}
//
//Time Time::operator++(int)  // ����ǥ�� ����������
//{
//	Time temp(hour, min);  // �����Ǳ� ���� ��ü�� �ӽ� �����Ѵ�.
//	min++;
//	if (min == 60) {
//		hour++;
//		min = 0;
//	}
//	cout << "operator()..." << endl;
//	return temp;   // �����Ǳ� ���� ��ü�� �����Ѵ�.
//}
//
//void Time::show()
//{
//	cout << hour << "�ð� " << min << "��" << endl;
//}
//
//void func(Time& br);
//
//int main()
//{
//	Time a(5, 50), b(3, 30), c;
//
//	c = -b + a;  // c.operator=(b.operator-().operator+(a))
//	a.show();  // 5�ð� 50��
//	b.show();  // 3�ð� 30��
//	c.show();  // 2�ð� 20��
//
//	c = ++a + b;
//	a.show();  // 5�ð� 51��
//	b.show();  // 3�ð� 30��
//	c.show();  // 9�ð� 21�� 
//
//	c = a + b++;
//	a.show();  // 5�ð� 51��
//	b.show();  // 3�ð� 31��
//	c.show();  // 9�ð� 21��
//
//	func(++a);
//	a.show();  // 5�ð� 53��
//	//----------------------
//	cout << "----------------------------------------------------------------" << endl;
//	c = --a;
//	a.show();
//	c.show();
//
//	c = a--;
//	a.show();
//	c.show();
//	return 0;
//}
//
//void func(Time& br)
//{
//	br++;
//}
//



#include <iostream>
using namespace  std;
Time operator*(int n, Time& r);	//extern ���������� �����
Time operator-(int n, Time& r);
Time operator+(int n, Time& r);

class Time {
private:
	int hour;  // �ð��� ������ �����͸��
	int min;  // ���� ������ �����͸��
public:
	Time(int h = 0, int m = 0);  // ������
	Time operator+(const Time& br);  // ���������� ����Լ�
	Time operator-();  // Unary minus ������ ����Լ�
	Time& operator++();  // ����ǥ�� ����������
	Time operator++(int);  // ����ǥ�� ����������
	void show();  // �ð��� ����ϴ� ����Լ�
	//-------------------------
	Time& operator--();		//����ǥ�� ���ҿ�����(1�� ���� ���)
	Time operator--(int);	//����ǥ�� ���ҿ�����(1�� ���� ���)
	//-----------------------------
	Time operator*(int);//���������� �Լ�(Time*����)	
	Time operator-(int);	//min������� �������� ���ִ� ���� �������Լ�
	Time operator+(int);	//min������� �������� �����ִ� ���� �������Լ�
};
Time Time::operator+(int n)
{
	int h, m;
	h = this->hour;
	m = this->min + n;	//min����� 0~59�� ����
	if (m >= 60)
	{
		h += m / 60;
		m = m % 60;
	}
	return Time(h, m);
}
Time Time::operator-(int n)
{
	int h, m;
	h = this->hour;
	m = this->min - n;	//min����� 0~59�� ����
	if (m < 0)
	{
		h--;
		m = 60 + m;
	}
	return Time(h, m);
}
Time Time::operator*(int n)
{
	int h, m;
	h = this->hour * n;
	m = this->min * n;
	if (m = 60)
	{
		h += m / 60;
		m = m % 60;
	}
	return Time(h, m);
}

Time& Time:: operator--()	//����ǥ�� ���ҿ�����
{
	min--;
	if (min == 0)
	{
		hour--;
		min = 59;
	}
	else
	{
		min--;
	}
	cout << "operator--()..." << endl;
	return *this;	//���ҵ� ��ü�� ����
}

Time Time::operator--(int)
{
	Time temp(hour, min);	//���ҵǱ� ���� ��ü�� �ӽ� ����
	min--;
	if (min == 0)
	{
		hour--;
		min = 59;
	}
	else
	{
		min--;
	}
	cout << "operator--(int)..." << endl;
	return temp;	//���ҵǱ� ���� ��ü�� ����
}

Time::Time(int h, int m)
{
	hour = h;
	min = m;
}

Time Time::operator+(const Time& br)
{
	int h, m;  // �ð�, ���� �ӽ÷� ������ ����
	h = hour + br.hour;  // �ð��� ��
	m = min + br.min;  // ���� ��
	if (m >= 60) {  // ���� ���� 60�� �̻��̸�
		h += m / 60;  // �ð��� �߰�
		m = m % 60;  // ������ �� ���
	}
	Time res(h, m);  // �ӽð�ü ����
	return res;  // �ӽð�ü�� �����Ѵ�.
}

Time Time::operator-()  // �Ű������� ����.
{
	Time temp(-hour, -min);  // ��ȣ�� �ٲپ� �ӽð�ü ����
	return temp;  // �ӽð�ü ����
}

Time& Time::operator++()  // ����ǥ�� ���������� 
{
	min++;
	if (min == 60) {
		hour++;
		min = 0;
	}
	cout << "operator++()..." << endl;

	return *this;  // ������ ��ü�� �����Ѵ�.
}

Time Time::operator++(int)  // ����ǥ�� ����������
{
	Time temp(hour, min);  // �����Ǳ� ���� ��ü�� �ӽ� �����Ѵ�.
	min++;
	if (min == 60) {
		hour++;
		min = 0;
	}
	cout << "operator()..." << endl;
	return temp;   // �����Ǳ� ���� ��ü�� �����Ѵ�.
}

void Time::show()
{
	cout << hour << "�ð� " << min << "��" << endl;
}

void func(Time& br);

int main()
{
//{
//	Time a(5, 50), b(3, 30), c;
//
//	c = -b + a;  // c.operator=(b.operator-().operator+(a))
//	a.show();  // 5�ð� 50��
//	b.show();  // 3�ð� 30��
//	c.show();  // 2�ð� 20��
//
//	c = ++a + b;
//	a.show();  // 5�ð� 51��
//	b.show();  // 3�ð� 30��
//	c.show();  // 9�ð� 21�� 
//
//	c = a + b++;
//	a.show();  // 5�ð� 51��
//	b.show();  // 3�ð� 31��
//	c.show();  // 9�ð� 21��
//
//	func(++a);
//	a.show();  // 5�ð� 53��
//	//----------------------
//	cout << "----------------------------------------------------------------" << endl;
//	c = --a;
//	a.show();
//	c.show();
//
//	c = a--;
//	a.show();
//	c.show();

Time a(2, 30), b;
b = a * 3;
a.show();
b.show();

b = 5 * a;	//���� �����ڴ� ��ȯ��Ģ�� �����ϹǷ� �� ǥ���� �����ؾ���
//b=operator*(5,a); <==�Ϲ�(�ܺ�) ������ �Լ��� ����� ȣ��
a.show();
b.show();

//----------------------------------------
b = a - 15;	//a��ü���� 15���� �� ����� ������ b��ü�� ����
a.show();
b.show();
//----------------------------------------
b = a + 30;
a.show();
b.show();

b = 40 + a;		//�ܺ�(�Ϲ�)�Լ��� ��������� ��
a.show();
b.show();


return 0;
}
Time operator-(int n, Time& r)
{
	return r - n;
}
Time operator+(int n, Time& r)
{
	return r + n;
}
Time operator*(int n, Time& r)	//�ܺ�(�Ϲ�)�Լ� �̹Ƿ� this�� �������� x
{
	//int h, m;
	//h = this->hour * n;	//����!!hour,min�� private����̱� ����!!
	//m = this->min * n;	//����!!

	return r*n;	//return r.operator*(n);	<== Ŭ������ ����Լ��� ���ǵ� ���������� �Լ� ȣ��
}
void func(Time& br)
{
	br++;
}

