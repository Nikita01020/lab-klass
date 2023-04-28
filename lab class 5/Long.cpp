#include<iostream>
#include<ostream>
#include"Header.h"
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
 istream& operator>>(istream& in, Long& t)
{
	cout << "Первая часть числа "; in >> t.first;
	cout << "Вторая часть числа "; in >> t.second;
	return in;
}
 ostream& operator<<(ostream& out, const Long& t)
{
	out << "Первая часть числа: " << t.first << endl;
	out << "Вторая часть число: " << t.second << endl;
	return out;
}
Long Long::operator+(const Long& t)
{
	cout << "Вызвался оператор сложения 1" << endl;
	Long temp;
	temp.first = this->first + t.first;
	temp.second = this->second + t.second;

	return temp;
}
Long Long::operator-(const Long& t)
{
	cout << "вызвался оператор вычитания" << endl;
	Long temp;
	temp.first = this->first - t.first;
	temp.second = this->second - t.second;

	return temp;
}

Long Long::operator*(const Long& t)
{
	cout << "вызвался оператор умножения" << endl;
	Long temp;
	temp.first = this->first * t.first;
	temp.second = this->second * t.second;

	return temp;
}
void Long::Print()
{
	cout << "Первая часть числа: " << first << endl << "Вторая часть числа: " << second << endl << endl;
}