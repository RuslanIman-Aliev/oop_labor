#pragma once
#include <iostream>

using namespace std;

class Liquid
{
protected:
	string name;
	double density;

public:
	Liquid();
	Liquid(string name, double density);

	double getDensity();
	void setDensity(double density);

	friend ostream& operator<<(ostream& out, const Liquid& liquid);
	friend istream& operator >> (istream& in, Liquid& liquid);

	Liquid& operator++();
};
