#include "Line.h"

Line::Line(string objectName, double coordinateX)
{
	this->objectName = objectName;
	this->coordinateX = coordinateX;

	countStatic++;
}

int Line::getCount()
{
	return countStatic;
}

string Line::getName()
{
	return objectName;
}

double Line::getCoordinateX()
{
	return coordinateX;
}
