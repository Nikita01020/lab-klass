#include <vector>
#include<iostream>
#include"Plenty.h"
using namespace std;
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