#pragma once
#include "Polygon.h"

using namespace std;

class Trapezoid :
    public Polygon
{
private:
    float base1;
    float base2;
    float height;

public:

    Trapezoid(float base1, float base2, float height);

    float area() const override;
};

