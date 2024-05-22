#include <iostream>
#include"Line.h"
#include"Logger.h"

using namespace std;

int Line::countStatic = 0;

int main()
{
    Logger log;

    Line line1("Line 1",2.0);
    log.addRecord(line1);

    Line line2("Line 2",3.0);
    log.addRecord(line2);

    log.saveLog();

    cout << "Count: " << Line::getCount() << endl;

}
