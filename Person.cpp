#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person()
{
	name = "noname";
	age = 0;
}

Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
}

Person::Person(const Person& p)
{
	this->name = p.name;
	this->age = p.age;
}

Person::~Person()
{

}

void Person::Show()
{
	cout << "���: " << this->name << endl;
	cout << "�������: " << this->age << endl;
	cout << endl;
}

void Person::SetName(string name)
{
	this->name = name;
}

void Person::SetAge(int age)
{
	this->age = age;
}

string Person::GetName()
{
	return this->name;
}

int Person::GetAge()
{
	return this->age;
}

Person& Person::operator= (const Person& p)
{
	if (this == &p)
	{
		return *this;
	}
	name = p.name;
	age = p.age;
	return *this;
}

istream& operator>> (istream& in, Person& p)
{
	cout << "������� ���: ";
	in >> p.name;
	cout << "������� �������: ";
	in >> p.age;

	return in;
}

ostream& operator<< (ostream& out, const Person& p)
{
	out << "���: " << p.name << endl;
	out << "�������: " << p.age << endl;

	return out;
}