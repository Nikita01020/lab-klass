#include <iostream>
#include <iostream>
#include "Header.h"
using namespace std;
xy::xy(double A, double B, double y)
{
	this->A = A;
	this->B = B;
	this->y = y;
}
void xy::Read(double A, double B, double y)
{
	this->A = A;
	this->B = B;
	this->y=y;
}
void xy::SetA(double A)
{
	this->A = A;
}
void xy::SetB(double B)
{
	this->B = B;
}
void xy::SetY(double y)
{
	this->y = y;
}
double xy::Make_Result()
{
	if (A == 0)
	{
		cout << "A=0!!" << endl;
		return 0;
	}
	else
	{
		x = (B - y) / A;
		cout << "Результатом вычисления будет x=  " << x << endl;
		return x;
	}
}
void xy::print()
{
	cout << "уравнение: y=Ax+B" << endl << "y= " << y << endl << "A= " << A << endl << "B= " << B << endl;
}