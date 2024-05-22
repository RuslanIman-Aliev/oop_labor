#include <iostream>
#include"Polygon.h"
#include"Rectangle.h"
#include"Trapezoid.h"

using namespace std;

int main()
{
    Trapezoid trapezoid(5, 7, 4);
    Rectangle rectangle(6, 8);

    cout << "Area of the Trapezoid: " << trapezoid.area() << endl;
    cout << "Area of the Rectangle: " << rectangle.area() << endl;
}