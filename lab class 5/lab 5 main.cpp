#include<iostream>
#include<ostream>
#include"Header.h"
using namespace std;

int main()
{

	setlocale(LC_ALL, "rus");
	Vector v(5);
	Pair a;
	cin >> a;
	Long b;
	cin >> b;
	Number* p = &a;
	v.Add(p);
	p = &b;
	v.Add(p);
	cout << v;


	return 0;
}

