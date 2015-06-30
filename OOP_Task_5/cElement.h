#pragma once
#include<iostream>
#include  "cFile.h"
using namespace std;

class cElement
{
public:
	int _aDigit = 0;
	//C'Tors
	cElement();
	cElement(int bogie);
	cElement(const cElement& digit);

	//Getter and Setter for the int aDigit
	int getaDigit() const;
	void setaDigit(int);
};
//Reading and Writing Operators
istream& operator >> (istream& in, cElement &digit);
ostream& operator << (ostream& out, const cElement &digit);