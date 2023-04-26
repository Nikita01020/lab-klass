#include<iostream>
#include "Pair.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	Pair a(2, 4);
	Pair b(6, 9);
	Pair sum = a + b;
	sum.Print();
	Long d(8, 6);
	Long e = d;
	e.Print();
	Long c(5, 9);
	Long sum1 = c + e;
	sum1.Print();
	Long o;
	o.operator=(sum1);
	o.Print();
	Long f(6, 3);
	Long g(8, 3);
	Long i;
	i = f - g;
	i.Print();
	Long x(5, 5);
	Long y(7, 7);
	Long xy = x * y;
	xy.Print();
	return 0;
}