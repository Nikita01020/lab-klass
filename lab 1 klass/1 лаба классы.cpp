#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
xy Make_Root()
{
	xy c(5.7, 9.6, 7.5);
	return c;
}

int main()
{
	setlocale(LC_ALL, "rus");
	xy d = Make_Root();
	d.print();
	cout << endl <<endl;
	xy m[3];
	for (int i = 0; i < 3; i++)
	{
		m[i].Read(8.9, 8.8, 5.5);
	}
	for (int i = 0; i < 3; i++)
	{
		m[i].print();
	}
	cout << endl << endl;
	xy* p_mas = new xy[3];
	for (int i = 0; i < 3; i++)
	{
		p_mas[i].Read(6.8, 5.8, 4.8);
	}
	for (int i = 0; i < 3; i++)
	{
		p_mas[i].print();
	}
	xy a(1.5, 20.6, 7.8);
	a.print();
	a.Make_Result();
	return 0;
}