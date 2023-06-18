#include "Stack.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "Ââåäèòå ðàçìåð î÷åðåäè: ";
	cin >> n;
	Stack a(n);
	int num;
	cout << a << endl;
	cout << "1. Óäàëèòü ýëåìåíò èç î÷åðåäè\n";
	cout << "2. Äîáàâèòü ýëåìåíò â î÷åðåäè\n";
	cout << "3. Âûâåñòè î÷åðåäü íà ýêðàí\n";
	cout << "4. Âûõîä\n";
	int c = 0;
	while (c != 4)
	{
		cout << "Âûáåðèòå îïåðàöèþ: ";
		cin >> c;
		switch (c)
		{
		case 1:
			a.pop();
			cout << "Ýëåìåíò(û) óñïåøíî óäàëåíû!\n";
			break;
		case 2:
			cout << "Ââåäèòå ÷èñëî, êîòîðîå õîòèòå äîáàâèòü â î÷åðåäü: ";
			cin >> num;
			cout << "Ýëåìåíò óñïåøíî äîáàâëåí!\n";
			a.push(num);
			break;
		case 3:
			cout << "Âàøà î÷åðåäü: " << a << endl;
			break;
		case 4:
			return 0;
			break;
		default:
			cout << "Ââåäèòå íîìåð îïåðàöèè êîððåêòíî!\n";
			break;
		}
	}
	return 0;
}