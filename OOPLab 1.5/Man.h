#pragma once
#include <string>

using namespace std;

class Man {
private:
	string name;
	int age;
	string sex;
	double weight;
public:
	string Getname() const{ return name;}
	int Getage() const{ return age; }
	string Getsex() const{ return sex; }
	double Getweight() const{ return weight; }
	void Setname(string value) { name = value; }
	void Setage(int value) { age = value; }
	void Setsex(string value) { sex = value; }
	void Setweight(double value) { weight = value; }

	void Init(string name,int age,string sex,double weight);
	void Display() const;
	void Read();
};