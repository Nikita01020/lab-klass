#include<iostream>
using namespace std;
class Money
{
public:
	Money(void);
	Money(long int first, int second);
	Money(const Money&t);
	Money& operator=(const Money&t);
	//������������� �������� �����-������
	friend ostream& operator<< (ostream& out, const Money&);
	friend istream& operator>> (istream& in, Money&);
	Money operator+(const Money& a);
public:
	virtual ~Money(void) {};
private:
	long int first;
	int second;
};
