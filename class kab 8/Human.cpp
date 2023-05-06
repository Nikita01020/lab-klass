#include <iostream>
#include<string>
#include"Object.h"
using namespace std;
Human::Human(void)
{
    name = "......";
    age = 0;
}
Human::Human(string name1, int age1)
{
    name1 = name;
    age1 = age;
}
Human::Human(const Human& t)
{
    name = t.name;
    age = t.age;
}
Human& Human::operator = (const Human& t)
{
    this->name = t.name;

    this->age = t.age;


    cout << endl;
    return *this;
}
Human::~Human(void)
{

}
void Human::Show()
{
    cout << "name: " << name << endl << "age: " << age << endl;
}
void Human::SetName(string name)
{
    this->name = name;
}
void Human::SetAge(int age)
{
    this->age = age;
}
void Human::Input()
{
    cout << "N=name?"; cin >> name;
    cout << "\nage?"; cin >> age;
}
void Human::HandleEvent(const TEvent& e)
{
    if (e.what == evMessage)//событие-сообщение
    {
        switch (e.command)
        {
        case cmGet:cout << "mark=" << Get_Name() << endl;
            break;
        }
    }
}