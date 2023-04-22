#include <iostream>
using namespace std;
class xy
{
private:
	double A;
	double B;
	double y;
	double x;
public:
	xy();
	xy(double A, double B, double y);
	void SetA(double A);
	void SetB(double B);
	void SetY(double y);
	double result();
	void print();
};
