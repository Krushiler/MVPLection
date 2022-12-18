#pragma once
#include "Figure.h"

namespace ProgramContract {
	class View {
	public:
		virtual void showArea(std::string figureName, double area) = 0;
		virtual void showFigureInput() = 0;
	};
	class Presenter {
	public:
		virtual void getFigureArea(Figure* figure) = 0;
	};
}

class ProgramPresenter : public ProgramContract::Presenter
{
private:
	ProgramContract::View* view;
public:
	void attachView(ProgramContract::View* view);
	void getFigureArea(Figure* figure);
};