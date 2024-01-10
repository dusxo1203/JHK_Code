#include<fstream>
#include<iostream>
using namespace std;
#include<windows.h>

int main()
{
	ifstream fin;
	ofstream fout("c:\\data\\res.txt"); // ���� ���� ���� open 
										// �߰� �ϱ� ���� ������ fout("c:\\data\\res.txt", ios_base::app);

	char filename[100];
	char name[20];
	char addr[100];
	double height;

	cout << "���� �� ���ϸ��� �Է��Ͻÿ� : ";
	cin >> filename;

	fin.open(filename); // �б� ���� open
	if (fin.fail())  // ���� ���� üũ
	{
		cout << filename << "file open error!!!" << endl;
		system("pause");
		return 0;
	}
	while (1)
	{
		fin.getline(name, sizeof(name));
		if (fin.eof()) { break; }  // file �� üũ
		fin.getline(addr, sizeof(addr));
		fin >> height;
		fin.get(); // ���������� ���� �ڿ� �����ִ� ���๮��('\n')�� �о����
		cout << name << " " << addr << " " << height << endl; // ����Ϳ� ���
	}

	fin.clear();  // eof ���¸� clear���־�� ������ �ٽ� ���� �� �ְ� ��
	fin.seekg(0); // file�� ���� ��ġ�� �� ó������ �ǵ��� ����

	while (1)
	{
		fin.getline(name, sizeof(name));
		if (fin.eof()) { break; }  // file �� üũ
		fin.getline(addr, sizeof(addr));
		fin >> height;
		fin.get();
		fout << name << " " << addr << " " << height << endl; // res.txt���Ͽ� ���
	}
	fin.close();  // ���� �ݱ�
	fout.close(); // ���� �ݱ�
	return 0;
}
