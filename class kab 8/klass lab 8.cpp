#include <iostream>
#include<string>
#include"Object.h"
#include"Event.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	//Human* a = new Human;
	//a->Input();
	//a->Show();

	//Student* c = new Student;
	//c->Input();
	//c->Show();
	Human* a = new Human;
	a->Input();
	Student* b = new Student;
	b->Input();
	Vector v(10);
	Object*p = a;
	v.Add();
	p = b;
	v.Add();
	v.Show();
	v.Del();
	cout << "размер вектора= " << v() + 1 << " элемента" << endl;
	Dialog D;
	D.Execute();
}

