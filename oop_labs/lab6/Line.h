#pragma once
#include <iostream>

using namespace std;

class Line
{
    string objectName;
    double coordinateX;
    static int countStatic;

public:

    Line(string objectName, double coordinateX);
   
    static int getCount();

    string getName();
    double getCoordinateX();
};

