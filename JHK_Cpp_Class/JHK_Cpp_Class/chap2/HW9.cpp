#pragma warning(disable:4996)
#include<iostream>
using namespace std;
#include"Robot.h"
#include<cstring>
#include<iomanip>

void input(int& cnt);
void input(Robot* rp, int cnt);
void work(Robot* rp, int cnt);
void prn(Robot* rp, int cnt);

int main()
{

	int cnt; //로봇의 대수 저장변수
	Robot* rp;
	input(cnt);//로봇의 대수 입력 함수
	
	rp = new Robot[cnt];	//로봇 객체배열 동적할당

	input(rp, cnt);	//로봇명과 에너지양 입력 함수

	work(rp, cnt);	//로봇 일시키기 함수

	prn(rp, cnt);	//로봇명과 에너지 출력 함수

	delete[] rp;

	return 0;
}