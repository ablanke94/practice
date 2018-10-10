#include <iostream>
#include <cmath>
#include "functions.h"

using namespace std;

int main()
{
	Rectangle rec1, rec2;
	double length1, length2, width1, width2,
	       area1, area2;

	cout << "Enter length for rectangle 1 : ";
	cin >> length1;

	cout << "Enter width for rectangle 1 : ";
	cin >> width1;

	cout << "Enter length for rectangle 2 : ";
	cin >> length2;

	cout << "Enter width for rectangle 2 : ";
	cin >> width2;

	rec1.Rectangle::setLength(length1);
	rec1.Rectangle::setWidth(width1);

	rec2.Rectangle::setLength(length2);
	rec2.Rectangle::setWidth(width2);

	area1 = rec1.Rectangle::calcArea();
	area2 = rec2.Rectangle::calcArea();

	cout << "Area of circle 1 is : " << area1 << endl;
	cout << "Area of circle 2 is : " << area2 << endl;

	return 0;
}	
