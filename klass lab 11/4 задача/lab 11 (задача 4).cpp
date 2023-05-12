#include <iostream>
#include<vector>
#include<stack>
#include"Money.h"
#include<algorithm>
#include<iterator>
using namespace std;
typedef stack<Money>St;//стек
typedef vector<Money>Vec;//векто
St make_stack(int n)
{
    St s;
    Money t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;//ввод переменной
        s.push(t);//добавление ее в стек
    }
    return s;//вернуть стек как результат функции
}
Vec copy_stack_to_vector(St s)
{
    Vec v;
    while (!s.empty())//пока стек не пустой
    {
        //добавить в вектор элемент из вершиы стека
        v.push_back(s.top());
        s.pop();
    }
    return v; //вернуть вектор как результат функции
}
//копирует вектор в стек
St copy_vector_to_stack(Vec v)
{
    St s;
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        s.push(v[i]);//добавить в стек элемент вектора
    }
   
    return s; //вернуть стек как результат функции
}
void print_stack(St t)
{
    Vec v = copy_stack_to_vector(t);
    reverse(v.begin(), v.end());
    t = copy_vector_to_stack(v);


    while (!t.empty()) {
        cout << t.top() << " ";
        t.pop();
    }
    cout << endl;
}
Money Srednee(St s)
{
    Vec v = copy_stack_to_vector(s);//копируем стек в вектор
    int n = 1;
    Money sum = s.top();//начальное значениедля суммы
    s.pop();//удалить первый элемент из вектора
    while (!s.empty())//пока стек не пустой
    {
        sum = sum + s.top();//добавить в сумму элемент из вершины стека
        s.pop();//удалить элемент
        n++;
    }
    s = copy_vector_to_stack(v);//скопировать вектор в стек
    return sum / n; //вернуть среднее арифметическое
}
Money Min(St t)
{
    Vec v = copy_stack_to_vector(t);
    Money min1 = t.top();
    t.pop();//удалить первый элемент из вектора
    while (!t.empty())//пока стек не пустой
    {
        if (min1 > t.top())
        {
            min1 = t.top();
        }
        t.pop();
    }
    t = copy_vector_to_stack(v);
    return min1;
}
Money Max(St t)
{
    Vec v = copy_stack_to_vector(t);
    Money min1 = t.top();
    t.pop();//удалить первый элемент из вектора
    while (!t.empty())//пока стек не пустой
    {
        if (min1 < t.top())
        {
            min1 = t.top();
        }
        t.pop();
    }
    t = copy_vector_to_stack(v);
    return min1;
}
void Add_to_stack(St& s, Money el)
{
    Vec v;
    Money t;
    int i = 1;//номер элемента в стеке
    while (!s.empty())//пока стек не пустой
    {
        t = s.top();//получить элемент из вершины
        //если номер равен номеру позиции, на котоую добвляем элемент 
      //добавить новый элемент в вектор
         t =t+ el;
        v.push_back(t);//добавить элемент из стека в вектор
        s.pop();//удалить элемент из стека
        i++;
    }
    s = copy_vector_to_stack(v);//копируем вектор в стек
}
void DelMin(St& s, Money el)
{
    Vec v = copy_stack_to_vector(s);
    for (auto i = v.begin(); i != v.end();)
    {
        if (*i == el)
        {
            i = v.erase(i)
                ;
        }
        else {
            i++;
        }
    }
    s = copy_vector_to_stack(v);//копируем вектор в ст
}
void FrontMax(St& s, Money el)
{
    St s1;
    while(s.top() != el) {
        s1.push(s.top());
        s.pop();
    }
    s.pop();
    while(!s.empty()) {
        s1.push(s.top());
        s.pop();
    }
    s1.push(el);
    s = {};
    while (!s1.empty()) {
        s.push(s1.top());
        s1.pop();
    }
   
}
int main()
{
    St y;
    Money max;
    int n;
    cout << "n?";
    cin >> n;
    y = make_stack(n);//создать стек
    print_stack(y);
    max = Max(y);
    cout << "max := " <<max << endl;
    FrontMax(y, max);
    print_stack(y);
    St x;
    Money t;
    int n1;
    cout << "n1";
    cin >> n1;
    x = make_stack(n1);
    print_stack(x);
    t = Min(x);
    cout << "min := " << t << endl;
    DelMin(x, t);
    print_stack(x);
    St p;
    Money sr;
    int n2;
    cout << "n2?";
    cin >> n2;
    p = make_stack(n2);//создать стек
    print_stack(p);
    sr = Srednee(p);
    cout << "sr := " << sr << endl;
    Add_to_stack(p, sr);
    print_stack(p);


}