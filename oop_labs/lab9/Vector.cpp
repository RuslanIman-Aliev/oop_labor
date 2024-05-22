#include "Vector.h"

int& Vector::operator()(int index)
{
    if (index < 0 || index >= elements.size()) 
    {
        throw out_of_range("Index out of range");
    }
    return elements[index];
}

int Vector::operator[](int n)
{
    return elements.size();
}

void Vector::operator-(int n)
{
    if (n > elements.size()) 
    {
        throw invalid_argument("Cannot remove more elements than present in the vector");
    }
    while (n--) 
    {
        elements.pop_back();
    }
}

void Vector::operator+(int n)
{
    while (n--) 
    {
        elements.push_back(0);
    }
}
