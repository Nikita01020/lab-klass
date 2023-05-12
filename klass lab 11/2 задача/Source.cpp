#include "Money.h"
#include<iostream>
using namespace std;
Money& Money:: operator = (const Money& t)
{
    if (&t == this) return *this;
    this->rub = t.rub;

    this->cop = t.cop;


    cout << endl;
    return *this;
}
istream& operator>>(istream& in, Money& t)
{
    cout << "min?"; in >> t.rub;
    cout << "sec?"; in >> t.cop;
    return in;
}
//перегрузка глобальной функции-операции вывода
ostream& operator<<(ostream& out, const Money& t)
{
    return (out << t.rub << " : " << t.cop);
}
bool Money::operator <(const Money& t)
{
    if (rub < t.rub)return true;
    if (rub == t.rub && cop < t.cop)return true;
    return false;
}
bool Money::operator >(const Money& t)
{
    if (rub > t.rub)return true;
    if (rub == t.rub && cop > t.cop)return true;
    return false;
}

bool Money::operator==(const Money& t)
{
    return(rub == t.rub && cop == t.cop);
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
//перегрузка бинарной операции деления
Money Money::operator/(const Money& t)
{
    Money temp;
    temp.rub = this->rub / t.rub;
    temp.cop = this->cop / t.cop;
    return temp;
}
Money Money::operator/(const int& t)
{
    Money p;
    p.rub = rub / t;
    p.cop = cop / t;
    return p;
}
void Money::set_rand()
{
    rub = round((((double)rand()) / RAND_MAX * 100) * 100) / 100;
    cop = round((((double)rand()) / RAND_MAX * 100) * 100) / 100;
}



///элемент и добавить его в
//начало контейнера

//Найти минимальный
//элемент и удалить его из
//контейнера
// 
//К каждому элементу добавить
//среднее арифметическое
//контейнерa