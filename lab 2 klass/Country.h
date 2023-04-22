#include <iostream>
#include<string>
using namespace std;
class Country
{
private:
    string capital;
    int people;
    double s;
public:
    Country();
    Country(const Country&);
    Country(string Capital1, int people1, double s1);//конструктор////////////
    void SetCapital(string Capital1);
    void SetPeople(int people1);
    void SetS(double s1);
    void Print();
};
