#pragma once
#include <iostream>//библиотека для работы со стандартными потоками
#include <fstream> //библиотека для работы со файловыми потоками
using namespace std;
class Money
{
private:
    long int rub;
    int cop;
public:
    Money();
    Money(long int rub1, int cop1);
    Money(const Money& t);
    Money& operator = (const Money& t);
    ~Money();
    Money operator+(const Money& t);
    Money operator-(const Money& t);
    friend ostream& operator <<(ostream& out, const Money& p);
    friend istream& operator>>(istream& in, Money& p);
    friend fstream& operator>>(fstream& fin, Money& p);
    friend fstream& operator <<(fstream& fout, const Money& p);
    void SetRubSetCop( int t);
    void SetRubSetCop2();
};