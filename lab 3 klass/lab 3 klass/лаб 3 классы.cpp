#include <iostream>
#include "Money.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    Money a(20000, 50);
    Money b(10000, 60);
    a.print();
    b.print();
    cout << endl;
    Money sum = a + b;
    cout << "Сложение денег" << endl;
    sum.print();
    Money raz = a - b;
    cout << "вычитание денег" << endl;
    raz.print();
    cout << endl;
    Money d = a;//конструктор копирования
    d.print();
    cout << endl;
    Money e;
    e.operator=(b);// оператор присваивания
    e.print();
    

    return 0;
}
