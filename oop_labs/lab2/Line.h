#pragma once

class Line
{
	double coordinateX, coordinateY, coordinateZ;

public:
	Line();
	Line(double coordinateX, double coordinateY, double coordinateZ);

	double getCoordinateX();
	double getCoordinateY();
	double getCoordinateZ();

	void setCoordinateX(double coordinateX);
	void setCoordinateY(double coordinateY);
	void setCoordinateZ(double coordinateZ);

	void show();
};
