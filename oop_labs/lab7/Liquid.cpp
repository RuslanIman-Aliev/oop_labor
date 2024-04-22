#include "Liquid.h"

Liquid::Liquid()
{
    name = "nn";
    density = 0;
}

Liquid::Liquid(string name, double density)
{
    this->name = name;
    this->density = density;
}

double Liquid::getDensity()
{
    return density;
}

void Liquid::setDensity(double density)
{
    this->density = density;
}

Liquid& Liquid::operator++()
{
    density++;
    return *this;
}

ostream& operator<<(ostream& out, const Liquid& liquid)
{
    out << "Name: " << liquid.name << endl << "Density: " << liquid.density << endl;
    return out;
}

istream& operator>>(istream& in, Liquid& liquid)
{
    cout << "Enter name: " << endl;
    in >> liquid.name;
    cout << "Enter density: " << endl;
    in >> liquid.density;
    return in;
}
