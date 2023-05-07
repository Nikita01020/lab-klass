#include<iostream>
#include<string>
using namespace std;
const int MAX_SIZE = 7;
class Plenty
{
private:
    int size;
    int* data;
public:
    Plenty() { size = 0; data = 0; }
    Plenty(int s);
    Plenty(int s, int* mas);
    Plenty(const Plenty& a);
    ~Plenty();
    Plenty& operator=(const Plenty& a);
    Plenty operator+(const Plenty& a);
    int& operator[](int index);
    int operator ()();
    Plenty operator++(int);
    friend ostream& operator<<(ostream& out, const Plenty& a);
    friend istream& operator>>(istream& in, Plenty& a);
};
