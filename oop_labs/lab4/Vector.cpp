#include "Vector.h"

Vector::Vector()
{
    x = 0;
    y = 0;
    z = 0;
}

Vector::Vector(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Vector Vector::operator-(const Vector& vec) const
{
    return Vector(x - vec.x, y - vec.y, z - vec.z);
}

Vector Vector::operator*(const Vector& vec) const
{
    return Vector(y * vec.z - z * vec.y, z * vec.x - x * vec.z, x * vec.y - y * vec.x);
}

Vector& Vector::operator++()
{
    ++x;
    ++y;
    ++z;
    return *this;
}

Vector& Vector::operator=(const Vector& vec)
{
    if (this != &vec) {
        x = vec.x;
        y = vec.y;
        z = vec.z;
    }
    return *this;
}

ostream& operator<<(ostream& os, const Vector& vec)
{
    os << "(" << vec.x << ", " << vec.y << ", " << vec.z << ")";
    return os;
}
