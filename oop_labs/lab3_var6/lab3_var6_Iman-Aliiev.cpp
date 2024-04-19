#include <iostream>
#include "Airplane.h"

using namespace std;

int main()
{
    Airplane plane1; 
    plane1.show();
    cout << endl;

    Airplane plane2("Boeing", "747", 900, 13000); 
    plane2.show();
    cout << endl;

    Airplane plane3 = plane2; 
    plane3.show();
    cout << endl;
}
