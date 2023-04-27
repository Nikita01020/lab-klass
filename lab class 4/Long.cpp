#include<iostream>
#include"Pair.h"
using namespace std;
Long::Long()
{
	first = 0;
	second = 0;
}
Long::Long(int first, int second)
{
	this->first = first;
	this->second = second;
}
Long::Long(const Long& t)
{
	first = t.first;
	second = t.second;

	cout << "вызов конструктора обьекта с 2-мя аргументами" << this << endl;
}
Long Long::operator+(const Long& t)
{
	cout << "Вызвался оператор сложения 1 " << endl;
	Long temp;
	temp.first = this->first + second;
	temp.second = t.first + t.second;

	return temp;
}
Long Long::operator-(const Long& t)
{
	cout << "вызвался оператор вычитания" << endl;
	Long temp;
	temp.first = this->first - second;
	temp.second = t.first - t.second;

	return temp;
}

Long Long::operator*(const Long& t)
{
	cout << "вызвался оператор умножения" << endl;
	Long temp;
	temp.first = this->first * second;
	temp.second = t.first * t.second;

	return temp;
}