#include <iostream>
#include "Vector.h"
#include<vector>

using namespace std;

int main()
{
    try{

    Vector <int> v;

    v + 5;

    cout << "Vector size int: " << v[0] << endl;

    v(0) = 10;
    v(1) = 20;
    v(2) = 30;

    cout << "Element with index 0: " << v(0) << endl;
    cout << "Element with index 1: " << v(1) << endl;
    cout << "Element with index 2: " << v(2) << endl;

    v - 2;

    cout << "New vector size: " << v[0] << endl;
}
catch (const exception& e)
{
    cout << "Message: " << e.what() << endl;
}

}
