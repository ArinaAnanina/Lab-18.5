#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "rus");
	Student s;
	cin >> s;
	cout << s << endl;

	Student s2("Арина", 23, 12);
	s2.Show();
}