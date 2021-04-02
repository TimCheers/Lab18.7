#include "Money.h"
#include <iostream>
using namespace std;
Money::Money()
{
	R = 0;
	K = 0;
}
Money::Money(unsigned long int R, unsigned int K)
{
	this->K = K;
	this->R = R;
}
Money::Money(const Money& other)
{
	this->K = other.K;
	this->R = other.R;
}
Money::~Money()
{
}
Money& Money:: operator = (const Money& other)
{
	this->K = other.K;
	this->R = other.R;
	return *this;
}
ostream& operator << (ostream& out, const Money& other)
{
	return (out << other.R << '.' << other.K);
}
istream& operator >> (istream& in, Money& other)
{
	char ch;
	in >> other.R >> ch >> other.K;
	return in;
}
bool Money:: operator != (const Money& other)
{
	return !(this->R == other.R && this->K == other.K);
}