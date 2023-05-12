#pragma once
#include <vector>
#include<iostream>
class Money
{
private:
    long int rub;
    int cop;
public:
    Money() { rub = 0; cop = 0; }
    Money(long int rub1, int cop1) { rub = rub1; cop = cop1; }
    Money(const Money& t) { rub = t.rub; cop = t.cop; }
    Money& operator = (const Money& t);
    ~Money() {};
    void Setrub(long int rub1) { rub = rub1; }
    void Setcop(int cop1) { cop = cop1; }
    long int getrub() { return rub; }
    int getcop() { return cop; }
    friend istream& operator>>(istream& in, Money& t);
    friend ostream& operator<<(ostream& out, const Money& t);
    Money operator+(const Money&);
    Money operator/(const  Money&);
    Money operator/(const int&);
    bool operator >(const  Money&);
    bool operator <(const  Money&);
    bool operator==(const Money&);
    void set_rand();
};