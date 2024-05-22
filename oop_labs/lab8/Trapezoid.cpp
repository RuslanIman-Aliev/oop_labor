#include "Trapezoid.h"

Trapezoid::Trapezoid(float base1, float base2, float height)
{
	this->base1 = base1;
	this->base2 = base2;
	this->height = height;
}

float Trapezoid::area() const
{
	return (base1 + base2) * height / 2;
}
