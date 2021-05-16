#pragma once
#include <iostream>
#include <string>
#include "Object.h"

using namespace std;

class Person :
	public Object
{
public:
	Person();
	Person(string name, int age);
	Person(const Person& p);
	virtual ~Person();

	void Show();
	void SetName(string name);
	void SetAge(int age);
	string GetName();
	int GetAge();

	//overloads
	Person& operator= (const Person& p);
	friend istream& operator>> (istream& in, Person& p);
	friend ostream& operator<< (ostream& out, const Person& p);

protected:
	string name;
	int age;
};