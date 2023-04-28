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

	cout << "����� ������������ ������� � 2-�� �����������" << this << endl;
}
 istream& operator>>(istream& in, Long& t)
{
	cout << "������ ����� ����� "; in >> t.first;
	cout << "������ ����� ����� "; in >> t.second;
	return in;
}
 ostream& operator<<(ostream& out, const Long& t)
{
	out << "������ ����� �����: " << t.first << endl;
	out << "������ ����� �����: " << t.second << endl;
	return out;
}
Long Long::operator+(const Long& t)
{
	cout << "�������� �������� �������� 1" << endl;
	Long temp;
	temp.first = this->first + t.first;
	temp.second = this->second + t.second;

	return temp;
}
Long Long::operator-(const Long& t)
{
	cout << "�������� �������� ���������" << endl;
	Long temp;
	temp.first = this->first - t.first;
	temp.second = this->second - t.second;

	return temp;
}

Long Long::operator*(const Long& t)
{
	cout << "�������� �������� ���������" << endl;
	Long temp;
	temp.first = this->first * t.first;
	temp.second = this->second * t.second;

	return temp;
}
void Long::Print()
{
	cout << "������ ����� �����: " << first << endl << "������ ����� �����: " << second << endl << endl;
}