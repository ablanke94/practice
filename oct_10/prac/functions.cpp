#include "functions.h"
using namespace std;

void Rectangle::setLength(double l)
{
	length = l;
}

void Rectangle::setWidth(double w)
{
	width = w;
}

double Rectangle::getLength(void)
{
	return length;
}

double Rectangle::getWidth(void)
{
	return width;
}

double Rectangle::calcArea(void)
{
	return (length * width);
}
