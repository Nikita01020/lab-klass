#include<iostream>
#include<string>
#include "Country.h"
using namespace std;
Country::Country()
{
    capital = "Msk";
    people = 1000000000;
    s = 3000.2;
}
//Country::Country() { cout << "Вызов конструктора обьекта" << this << endl; }
Country::Country(const Country& t)
{
    capital = t.capital;
    people = t.people;
    s = t.s;
    cout << "вызов конструктора обьекта с 3-мя аргументами" << this << endl;
}
Country::Country(string Capital1, int people1, double s1)//конструктор////////////
{
    capital = Capital1;
    people = people1;
    s = s1;
}
void Country:: SetCapital(string Capital1)
{
    capital = Capital1;
}
void Country:: SetPeople(int people1)
{
    people = people1;
}
void Country:: SetS(double s1)
{
    s = s1;
}
void Country:: Print()
{
    cout << "Capital - " << capital << "\n" << "people - " << people << "\n" << "s = " << s << endl;
}