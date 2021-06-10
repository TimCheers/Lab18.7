#pragma once
#include <iostream>
using namespace std;
template <class T>
class container
{
public:
    container(int size)
    {
        this->size = size;
        data = new T[size];
    }
    container(const container& obj)
    {
        this->size = obj.size;
        data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = obj.data[i];
        }
    }
    ~container()
    {
        delete[] data;
        data = nullptr;
    }
    container<T>& operator = (const container<T>& obj)
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
    T& operator [] (const int index)
    {
        if (index < size)
        {
            return data[index];
        }
        else
        {
            cout << "ќшибка!";
        }
    }
    bool operator != (const container& obj)
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
    bool operator < (const int value)
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
    friend ostream& operator<< (ostream& out, const container<T>& other)
    {
        for (int i = 0; i < other.size; i++)
        {
            out << other.data[i] << "  ";
        }
        return out;
    }
    friend istream& operator>> (istream& in, container<T>& other)
    {
        for (int i = 0; i < other.size; i++)
        {
            cout << "¬ведите параметр:";
            in >> other.data[i];
        }
        return in;
    }

private:
    int size;
    T* data;

};