#include <iostream>
#include "Header.h"
using namespace std;

void xy::Read()
{
	cin >> A >> B >> y;
}

void xy::Init(double A, double B, double y)
{
	this->A = A;
	this->B = B;
	this->y = y;
}

double xy::Root()
{
	if (A == 0)
	{
		cout << "A=0!!" << endl;
		return 0;
	}
	else
	{
		x = (B - y) / A;
		cout << "В уравнении y=Ax+B: x=  " << x << endl;
		return x;
	}
}
void xy::Show()
{
	cout << "уравнение: y=Ax+B" << endl << "y= " << y << endl << "A= " << A << endl << "B= " << B << endl;
}