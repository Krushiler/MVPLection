#include "ProgramPresenter.h"

void ProgramPresenter::attachView(ProgramContract::View* view)
{
	this->view = view;
	view->showFigureInput();
}

void ProgramPresenter::getFigureArea(Figure* figure) {
	std::string name = figure->getName();
	double area = figure->calcArea();
	view->showArea(name, area);
}