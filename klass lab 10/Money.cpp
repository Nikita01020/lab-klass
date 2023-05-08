#include <iostream>
#include"Money.h"
using namespace std;
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

    cout << "âûçîâ êîíñòðóêòîðà îáüåêòà ñ 2-ìÿ àðãóìåíòàìè" << this << endl;
}

Money& Money:: operator = (const Money& t)
{
    cout << "Âûçâàëñÿ îïåðàòîð = " << this << endl;
    this->rub = t.rub;

    this->cop = t.cop;


    cout << endl;
    return *this;
}
Money:: ~Money()
{
    cout << "âûçâàëñÿ äåñòðóêòîð" << this << endl;
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
ostream& operator<<(ostream& out, const Money& p)
{
    out << "rub: " << p.rub << " cop:" << p.cop << "\n";
    return out;
}
istream& operator>>(istream& in, Money& p)
{
    cout << "rub?"; in >> p.rub;
    cout << "cop?"; in >> p.cop;
    return in;
}
fstream& operator>>(fstream& fin, Money& p)
{
    fin >> p.rub;
    fin >> p.cop;
    return fin;
}
fstream& operator<<(fstream& fout, const Money& p)
{
    fout << p.rub << "\n" << p.cop << "\n";
    return fout;
}
void Money::SetRubSetCop( int t)
{
    rub= rub + t;
    cop = cop + t;
    if (cop >= 100)
    {
        rub++;
        cop = cop - 100;
    }
}
void Money::SetRubSetCop2()
{
    int t = 1;
    int o = 50;
    rub = rub + t;
    cop = cop + o;
    if (cop >= 100)
    {
        rub++;
        cop = cop - 100;
    }
}