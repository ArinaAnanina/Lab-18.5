#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"

using namespace std;

Student::Student() : Person()
{
	this->year = 0;
}

Student::Student(string name, int age, int year) : Person(name, age)
{
	this->year = year;
}

Student::Student(int year) : Person()
{
	this->year = year;
}

Student::Student(const Student& s) : Person(s)
{
	this->year = s.year;
}

Student::~Student()
{

}

void Student::Show()
{
	cout << "Имя: " << this->name << endl;
	cout << "Возраст: " << this->age << endl;
	cout << "Год: " << this->year << endl;
	cout << endl;
}

void Student::SetYear(int year)
{
	this->year = year;
}

int Student::GetYear()
{
	return this->year;
}

void Student::AddYear(int year)
{
	this->year += year;
}

Student& Student::operator= (const Student& s)
{
	if (this == &s)
	{
		return *this;
	}
	name = s.name;
	age = s.age;
	year = s.year;
	return *this;
}

istream& operator>> (istream& in, Student& s)
{
	cout << "Введите имя: ";
	in >> s.name;
	cout << "Введите возраст: ";
	in >> s.age;
	cout << "Введите год: ";
	in >> s.year;

	return in;
}

ostream& operator<< (ostream& out, const Student& s)
{
	out << "Имя: " << s.name << endl;
	out << "Возраст: " << s.age << endl;
	out << "Год: " << s.year << endl;

	return out;
}
