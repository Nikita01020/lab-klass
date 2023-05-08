#include "Money.h"
#include <iostream>
#include <fstream>
#include <string>
#include "file_work.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	Money p;
	Money u;
	int k, c;
	char file_name[30];
	do
	{ //Меню
		cout << "\n1. Make file";
		cout << "\n2. Print file";
		cout << "\n3. Delete record from file";
		cout << "\n4. Добавление в обьект в файле 1 рубль 50 копеек";
		cout << "\n5. увеличение обьекта файла на число";
		cout << "\n0. Exit\n";
		cin >> c;
		switch (c)
		{
		case 1: cout << "file name?"; cin >> file_name;
			k = make_file(file_name);
			if (k < 0)cout << "Can't make file";
			break;
		case 2: cout << "file name?"; cin >> file_name;
			k = print_file(file_name);
			if (k == 0)cout << "Empty file\n";
			if (k < 0)cout << "Can't read file\n";
			break;
		case 3: cout << "file name?"; cin >> file_name;
			int nom; cout << "nom?"; cin >> nom;
			k = del_file(file_name, nom);
			if (k < 0)cout << "Can't read file";
			break;
		case 4: { cout << "file name?";
			cin >> file_name;
			int s;
			int d;
			cout << "введите Rub и Cop обьекта к которому хотите прибавить число 1 рубль 50 копеек" << endl; cin >> s, cin >> d;
			cout << "так же введите его номер " << endl; cin >> nom;
			Money abc(s, d);

			abc.SetRubSetCop2();


			k = change_file(file_name, nom, abc);
			if (k < 0) cout << "\nCan't read file";
			if (k == 0) cout << "\nNot such record";
			break; }
		case 5: cout << "file name?";
			cin >> file_name;
			int m;
			int n;
			cout << "введите Rub и Cop обьекта к которому хотите прибавить число " << endl; cin >> m, cin >> n;
			cout << "так же введите его номер " << endl; cin >> nom;
			Money p2(m, n);
			int y;
			cout << "Введите на какое число увеличить обьект " << endl;
			cin >> y;
			p2.SetRubSetCop(y);


			k = change_file(file_name, nom, p2);
			if (k < 0) cout << "\nCan't read file";
			if (k == 0) cout << "\nNot such record";
			break;
		}
	} while (c != 0);

}
//Удалить все записи равные заданному значению.
//Увеличить все записи с заданным значением на 1 рубль 50 копеек.
//Добавить K записей после элемента с заданным номе