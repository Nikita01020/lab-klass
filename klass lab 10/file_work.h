#include "Money.h"
#include <iostream>
#include <fstream>
using namespace std;
int make_file(const char* f_rub)
{
	fstream stream(f_rub, ios::out | ios::trunc);//������� ��� ������
	if (!stream)return -1;//������ �������� �����
	int n;
	Money p;
	cout << "N?"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> p;//���� ��������� ������� �� ������������ ������
		stream << p << "\n";//������ ������� � �������� �����
	}
	stream.close();//������� �����
	return n;//������� ���������� ���������� ��������
}
int print_file(const char* f_rub)
{
	fstream stream(f_rub, ios::in);//������� ��� ������
	if (!stream)return -1;//������ �������� �����
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
	fstream temp("temp", ios::out);//������� ��� ������
	fstream stream(f_rub, ios::in);//������� ��� ������
	if (!stream)return -1;//������ �������� �����
	int i = 0; Money p;
	while (stream >> p)//���� ��� ����� ����� ��������� ������ �������
	{
		//���� �������� ������� ����� �����,�� ����� �� �����
		if (stream.eof())break;
		i++;
		//���� ����� ������� �� ����� k, �� ���������� ��� �� �������������� ����
		if (i != k) temp << p;
	}
	//������� �����
	stream.close(); temp.close();
	remove(f_rub);//������� ������ ����
	rename("temp", f_rub);// ������������� temp
	return i;//���������� ����������� 
}
int change_file(const char* f_rub, int k, Money pp)
{
	fstream temp("temp", ios::out);//������� ��� ������
	fstream stream(f_rub, ios::in);//������� ��� ������
	if (!stream)return -1;//������ �������� �����
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
	return l;//���������� ���������� ���������
}
int change_file2(const char* f_rub, int k, Money pp)
{
	fstream temp("temp", ios::out);//������� ��� ������
	fstream stream(f_rub, ios::in);//������� ��� ������
	if (!stream)return -1;//������ �������� �����
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
	return l;//���������� ���������� ���������
}