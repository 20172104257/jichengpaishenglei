// jichengpaishenglei.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inches;
public:
	CFeet();
	CFeet(int th, int fh);
	~CFeet();
	void display();
	int getfeet();
	int getinche();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
	cout << "����Ĭ�Ϲ��캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet::CFeet(int th, int fh)
{
	feet = th;
	inches = fh;
	cout<<"���๹�캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet::~CFeet()
{
	cout << "������������" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
void CFeet::display()
{
	cout<<"Display" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinche()
{
	return inches;
}
class CMyfeet :public CFeet
{
public:
	CMyfeet();
	CMyfeet(int th, int fh);
	~CMyfeet();
};
CMyfeet::CMyfeet()
{
	cout<<"������Ĭ�Ϲ��캯��"<<feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CMyfeet::CMyfeet(int t, int f)//:CFeet(t,f)
{
	feet = t;
	inches = f;
	cout<< "�����๹�캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CMyfeet::~CMyfeet()
{
	cout<< "��������������" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int main()
{
	CMyfeet of1(2,6);
	of1.display();
    return 0;
}

