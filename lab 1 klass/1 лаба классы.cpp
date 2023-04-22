#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	xy a(1.5, 20.6, 7.8);
	a.print();
	a.result();
	return 0;
}