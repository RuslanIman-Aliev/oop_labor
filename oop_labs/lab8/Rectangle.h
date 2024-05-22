#pragma once
#include "Polygon.h"

using namespace std;

class Rectangle :
    public Polygon
{
private:
    float width;
    float height;
public:
    
    Rectangle(float width, float height);

    float area() const override;
};

