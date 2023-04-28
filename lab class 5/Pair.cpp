#include<iostream>
#include<ostream>
#include"Header.h"
using namespace std;
Pair::Pair()
{
	first = 0;
	second = 0;
}
Pair::Pair(int first, int second)
{
	this->first = first;
	this->second = second;
}
Pair::Pair(const Pair& t)
{
	first = t.first;
	second = t.second;

	cout << "вызов конструктора обьекта с 2-мя аргументами" << this << endl;
}
istream& operator>>(istream& in, Pair& t)
{
	cout << "Первое число "; in >> t.first;
	cout << "Второе число "; in >> t.second;
	return in;
}
ostream& operator<<(ostream& out, const Pair& t)
{
	out << "Первое число: " << t.first << endl;
	out << "Второе число: " << t.second << endl;
	return out;
}
Pair& Pair::operator = (const Pair& t)
{
	cout << "Вызвался оператор = " << this << endl;
	this->first = t.first;

	this->second = t.second;


	cout << endl;
	return *this;
}
Pair Pair::operator+(const Pair& t)
{
	cout << "вызвался оператор сложения" << endl;
	Pair temp;
	temp.first = this->first + second;
	temp.second = t.first + t.second;

	return temp;
}
void Pair::SetFirst(int first)
{
	this->first = first;
}
void Pair::SetSecond(int second)
{
	this->second = second;
}
void Pair::Print()
{
	cout << "Первое число: " << first << endl << "Второе число: " << second << endl << endl;
}
Pair:: ~Pair()
{
	cout << "Вызвался деструктор!" << endl;
}
int Pair::GetFirst()
{
	return first;
}