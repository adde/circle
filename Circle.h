#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
	private:
		int radius;
		double PI;
	public:
		Circle(int radius);
		double Area();
		double Diameter();
		double Circumference();
};

#endif