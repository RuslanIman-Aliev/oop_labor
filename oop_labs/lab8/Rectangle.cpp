#include "Rectangle.h"

Rectangle::Rectangle(float width, float height)
{
    this->height = height;
    this->width = width;
}

float Rectangle::area() const
{
    return width * height;
}
