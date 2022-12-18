#include "ProgramView.h"
#include <iostream>

ProgramView::ProgramView(ProgramContract::Presenter* presenter)
{
	this->presenter = presenter;
}

Figure* ProgramView::getFigureFromConsole()
{
	std::cout << "Enter figure name: ";
	std::string name;
	std::cin >> name;
	if (name == "Rectangle" || name == "R") {
		std::cout << "Enter sides: ";
		double a, b;
		std::cin >> a >> b;
		return new Rectangle(a, b);
	}
	if (name == "Circle" || name == "C") {
		std::cout << "Enter radius: ";
		double r;
		std::cin >> r;
		return new Circle(r);
	}
	return NULL;
}

void ProgramView::showArea(std::string figureName, double area)
{
	std::cout << "Area of " << figureName << ": " << area << "\n";
}

void ProgramView::showFigureInput()
{
	Figure* figure = getFigureFromConsole();
	std::cout << "\n";
	presenter->getFigureArea(figure);
}
