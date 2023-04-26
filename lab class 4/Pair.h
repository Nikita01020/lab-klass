#include<iostream>
using namespace std;
class Pair
{
protected:
	int first;
	int second;
public:
	Pair();
	Pair(int first, int second);
	Pair(const Pair& t);
	Pair& operator = (const Pair& t);
	Pair operator+(const Pair& t);
	void SetFirst(int first);
	void SetSecond(int second);
	void Print();
	~Pair();
	int GetFirst();
};
class Long : public Pair
{

public:
	Long();
	Long(int first, int second);
	Long(const Long& t);
	Long operator+(const Long& t);
	Long operator-(const Long& t);

	Long operator*(const Long& t);

};

