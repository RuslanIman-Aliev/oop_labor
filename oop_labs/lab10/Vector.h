#pragma once
#include <iostream>
#include<vector>

using namespace std;

template<typename T>

class Vector 
{
private:
    vector<T> elements;

public:
    T& operator()(int index);
    T operator[](int n);

    void operator-(int n);
    void operator+(int n);
};

template<typename T>
T& Vector<T>::operator()(int index)
{
    if (index < 0 || index >= elements.size())
    {
        throw out_of_range("Index out of range");
    }
    return elements[index];
}

template<typename T>
T Vector<T>::operator[](int n)
{
    return elements.size();
}

template<typename T>
void Vector<T>::operator-(int n)
{
    if (n > elements.size())
    {
        throw out_of_range("Cannot remove more elements than present in the vector");
    }
    while (n--)
    {
        elements.pop_back();
    }
}

template<typename T>
void Vector<T>::operator+(int n)
{
    while (n--)
    {
        elements.push_back(T()); 
    }
}




