#pragma once
#include <string>
#include "Man.h"

using namespace std;

class Student {
private:
	int kurs;
	Man man;
public:
	int Getkurs() const{ return kurs; }
	Man Getman() const{ return man; }
	void Setkurs(int kurs) { this->kurs = kurs; }
	void Setman(Man man) {this->man = man; }


	void Init(int kurs,Man man);
	void Display() const;
	void Read();

};