#ifndef MAIN_H
#define MAIN_H

class Rectangle
{
	private:
		double length, width, area;

	public:
		void setLength(double);
		void setWidth(double);
		double getLength(void);
		double getWidth(void);
		double calcArea(void);
};

#endif
