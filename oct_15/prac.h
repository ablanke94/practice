#ifndef PRAC_H
#define PRAC_H

#include <cmath>
class Circle
{
	private:
		float radius;
		float area;
	public:
		void set_radius(float r)
		{
			radius = r;
		}
		float calc_area(float pi)
		{
			area = pi * pow(radius, 2);
			return area;
		}
};

#endif
