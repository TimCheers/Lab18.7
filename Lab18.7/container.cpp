#include "container.h"
#include <iostream>
using namespace std;
template <class T>
container<T>::container(int size)
{
	this->size = size;
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		T tmp;
		cout << "Введите сумму " << i + 1 << " :";
		cin >> tmp;
		data[i] = &tmp;
		cout << endl;
	}
}
template <class T>
container<T>::container(const container& obj)
{
	this->size = obj.size;
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = obj.data[i];
	}
}
template <class T>
container<T>::~container()
{
	delete[] data;
	data = nullptr;
}
template <class T>
container<T>& container<T>::operator = (const container<T>& obj)
{
	if (this == &obj)
	{
		return *this;
	}
	this->size = obj.size;
	if (data != 0)
	{
		delete[]data;
	}
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = obj.data[i];
	}
	return *this;
}
template <class T>
int& container<T>:: operator [] (const int index)
{
	if (index < size)
	{
		return data[index];
	}
	else
	{
		cout << "Ошибка!";
	}
}
template <class T>
bool container<T>::operator != (const container& obj)
{
	if (this->size == obj.size)
	{
		bool tmp = false;
		for (int i = 0; i < size; i++)
		{
			if (data[i] != obj.data[i])
			{
				tmp = true;
			}
		}
		return tmp;
	}
	else
	{
		return true;
	}
}
template <class T>
bool container<T>::operator < (const int value)
{
	for (int i = 0; i < size; i++)
	{
		if (data[i] == value)
		{
			return true;
		}
	}
	return false;
}
template <class T>
ostream& operator<<(ostream& out, const container<T>& other)
{
	for (int i = 0; i < other.size; i++)
	{
		out << other.data[i] << "  ";
	}
	return out;
}
template <class T>
istream& operator>>(istream& in, const container<T>& other)
{
	for (int i = 0; i < other.size; i++)
	{
		in >> other.data[i];
	}
	return in;
}