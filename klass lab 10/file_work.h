#include "Money.h"
#include <iostream>
#include <fstream>
using namespace std;
int make_file(const char* f_rub)
{
	fstream stream(f_rub, ios::out | ios::trunc);//открыть для записи
	if (!stream)return -1;//ошибка открытия файла
	int n;
	Money p;
	cout << "N?"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> p;//ввод атрибутов объекта из стандартного потока
		stream << p << "\n";//запись объекта в файловый поток
	}
	stream.close();//закрыть поток
	return n;//вернуть количество записанных объектов
}
int print_file(const char* f_rub)
{
	fstream stream(f_rub, ios::in);//открыть для чтения
	if (!stream)return -1;//ошибка открытия файла
	Money p; int i = 0;
	while (stream >> p)
	{
		cout << p << "\n";
		i++;
	}
	stream.close();
	return i;
}
int del_file(const char* f_rub, int k)
{
	fstream temp("temp", ios::out);//открыть для записи
	fstream stream(f_rub, ios::in);//открыть для чтения
	if (!stream)return -1;//ошибка открытия файла
	int i = 0; Money p;
	while (stream >> p)//пока нет конца файла выполняем чтение объекта
	{
		//если прочитан признак конца файла,то выход из цикла
		if (stream.eof())break;
		i++;
		//если номер объекта не равен k, то записываем его во вспомогательый файл
		if (i != k) temp << p;
	}
	//закрыть файлы
	stream.close(); temp.close();
	remove(f_rub);//удалить старый файл
	rename("temp", f_rub);// переименовать temp
	return i;//количество прочитанных 
}
int change_file(const char* f_rub, int k, Money pp)
{
	fstream temp("temp", ios::out);//открыть для записи
	fstream stream(f_rub, ios::in);//открыть для чтения
	if (!stream)return -1;//ошибка открытия файла
	Money p; int i = 0, l = 0;
	char x;
	while (stream >> p)
	{
		if (stream.eof())break;
		i++;
		if (i == k)
		{
			cout << p << "\n";
			cin >> x;
			if (x == 'n' || x == 'N')break;
			temp << pp;
			l++;
		}
		else temp << p;
	}
	stream.close(); temp.close();
	remove(f_rub);
	rename("temp", f_rub);
	return l;//количество измененных элементов
}
int change_file2(const char* f_rub, int k, Money pp)
{
	fstream temp("temp", ios::out);//открыть для записи
	fstream stream(f_rub, ios::in);//открыть для чтения
	if (!stream)return -1;//ошибка открытия файла
	Money p; int i = 0, l = 0;
	char x;
	while (stream >> p)
	{
		if (stream.eof())break;
		i++;
		if (i == k)
		{
			cout << p << "\n";
			cin >> x;
			if (x == 'n' || x == 'N')break;
			temp << pp;
			l++;
		}
		else temp << p;
	}
	stream.close(); temp.close();
	remove(f_rub);
	rename("temp", f_rub);
	return l;//количество измененных элементов
}