#include  "cElement.h"
#include<iostream>
using namespace std;

//C'Tors
cElement::cElement()
{
}

cElement::cElement(int bogie)
{
	setaDigit(bogie);
}

cElement::cElement(const cElement& digit)
{
	_aDigit = digit.getaDigit();
}

//Getter and Setter for the int aDigit

int cElement::getaDigit() const
{
	return _aDigit;
}

void cElement::setaDigit(int bogie)
{
	_aDigit = bogie;
}

//Reading and Writing Operators
istream& operator>>(istream & in, cElement &digit)
{
	int bogie;
	in >> bogie;
	digit.setaDigit(bogie);
	return in;
}
ostream& operator<<(ostream & out, const cElement &digit)
{
	out << digit.getaDigit();
	return out;
}