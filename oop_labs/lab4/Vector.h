#pragma once
#include <iostream>

using namespace std;

class Vector
{
    double x, y, z;

public:

    Vector();
    Vector(double x,double y, double z);
 
    Vector operator-(const Vector& vec) const;
    Vector operator*(const Vector& vec) const;
    Vector& operator++();
    Vector& operator=(const Vector& vec);

    friend ostream& operator<<(ostream& os, const Vector& vec);
};
