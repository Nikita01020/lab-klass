#include <iostream>
#include<string>
#include"Country.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    Country Rus;
    Rus.Print();
    Country Eng("London", 20000000, 9999.33);
    Eng.Print();
    Country USA = Rus;
    USA.Print();

   

    return 0;
}