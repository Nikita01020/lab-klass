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

	cout << "����� ������������ ������� � 2-�� �����������" << this << endl;
}
Pair& Pair:: operator = (const Pair& t)
{
	cout << "�������� �������� = " << this << endl;
	this->first = t.first;

	this->second = t.second;


	cout << endl;
	return *this;
}
Pair Pair::operator+(const Pair& t)
{
	cout << "�������� �������� ��������" << endl;
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
	cout << "������ �����: " << first << endl << "������ �����: " << second << endl << endl;
}
Pair::~Pair()
{
	cout << "�������� ����������!" << endl;
}
int Pair::GetFirst()
{
	return first;
}
