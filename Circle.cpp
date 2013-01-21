#include "Circle.h"

Circle::Circle(int radius)
{
	this->radius = radius;
	this->PI = 3.141592654;
}

double Circle::Area()
{
	return this->PI*this->radius*this->radius;
}

double Circle::Diameter()
{
	return this->radius*2;
}

double Circle::Circumference()
{
	return 2*this->PI*this->radius;
}