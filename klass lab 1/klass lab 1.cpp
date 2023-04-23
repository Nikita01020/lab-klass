#include <iostream>
#include "Header.h"
using namespace std;

xy Make_xy(double A, double B, double y)
{
	xy c;
	c.Init(A, B, y);
	return c;
}

int main()
{
	setlocale(LC_ALL, "rus");
	xy m[1];
	m[0].Read();
	m[0].Show();
	cout << endl << endl;
	xy* p_mas = new xy[1];
	p_mas[0].Read();
	p_mas[0].Show();
	xy a;
	a.Init(1.5, 20.6, 7.8);
	a.Show();
	double A, B, y;
	cin >> A >> B >> y;
	xy g = Make_xy(A, B, y);
	g.Show();
	g.Root();
	return 0;
}