#pragma once
#include <iostream>
using namespace std;
class Money
{
public:
	Money();
	Money(unsigned long int R, unsigned int K);
	Money(const Money& other);
	~Money();
	Money& operator = (const Money& other);
	friend ostream& operator << (ostream& out, const Money& other);
	friend istream& operator >> (istream& in, Money& other);
	bool operator != (const Money& obj);
private:
	unsigned long int R;
	unsigned int K;
};