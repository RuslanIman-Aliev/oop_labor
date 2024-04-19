#include <iostream>
#include"Kerosin.h"
#include"Liquid.h"

using namespace std;

int main()
{
	Liquid liquid;

	cin >> liquid;
	cout << liquid;
	cout << liquid.getDensity() << endl;

	Kerosin kerosin;

	cin >> kerosin;
	cout << kerosin;
	cout << "++++++++++++++++";
	cout << ++kerosin;

}
