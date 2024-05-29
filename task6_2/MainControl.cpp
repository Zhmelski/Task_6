#include "MainControl.h"

MainControl::MainControl(bool visible, double x, double y, double height, double width)
{
	Visible = visible;
	X = x;
	Y = y;

	if (height >= 0)
	{
		Height = height;
	}
	else
	{
		cout << "\nВведено неккорректное значение Height. Установлено значение по умолчанию: 1";
		Height = 1;
	}

	if (width >= 0)
	{
		Width = width;
	}
	else
	{
		cout << "\nВведено неккорректное значение Width. Установлено значение по умолчанию: 1";
		Width = 1;
	}
	Width = width;
}

MainControl::~MainControl()
{
	cout << "\nDestructor MainControl";
}

void MainControl::SetVisible(bool& visible)
{
	Visible = visible;
}
bool MainControl::GetVisible() const
{
	return Visible;
}

void MainControl::SetX(double& x)
{
	X = x;
}
double MainControl::GetX() const
{
	return X;
}

void MainControl::SetY(double& y)
{
	Y = y;
}
double MainControl::GetY() const
{
	return Y;
}

void MainControl::SetHeight(double& height)
{
	Height = height;
}
double MainControl::GetHeight() const
{
	return Height;
}

void MainControl::SetWidth(double& width)
{
	Width = width;
}
double MainControl::GetWidth() const
{
	return Width;
}