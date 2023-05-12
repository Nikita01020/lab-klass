#include <iostream>
#include"Plenty.h"
#include <cstdlib>
#include <ctime>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    Plenty<Money>vec(5);
    vec.Print();
  // Money s = vec.Srednee();
  // cout << "sr : " << s;
   // vec.Add(s);//добавить элемент в вектор
   // vec.Print();
   // Money s = vec.Min();
   // cout << "min:= " << s << endl;
    //vec.DelMin(s);
   // vec.Print();
    Money y = vec.Max();
    cout << "max:= " << y << endl;
    vec.frontMax(y);
    vec.Print();

}

