#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include<list>
#include<iterator>
using namespace std;
typedef vector<double>Vec;//определяем тип для работы с вектором
//функция для формирования вектора
Vec make_vector(int n)
{
	Vec v;//пустой вектор
	for (int i = 0; i < n; i++)
	{
		double a = rand() % 100;
		v.push_back(a);//добавляем а в конец вектора
	}
	return v;//возвращаем вектор как результа работы функции
}
//функция для печати вектора
void print_vector(Vec v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}
Vec vecplusk(Vec v)
{
	double k = 0;
	Vec p;
	for (int i = 0; i < v.size(); i++)
	{
		k+=v[i];
	}
	k = k / v.size();
	cout << "k " << k << endl;
	for (int i = 0; i < v.size(); i++)
	{
		p.push_back(v[i]+k) ;
	}
	return p;
}
void deleteelem(Vec& v)
{
	double o = v.front();
	for (auto i = v.begin(); i != v.end(); ++i)
	{
		if (o > *i) {
			o = *i;
		}
	}
	//for (int i = 0; i < v.size(); i++)
	//{
		//if (o > v[i])
		//{
			//o = v[i];
		//}
	//}
	cout << o << endl;
	for (auto i = v.begin(); i!= v.end();)
	{
		if (*i == o) {
			i = v.erase(i);
		}
		else {
			++i;
		}
}	
}
void frontelem(Vec& v)
{
	double o = v.front();
	for (auto i = v.begin(); i != v.end(); ++i)
	{
		if (o < *i) {
			o = *i;
		}
	}
	cout << o << endl;
	for (auto i = v.begin(); i != v.end();)
	{
		if (*i == o) {
			i = v.erase(i);
		}
		else {
			++i;
		}
	}
	v.insert(v.begin(), o);
	//for (int i = 1; i < p[i]; i+;+)
	//	p[i] = v[i];
}


//основная функция
int main()
{
	try
	{
		Vec v;//вектор
		Vec::iterator vi = v.begin();//итератор
		int n;
		cout << "N?"; cin >> n;
		v = make_vector(n);//формирование вектора
		print_vector(v);//печать вектора
		v=vecplusk(v);
		print_vector(v);
		deleteelem(v);
		print_vector(v);
		frontelem(v);
		print_vector(v);
	}
	catch (int)//блок обработки ошибок
	{
		cout << "error!";
	}
}

//Найти максимальный
//элемент и добавить его в
//начало контейнера

//Найти минимальный
//элемент и удалить его из
//контейнера
// 
//К каждому элементу добавить
//среднее арифметическое
//контейнерa