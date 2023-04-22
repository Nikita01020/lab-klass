#include <iostream>
#include "Money.h"
using namespace std;
Money:: 

Money::Money()
{
    rub = 0;
    cop = 0;
}
Money::Money(long int rub1, int cop1)
{
    rub = rub1;
    cop = cop1;
}
Money::Money(const Money& t)
{
    rub = t.rub;
    cop = t.cop;

    cout << "вызов конструктора обьекта с 2-мя аргументами" << this << endl;
}

Money& Money:: operator = (const Money& t)
{
    cout << "Вызвался оператор = " << this << endl;
    this->rub = t.rub;

    this->cop = t.cop;


    cout << endl;
    return *this;
}
Money:: ~Money()
{
    cout << "вызвался деструктор" << this << endl;
}
Money Money::operator+(const Money& t)
{
    Money temp;
    temp.rub = this->rub + t.rub;
    temp.cop = this->cop + t.cop;
    if (temp.cop >= 100)
    {
        temp.rub = temp.rub + 1;
        temp.cop = temp.cop - 100;
    }
    return temp;
}
Money Money::operator-(const Money& t)
{
    Money temp;
    temp.rub = this->rub - t.rub;
    temp.cop = this->cop - t.cop;
    if (temp.cop < 0)
        temp.rub = temp.rub - 1;
    temp.cop = 100 + temp.cop;
    return temp;
}


void Money::print()
{
    cout << "rub= " << rub << endl << "cop= " << cop << endl;
    cout << endl;
}
void Money::Setrub(long int rub)
{
    this->rub = rub;
}
void Money::Setcop(int cop)
{
    this->cop = cop;
}
