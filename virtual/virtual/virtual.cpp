// virtual.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CBase
{
public:
	void display()
	{
		cout << "����" << endl;
	}
};
class CDervid :public CBase
{
public:
	void test()
	{

	}
	void display()
	{
		cout << "������" << endl;
	}
};

int main()
{
	CBase obj1;
	obj1.display();
	CDervid obj2;
	obj2.CBase::display();
    return 0;
}
