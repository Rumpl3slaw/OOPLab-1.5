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
	cout << "���  ������:" << endl;
	m.Read();
	cout << "������ ���� = ";cin >> kursslav;
	Init(kursslav, m);
	cout << "��� ������:" << endl;
	Kurs(kurs);
}
int Student::Kurs(int kurs)
{
	int K = kurs;
	if (kurs < 6)
	K = kurs + 1;
	else
		cout << "6 - �� ��������� ����!" <<kurs<< endl;
	cout << "���� = " << K << endl;
	return kurs;
}