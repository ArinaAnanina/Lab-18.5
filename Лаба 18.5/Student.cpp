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
	cout << "���: " << this->name << endl;
	cout << "�������: " << this->age << endl;
	cout << "���: " << this->year << endl;
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
	cout << "������� ���: ";
	in >> s.name;
	cout << "������� �������: ";
	in >> s.age;
	cout << "������� ���: ";
	in >> s.year;

	return in;
}

ostream& operator<< (ostream& out, const Student& s)
{
	out << "���: " << s.name << endl;
	out << "�������: " << s.age << endl;
	out << "���: " << s.year << endl;

	return out;
}
