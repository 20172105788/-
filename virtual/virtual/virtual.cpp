// virtual.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CBase
{
public:
	virtual void test() = 0;
	virtual void display()
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
	CBase *p;
	CDervid obj2;
    return 0;
}
