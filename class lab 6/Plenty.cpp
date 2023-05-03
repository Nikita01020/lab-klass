#include<iostream>
#include"6lab .h"
using namespace std;
Plenty::Plenty(int s )
{
    size = s;
    data = new int[size];
    for (int i = 0; i < size; i++)
        data[i] = 0;
    beg.elem = &data[0];
    end.elem = &data[size];
}
Plenty::Plenty(const Plenty& a)
{
    size = a.size;
    data = new int[size];
    for (int i = 0; i < size; i++)
        data[i] = a.data[i];
    beg = a.beg;
    end = a.end;
}
Plenty::~Plenty()
{
    delete[]data;
    data = 0;
}
Plenty& Plenty::operator=(const Plenty& a)
{
    if (this == &a)return *this;
    size = a.size;
    if (data != 0) delete[]data;
    data = new int[size];
    for (int i = 0; i < size; i++)
        data[i] = a.data[i];
    beg = a.beg;
    end = a.end;
    return *this;
}
Plenty Plenty::operator+(const Plenty& a)
{
    Plenty temp(size + a.size);
    for (int i = 0; i < size; i++)
        temp.data[i] = data[i];
    for (int i = size; i < size + a.size; i++)
        temp.data[i] = a.data[i - size];

    return temp;

}
int& Plenty::operator[](int index)
{
    if (index < size) return data[index];
    else cout << "\nError! Index>size";
}
int Plenty::operator ()()
{
    return size;
}
ostream& operator<<(ostream& out, const Plenty& a)
{
    for (int i = 0; i < a.size; ++i)
        out << a.data[i] << " ";
    return out;
}
istream& operator>>(istream& in, Plenty& a)
{
    for (int i = 0; i < a.size; ++i)
        in >> a.data[i];
    return in;
}