#include "Airplane.h"

Airplane::Airplane()
{
    cout << "Default constructor" << endl;
    manufacturer = "nn";
    model = "nn";
    maxSpeed = 0;
    maxAltitude = 0;
}

Airplane::Airplane(string manufacturer, string model, int maxSpeed, int maxAltitude)
{
    cout << "Constructor with parametrs" << endl;
    this->manufacturer = manufacturer;
    this->model = model;
    this->maxSpeed = maxSpeed;
    this->maxAltitude = maxAltitude;
}

Airplane::Airplane(const Airplane& other)
{
    cout << "This is the copy constructor" << endl;
    this->manufacturer = other.manufacturer;
    this->model = other.model;
    this->maxSpeed = other.maxSpeed;
    this->maxAltitude = other.maxAltitude;
}

string Airplane::getManufacturer()
{
    return manufacturer;
}

string Airplane::getModel()
{
    return model;
}

int Airplane::getMaxSpeed()
{
    return maxSpeed;
}

int Airplane::getMaxAltitude()
{
    return maxAltitude;
}

void Airplane::setManufacturer(string manufacturer)
{
    this->manufacturer = manufacturer;
}

void Airplane::setModel(string model)
{
    this->model = model;
}

void Airplane::setMaxSpeed(int maxSpeed)
{
    this->maxSpeed = maxSpeed;
}

void Airplane::setMaxAltitude(int maxAltitude)
{
    this->maxAltitude = maxAltitude;
}

void Airplane::show()
{
    cout << "Manufacturer: " << manufacturer << endl << "Model: " << model << endl << "Max speed: " << maxSpeed << endl << "Max Altitude: " << maxAltitude << endl;
}
