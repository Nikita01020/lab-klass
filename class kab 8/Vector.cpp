#include <iostream>
#include<string>
#include"Object.h"
#include"Event.h"
using namespace std;
Vector::Vector(void)
{
	beg = 0;
	cur = 0;
	size = 0;
}
Vector::Vector(int n)
{
	beg = new Object * [n];
	cur = 0;
	size = n;
}
Vector::~Vector(void)
{
	if (beg != 0)delete[] beg;
	beg = 0;
}
void Vector::Add()
{
	Object*p;
	cout << "1.Human" << endl;
	cout << "2.Student" << endl;
	int y;
	cin >> y;
	if (y == 1)
	{
		Human* a = new (Human);
		a->Input();
		p = a;
		if (cur < size)
		{
			beg[cur] = p;
			cur++;
		}
	}
	else

		if (y == 2)
		{
			Student* b = new Student;
			b->Input();
			p = b;
			if (cur < size)
			{
				beg[cur] = p;
				cur++;
			}
		}
		else return;
}
void Vector::Del()
{
	if (cur == 0)return;//пустой
	cur--;
}
void Vector::Show()
{
	if (cur == 0) cout << "Empty" << endl;
	Object** p = beg;//указатель на указатель типа Object
	for (int i = 0; i < cur; i++)
	{
		(*p)->Show();//вызов метода Show() (позднее связывание)
		p++;//передвигаем указатель на следующий объект
	}
}
int Vector::operator()()
{
	return cur;
	}
void Vector::HandleEvent(const TEvent& e)
{
	if (e.what == evMessage)
	{
		Object** p = beg;
		for (int i = 0; i < cur; i++)
		{
			(*p)->HandleEvent(e);//вызов метода (позднее связывание)
			p++;//передвигаем указатель на следующий объект
		}
	}
}
