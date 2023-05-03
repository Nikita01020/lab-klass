#include <iostream>
#include"Planty.h"
#include"Money.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	Plenty<int>A(5, 0);
	cin >> A;
	cout << A << endl;
	//инициализация и вывод значений вектора
	Plenty <int>B(10, 1);
	cout << B << endl;
	//операция присваивания
	B = A;
	cout << B << endl;
	//доступ по индексу
	cout << A[2] << endl;
	//получение длины вектора
	cout << "size=" << A() << endl;
	//операция сложения с константой
	Money t;
	cin >> t;
	cout << t;
	Money g (2, 6);
	Money o(5, 3);
	o = g + o;
	cout << o << endl;
	Money t;
	cin >> t;
	cout << t;
	Plenty<Money>A(5, t);
	cin >> A;
	cout << A << endl;
	Plenty <Money>B(10, t);
	cout << B << endl;
	B = A;
	cout << B << endl;
	cout << A[2] << endl;
	cout << "size=" << A() << endl;
	
}
