#include <iostream>
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
        void print();
        void Setrub(long int rub);
        void Setcop(int cop);
};
