#include<iostream>
#include<ostream>
#include"Header.h"
using namespace std;
Vector::Vector()
{
	beg = 0;
	size = 0;
	cur = 0;
}
Vector::~Vector()
{
	cout << "вывзвался деструктор" << endl;

}
Vector::Vector(int n)
{
	beg = new Number * [n];
	cur = 0;
	size = n;
}
void Vector::Add(Number* p)
{
	if (cur < size)
	{
		beg[cur] = p;
		cur++;
	}
}
 ostream& operator<<(ostream& out, const Vector& v)
{
	if (v.size == 0) out << "Empty!" << endl;
	Number** p = v.beg;
	for (int i = 0; i < v.cur; i++)
	{
		(*p)->Print();
		p++;
	}
	return out;
}
