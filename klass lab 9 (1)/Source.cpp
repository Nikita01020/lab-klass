#include<iostream>
#include"Plenty.h"
using namespace std;
Plenty::Plenty(int s)
{
	if (s > MAX_SIZE) throw 1;
	size = s;
	data = new int[s];
	for (int i = 0; i < size; i++)
		data[i] = 0;
}
Plenty::Plenty(const Plenty& a)
{
	size = a.size;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
}
Plenty::~Plenty()
{
	delete[]data;
	data = 0;
}
Plenty::Plenty(int s, int* mas)
{
	if (s > MAX_SIZE) throw 1;
	size = s;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = mas[i];
}
Plenty& Plenty::operator=(const Plenty& a)
{
	if (this == &a)return *this;
	size = a.size;
	if (data != 0) delete[]data;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
	return *this;
}
ostream& operator<<(ostream& out, const Plenty& a)
{
	if (a.size == 0)out << "Empty\n";
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
int& Plenty::operator[](int index)
{

	if (index < 0) throw 2;
	if (index >= size) throw 3;
	return data[index];
}
Plenty Plenty::operator+(const Plenty& a)
{
	if (size + a.size > MAX_SIZE) throw 4;
	Plenty temp(size + a.size);
	for (int i = 0; i < size; i++)
		temp.data[i] = data[i];
	for (int i = size; i < size + a.size; i++)
		temp.data[i] = a.data[i - size];

	return temp;

}
Plenty Plenty::operator++(int x)
{
	if (size == MAX_SIZE) throw 5;
	Plenty temp(size,data);
	delete[] data;
	size++;
	data = new int[size];
	for(int i=0;i<size-1;i++)
		data[i] = temp.data[i];
	for (int i = size - 1; i < size; i++)
		data[i] = x;
	return *this;
	
	
}
int Plenty::operator ()()
{
	return size;
}