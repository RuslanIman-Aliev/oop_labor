#include "Line.h"
#include <iostream>

using namespace std;

Line::Line()
{
	coordinateX = 0;
	coordinateY = 0;
	coordinateZ = 0;
}

Line::Line(double coordinateX, double coordinateY, double coordinateZ)
{
	this->coordinateX = coordinateX;
	this->coordinateY = coordinateY;
	this->coordinateZ = coordinateZ;
}

double Line::getCoordinateX()
{
	return coordinateX;
}

double Line::getCoordinateY()
{
	return coordinateY;
}

double Line::getCoordinateZ()
{
	return coordinateZ;
}

void Line::setCoordinateX(double coordinateX)
{
	this->coordinateX = coordinateX;
}

void Line::setCoordinateY(double coordinateY)
{
	this->coordinateY = coordinateY;
}

void Line::setCoordinateZ(double coordinateZ)
{
	this->coordinateZ = coordinateZ;
}

void Line::show()
{
	cout << "Coordinate X:" << coordinateX << endl << "Coordinate Y:" << coordinateY << endl << "Coordinate Z:" << coordinateZ << endl;
}
