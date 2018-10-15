#include <iostream>
#include "prac.h"
using namespace std;

int main()
{
	Circle circle1, circle2;
	float rad1, rad2, area1, area2;
	float const PI = 3.1415;

	cout << "Enter radius 1 : ";
	cin >> rad1;
	circle1.Circle::set_radius(rad1);
	
	cout << "Enter radius 2 : ";
	cin >> rad2;
	circle2.Circle::set_radius(rad2);

	area1 = circle1.Circle::calc_area(PI);
	area2 = circle2.Circle::calc_area(PI);

	cout << area1 << endl << area2;
	return 0;
}


