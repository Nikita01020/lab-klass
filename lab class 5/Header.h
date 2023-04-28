#include<iostream>
#include<ostream>
using namespace std;
class Number
{
public:
	virtual void Print() = 0;

};
class Pair : public Number
{
protected:
	int first;
	int second;
public:
	Pair();
	Pair(int first, int second);
	Pair(const Pair& t);
	friend istream& operator>>(istream& in, Pair& t);
	friend ostream& operator<<(ostream& out, const Pair& t);
	Pair& operator = (const Pair& t);
	Pair operator+(const Pair& t);
	void SetFirst(int first);
	void SetSecond(int second);
	void Print();
	virtual ~Pair();
	int GetFirst();
};

class Long : public Pair
{

public:
	Long();
	Long(int first, int second);
	Long(const Long& t);
	friend istream& operator>>(istream& in, Long& t);
	friend ostream& operator<<(ostream& out, const Long& t);
	Long operator+(const Long& t);
	Long operator-(const Long& t);

	Long operator*(const Long& t);
		void Print();

};
class Vector
{
private:
	Number** beg;
	int size;
	int cur;
public:
	Vector();
	~Vector();
	Vector(int n);
	void Add(Number* p);
	friend ostream& operator<<(ostream& out, const Vector& v);
};
