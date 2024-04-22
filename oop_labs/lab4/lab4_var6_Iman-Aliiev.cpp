#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);

    cout << "v1 = " << v1 << endl;
    cout << "v2 = " << v2 << endl;

    Vector subtraction_result = v1 - v2;
    cout << "Subtraction result: " << subtraction_result << endl;

    Vector cross_product_result = v1 * v2;
    cout << "Vector multiply result: " << cross_product_result << endl;

    ++v1;
    cout << "After increment v1: " << v1 << endl;

    v2 = v1;
    cout << "After assignment v2: " << v2 << endl;
}
