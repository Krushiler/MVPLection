// MVPLection.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы

#include "ProgramPresenter.h"
#include "ProgramView.h"

int main()
{
	ProgramPresenter* presenter = new ProgramPresenter();
	ProgramView* view = new ProgramView(presenter);
	presenter->attachView(view);
}