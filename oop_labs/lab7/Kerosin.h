#pragma once
#include "Liquid.h"

class Kerosin : public Liquid
{
protected:
	double temperature, viscosity;

public:
	Kerosin();
	Kerosin(string name, double density, double temperature, double viscosity);

	double getTemperature();
	void setTemperature(double temperature);
	double getViscosity();
	void setViscosity(double viscosity);

	friend ostream& operator << (ostream& out, const Kerosin& kerosin);
	friend istream& operator >> (istream& in, Kerosin& kerosin);

	Kerosin& operator++();
};
