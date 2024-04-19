#include "Time.h"

Time::Time()
{
    hour = 1;
    minute = 1;
    second = 1;
}

Time::Time(int hour, int minute, int second)
{
    if (hour >= 0 && hour <= 24 && minute >= 0 && minute <= 60 && second >= 0 && second <= 60) 
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    else {
        throw  invalid_argument("Invalid argument");
    }
}

Time::~Time()
{
}

int& Time::operator[](int index)
{
    switch (index) {
    case 0:
        return this->hour;
    case 1:
        return this->minute;
    case 2:
        return this->second;
    default:
        throw  invalid_argument("Invalid argument");
    }
}

ostream& operator<<(ostream& out, const Time& time)
{
    out << "Time: " << time.hour << ":" << time.minute << ":" << time.second << endl;
    return out;
}

istream& operator>>(istream& in, Time& time)
{
    cout << "Enter hour" << endl;
    in >> time.hour;
    cout << "Enter minute" << endl;
    in >> time.minute;
    cout << "Enter second" << endl;
    in >> time.second;
    return in;
}

void Time::operator()() 
{
    cout << "Current time: " << hour << ":" << minute << ":" << second << endl;
}
