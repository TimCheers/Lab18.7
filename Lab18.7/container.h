#pragma once
#include <iostream>
using namespace std;
template <class T>
class container
{
public:
	container(int size);
	container(const container<T>& obj);
	~container();
	container& operator = (const container<T>& obj);
	int& operator [] (const int index);
	friend ostream& operator << (ostream& out, const container<T>& other);
	friend istream& operator >> (istream& out, const container<T>& other);
	bool operator != (const container<T>& obj);
	bool operator < (const int value);
private:
	int size;
	int* data;

};