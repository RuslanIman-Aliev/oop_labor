#pragma once
#include <iostream>
#include"Line.h"

using namespace std;

class Logger
{
    string log;

public:
    void addRecord(Line& line);
    void saveLog();
};

