#include <iostream>
#include "Student.h"

using namespace std;

void Student::Init(int kurs, Man man)
{
	Setkurs(kurs);
	Setman(man);
}
void Student::Display() const 
{
	cout << "Про людину:" << endl;
	man.Display();
	cout << "Курс = " << kurs << endl;
}
void Student::Read()
{
	int kurs;
	Man m;
	cout << "Про людину:" << endl;
	m.Read();
	cout << "Введіть курс = ";cin >> kurs;
	Init(kurs, m);
}