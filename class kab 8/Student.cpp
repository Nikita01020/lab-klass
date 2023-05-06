#include <iostream>
#include<string>
#include"Object.h"
Student::Student(void)
{
	Raiting = 0;
	List = 0;
}
Student::~Student(void)
{

	}
void Student::Show()
{
	cout << "name: " << name << endl << "age: " << age << endl << "Raiting: " << Raiting << endl << "List: " << List << endl;
}
	Student::Student(string name1, int age1, float Raiting1, int List1) :Human(name1, age1)
	{
		Raiting1 = Raiting;
		List1 = List;
	}
	Student::Student(const Student& L)
	{
		name = L.name;
		age = L.age;
		Raiting = L.Raiting;
		List = L.List;
	}
	void Student::SetRaiting(float Raiting1)
	{
		Raiting = Raiting1;
	}
	void Student::SetList(int List1)
	{
		List= List1;
	}
	Student& Student::operator=(const Student& L)
	{
		if (&L == this)return *this;
		name = L.name;
		age = L.age;
		Raiting = L.Raiting;
		List = L.List;
		return *this;
	}
	void Student::Input()
	{
		cout << "N=name?"; cin >> name;
		cout << "\nage?"; cin >> age;
		cout << "\nRaiting"; cin >> Raiting;
		cout << "\nList"; cin >> List;

	}
