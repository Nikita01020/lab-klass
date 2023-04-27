#include<iostream>
#include"Pair.h"
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
Pair& Pair:: operator = (const Pair& t)
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
Pair::~Pair()
{
	cout << "Вызвался деструктор!" << endl;
}
int Pair::GetFirst()
{
	return first;
}
