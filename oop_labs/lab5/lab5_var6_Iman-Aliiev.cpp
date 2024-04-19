#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    try 
    {
        Time time1(2, 111, 22);
        cout << time1;
    }
    catch (const invalid_argument& e) 
    {
        cout << "Error: " << e.what() << endl;
    }

    try 
    {
        Time time2(2, 11, 22);
        cout << time2;

        Time time3(3, 15, 22);
        time3();
        cout << time3[1];
    }
    catch (const invalid_argument& e) 
    {
        cout << "Error: " << e.what() << endl;
    }
}
