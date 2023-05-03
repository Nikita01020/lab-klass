#include "Money.h"
Money::Money(void)
{
	first = second = 0;
}
Money::Money(long int first, int second)
{
	this->first = first;
	this->second = second;
}
Money::Money(const Money& t)
{
	first = t.first;
	second = t.second;
}
Money& Money::operator=(const Money&t)
{
	first = t.first;
	second = t.second;
	return *this;
}
Money Money::operator+(const Money& a)
{
	Money temp(a.first + first, a.second + second);
	return temp;
}
//перегруженные операции ввода-вывода
ostream& operator<< (ostream& out, const Money&t)
{
	out << t.first << " : " << t.second;
	return out;
}
istream& operator>> (istream& in, Money& t)
{
	cout << "\nfirst"; in >> t.first;
	cout << "\nsecond"; in >> t.second;
	return in;

}