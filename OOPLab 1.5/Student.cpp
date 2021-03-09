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
	man.Display();
}
void Student::Read()
{
	int kursslav;
	Man m;
	cout << "Про  людину:" << endl;
	m.Read();
	cout << "Введіть курс = ";cin >> kursslav;
	Init(kursslav, m);
	cout << "Про людину:" << endl;
	Kurs(kurs);
}
int Student::Kurs(int kurs)
{
	int K = kurs;
	if (kurs < 6)
	K = kurs + 1;
	else
		cout << "6 - Це випускний курс!" <<kurs<< endl;
	cout << "Курс = " << K << endl;
	return kurs;
}