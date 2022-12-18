#pragma once
#include "ProgramPresenter.h"
#include "Figure.h"

class ProgramView : public ProgramContract::View
{
private:
	ProgramContract::Presenter* presenter;
	Figure* getFigureFromConsole();
public:
	ProgramView(ProgramContract::Presenter* presenter);

	void showArea(std::string figureName, double area);
	void showFigureInput();
};

