#include <iostream>
#include"Plenty.h"

int main()
{
	setlocale(LC_ALL, "rus");
	
	try
	{
		Plenty b;//пустое множество
		Plenty c(4);
		cin >> c;
		b = c;//операция присваивания
		cout  << "b:= "<<b << endl;
		Plenty d(2);
		cin >> d;
		cout <<"d:= "<< d << endl;
		d = d + c;//операция обьединения 
		cout <<"d:= "<< d << endl;
		cout <<"элемент под выбранным номером: "<< d[2] << endl;//операция доступа по индексу
		cout <<"размер множества:= "<< d() << endl;//размер множества
		Plenty g(4);
		cin >> g;
		g.operator++(7);//добавление элемента в множество
		cout << "g:= "<<g << endl;
		Plenty a(7);
		cin >> a;
		cout <<"a:= "<< a << endl;
		a.operator++(1);//исключительная ситуация. мы не можем добавить число в множество тк MAX_SIZE=7
		cout << a;

	}
	catch (int)
	{
		cout << "Error!!!" << endl;
	}
	return 0;
}

