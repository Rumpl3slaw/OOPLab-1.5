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
	cout << "��� ������:" << endl;
	man.Display();
	cout << "���� = " << kurs << endl;
}
void Student::Read()
{
	int kurs;
	Man m;
	cout << "��� ������:" << endl;
	m.Read();
	cout << "������ ���� = ";cin >> kurs;
	Init(kurs, m);
}