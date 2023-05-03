#include <iostream>
using namespace std;
class Iterator
{
    friend class Plenty;
private:
    int* elem;
public:
    Iterator() { elem = 0; }
    Iterator(const Iterator& it) { elem = it.elem; }
    bool operator==(const Iterator& it) { return elem == it.elem; }
    bool operator!=(const Iterator& it) { return elem != it.elem; };
    void operator++() { ++elem; };
    //перегруженная операция декремент
    void operator--() { --elem; }
    //перегруженная операция разыменования
    int& operator *() const { return*elem; }
};
class Plenty
{
private:
    int size;
    int* data;
    Iterator beg;
    Iterator end;
public:
    Iterator first() { return beg; }
    Iterator last() { return end; }
    Plenty(int s);
    Plenty(const Plenty& a);
    ~Plenty();
    Plenty& operator=(const Plenty& a);
    Plenty operator+(const Plenty& a);
    int& operator[](int index);
    int operator ()();
    friend ostream& operator<<(ostream& out, const Plenty& a);
    friend istream& operator>>(istream& in, Plenty& a);
};
