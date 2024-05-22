#include "Logger.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void Logger::addRecord(Line& line)
{
	string message = "Object name: " + line.getName() + "\nRadius: " + to_string(line.getCoordinateX());
	log += message + "\n";
}

void Logger::saveLog()
{
    ofstream file("log.txt");

    if (file.is_open())
    {
        time_t now = time(0);
        tm timeInfo;
        localtime_s(&timeInfo, &now);
        char dateTime[100];
        strftime(dateTime, 100, "%Y.%m.%d %H:%M:%S", &timeInfo);

        file << "ClassName: Sphere\n";
        file << "time: " << dateTime << endl;
        file << log;
        file.close();

    }
    else 
    {
        cout << "Unable to open log file!" << endl;
    }
}

