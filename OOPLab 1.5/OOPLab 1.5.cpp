#include <string>
#include <iostream>
#include <Windows.h>
#include "Man.h"

using namespace std;

void Man::Init(string name, int age, string sex, double weight)
{
	Setname(name);
	Setage(age);
	Setsex(sex);
	Setweight(weight);
}
void Man::Display() const
{
	cout << "Ім'я = " << name << endl;
	cout << "Вік = " << age << endl;
	cout << "Стать = " << sex << endl;
	cout << "Вага = " << weight << endl;
}
void Man::Read()
{
	string name;
	int age;
	string sex;
	double weight;
	cout << "Вкажіть ім'я = ";cin >> name;
	cout << "Вкажіть вік = ";cin >> age;
	cout << "Вкажіть стать = ";cin >> sex;
	cout << "Скажіть вагу = ";cin >> weight;
	Init(name, age, sex, weight);

}