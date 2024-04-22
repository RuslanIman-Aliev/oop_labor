#include "Kerosin.h"

Kerosin::Kerosin()
{
	name = "nn";
	density = 0;
	temperature = 0;
	viscosity = 0;
}

Kerosin::Kerosin(string name, double density, double temperature, double viscosity):Liquid(name, density)
{
	this->temperature = temperature;
	this->viscosity = viscosity;
}

double Kerosin::getTemperature()
{
	return temperature;
}

void Kerosin::setTemperature(double temperature)
{
	this->temperature = temperature;
}

double Kerosin::getViscosity()
{
	return viscosity;
}

void Kerosin::setViscosity(double viscosity)
{
	this->viscosity = viscosity;
}

Kerosin& Kerosin::operator++()
{
	density++;
	temperature++;
	viscosity++;
	return *this;
}

ostream& operator<<(ostream& out, const Kerosin& kerosin)
{
	out << "Name: " << kerosin.name << endl << "Density: " << kerosin.density << endl << "Temperature:" << kerosin.temperature << endl << "Viscosity" << kerosin.viscosity << endl;
	return out;
}

istream& operator>>(istream& in, Kerosin& kerosin)
{
	cout << "Enter name: " << endl;
	in >> kerosin.name;
	cout << "Enter density: " << endl;
	in >> kerosin.density;
	cout << "Enter temperature: " << endl;
	in >> kerosin.temperature;
	cout << "Enter viscosity: " << endl;
	in >> kerosin.viscosity;
	return in;
}
