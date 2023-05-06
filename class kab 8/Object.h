#pragma once
#include<iostream>
#include<string>
#include "Event.h"
using namespace std;
class Object;
class Human;
class Student;
class Vector;
class Dialog;

class Object
{
public:
	Object(void);
	virtual void Show() = 0;
	virtual void Input() = 0;
	virtual ~Object(void);
	virtual void HandleEvent(const TEvent& e) = 0;
};
class Human :public Object
{
protected:
	string name;
	int age;
public:
	void HandleEvent(const TEvent& e);
	Human(void);
public:
	virtual ~Human(void);
	void Show();
	void SetName(string);
	void SetAge(int);
	Human(string, int);
	Human(const Human&);
	Human& operator = (const Human&);
	void Input();
	string Get_Name() { return name; };
	int Get_age() { return age; };
};
class Student :public Human
{
protected:
	float Raiting;
	int List;
public:
	Student(void);
public:
	~Student(void);
	void Show();
	Student(string, int, float, int);
	Student(const Student&);
	void SetRaiting(float);
	void SetList(int);
	Student& operator=(const Student&);
	void Input();

};
class Vector
{
public:
	Vector(void);
	Vector(int);
public:
	~Vector(void);
	void Add();
	void Del();
	void Show();
	int operator()();
	virtual void HandleEvent(const TEvent& e);
protected:
	Object** beg;
	int size;
	int cur;
};
class Dialog : public Vector
{
public:
	Dialog(void);//����������
public:
	virtual ~Dialog(void);//����������
	virtual void GetEvent(TEvent& event);//�������� �������
	virtual int Execute();//������� ���� ��������� �������
	virtual void HandleEvent(TEvent& event); //����������
	virtual void ClearEvent(TEvent& event);//�������� �������
	int Valid();//�������� �������� EndState
	void EndExec();//��������� ������� ������ �������

protected:
	int EndState;
};


