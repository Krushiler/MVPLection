#include "Figure.h"
# define M_PI           3.14159265358979323846

std::string Rectangle::getName()
{
	return "Rectangle";
}

Rectangle::Rectangle(double a, double b)
{
	this->a = a;
	this->b = b;
}

double Rectangle::calcArea()
{
	return a * b;
}

double Rectangle::calcPerimeter()
{
	return (a + b) * 2;
}

std::string Circle::getName()
{
	return "Circle";
}

Circle::Circle(double r)
{
	this->r = r;
}

double Circle::calcArea()
{
	return M_PI * r * r;
}

double Circle::calcPerimeter()
{
	return 2 * M_PI * r;
}
