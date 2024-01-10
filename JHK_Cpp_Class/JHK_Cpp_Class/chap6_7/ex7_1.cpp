#include<fstream>
#include<iostream>
using namespace std;
#include<windows.h>

int main()
{
	ifstream fin;
	ofstream fout("c:\\data\\res.txt"); // 새로 쓰기 위해 open 
										// 추가 하기 위한 오픈은 fout("c:\\data\\res.txt", ios_base::app);

	char filename[100];
	char name[20];
	char addr[100];
	double height;

	cout << "오픈 할 파일명을 입력하시오 : ";
	cin >> filename;

	fin.open(filename); // 읽기 위해 open
	if (fin.fail())  // 오픈 에러 체크
	{
		cout << filename << "file open error!!!" << endl;
		system("pause");
		return 0;
	}
	while (1)
	{
		fin.getline(name, sizeof(name));
		if (fin.eof()) { break; }  // file 끝 체크
		fin.getline(addr, sizeof(addr));
		fin >> height;
		fin.get(); // 숫자정보를 읽은 뒤에 남아있는 개행문자('\n')을 읽어들임
		cout << name << " " << addr << " " << height << endl; // 모니터에 출력
	}

	fin.clear();  // eof 상태를 clear해주어야 파일을 다시 읽을 수 있게 됨
	fin.seekg(0); // file의 읽을 위치를 맨 처음으로 되돌려 놓음

	while (1)
	{
		fin.getline(name, sizeof(name));
		if (fin.eof()) { break; }  // file 끝 체크
		fin.getline(addr, sizeof(addr));
		fin >> height;
		fin.get();
		fout << name << " " << addr << " " << height << endl; // res.txt파일에 출력
	}
	fin.close();  // 파일 닫기
	fout.close(); // 파일 닫기
	return 0;
}
