#pragma once
#include <iostream>

using namespace std;

class Airplane
{
    string manufacturer, model;
    int maxSpeed ,maxAltitude;
public:
    Airplane();
    Airplane(string manufacturer, string model, int maxSpeed, int maxAltitude);
    Airplane(const Airplane& other);

    string getManufacturer();
    string getModel();
    int getMaxSpeed();
    int getMaxAltitude();

    void setManufacturer(string manufacturer);
    void setModel(string model);
    void setMaxSpeed(int maxSpeed);
    void setMaxAltitude(int maxAltitude);

    void show();
};
