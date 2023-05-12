#pragma once
#include <vector>
#include<iostream>
#include<vector>
#include <cstdlib>
#include <ctime>
#include<list>
#include<iterator>
using namespace std;


template<class T>
class Plenty
{
	vector<T> v;
	int len;
public:
	Plenty(void);
	Plenty(int n);
	void Print();
	~Plenty(void);
    T Srednee();
    void Add(T el);
    T Min();
    void DelMin(T el);
    T Max();
    void frontMax(T el);

};
template<class T>
Plenty<T>::Plenty()
{
    len = 0;
}
template<class T>
Plenty<T>::~Plenty(void)
{

}
template<class T>
Plenty<T>::Plenty(int n)
{
    T a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    len = v.size();
}
template<class T>
void Plenty<T>::Print()
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << "  ";
    cout << endl;
}
template<class T>
 T Plenty<T>::Srednee()
{
    T s = v[0];
    for (int i=0; i < v.size(); i++)
        s = s + v[i];
    return s / v.size();
}
 template<class T>
 void Plenty<T>::Add(T el)
 {

     for (int i = 0; i < v.size(); i++)
         v[i] = v[i] + el;
 }
 template<class T>
 T Plenty<T>::Min()
 {
     T min = v[0];
     for (int i = 0; i < v.size(); i++)
     {
         if (min > v[i]) {
             min = v[i];
         }
     }
     return min;
 }
 template<class T>
 void Plenty<T>::DelMin(T el)
 {
     for (auto i = v.begin(); i != v.end();)
     {
         if (*i == el) {
             i = v.erase(i);
         }
         else {
             ++i;
         }
     }
 }
 template<class T>
 T Plenty<T>::Max()
 {
     T max = v[0];
     for (int i = 0; i < v.size(); i++)
     {
         if (max < v[i]) {
             max = v[i];
         }
     }
     return max;
 }
 template<class T>
 void Plenty<T>::frontMax(T el)
 {
     for (auto i = v.begin(); i != v.end();)
     {
         if (*i == el) {
             i = v.erase(i);
         }
         else {
             ++i;
         }
     }
     v.insert(v.begin(), el);
 }

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
