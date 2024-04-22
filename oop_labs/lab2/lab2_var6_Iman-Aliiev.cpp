#include <iostream>
#include"Line.h"

using namespace std;

int main()
{
	Line line1 =  Line();

	line1.show();

	cout << "+++++++++++++++++++++" << endl;

	line1.setCoordinateX(5);
	line1.setCoordinateY(6);
	line1.setCoordinateZ(7);

	line1.show();

	cout << line1.getCoordinateX() << endl << line1.getCoordinateY() << endl << line1.getCoordinateZ() << endl;
	cout << "+++++++++++++++++++++" << endl;
	Line line2 = Line(10, 11, 12);

	line2.show();
}
