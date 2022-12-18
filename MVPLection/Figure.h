#pragma once
#include <string>
class Figure
{
public:
	virtual std::string getName() = 0;
	virtual double calcArea() = 0;
	virtual double calcPerimeter() = 0;
};

class Rectangle : public Figure {
private:
	double a;
	double b;
public:
	virtual std::string getName();
	Rectangle(double a, double b);
	double calcArea();
	double calcPerimeter();
};


class Circle : public Figure {
private:
	double r;
public:
	virtual std::string getName();
	Circle(double r);
	double calcArea();
	double calcPerimeter();
};