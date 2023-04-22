#include <iostream>
using namespace std;

class Money
{
private:
    long int rub;
    int cop;
public:
    Money()
    {
        rub = 0;
        cop = 0;
    }
    Money(long int rub1, int cop1)
    {
        rub = rub1;
        cop = cop1;
    }
   Money(const Money& t)
{
       rub = t.rub;
    cop=t.cop;
    
    cout << "вызов конструктора обьекта с 2-мя аргументами" << this << endl;
}

   Money & operator = (const Money& t)
   {
       cout << "Вызвался оператор = " << this << endl;
       this->rub = t.rub;

       this->cop  =  t.cop;
      

       cout << endl;
       return *this;
   }
   ~Money()
   {
       cout << "вызвался деструктор" << this << endl;
}
   Money operator+(const Money& t)
   {
       Money temp;
       temp.rub = this->rub + t.rub;
       temp.cop = this->cop + t.cop;
       if (temp.cop >= 100)
       {
           temp.rub = temp.rub + 1;
           temp.cop = temp.cop - 100;
       }
       return temp;
   }
   Money operator-(const Money& t)
   {
       Money temp;
       temp.rub = this->rub - t.rub;
       temp.cop = this->cop - t.cop;
       if (temp.cop < 0)
           temp.rub = temp.rub - 1;
       temp.cop = 100 + temp.cop;
       return temp;
   }


    void print()
    {
        cout << "rub= " << rub << endl << "cop= " << cop << endl;
        cout << endl;
       }
    void Setrub(long int rub)
    {
        this->rub = rub;
    }
    void Setcop(int cop)
    {
        this->cop = cop;
    }
   
};



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
    e.operator=(b);
    e.print();
    

    return 0;
}
