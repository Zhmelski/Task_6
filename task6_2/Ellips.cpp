#include "Ellips.h"

Ellips::Ellips(bool visible, double x, double y, RedGreenBlue fill_color, RedGreenBlue border_color, double height, double width) : MainControl(visible, x, y, height, width)
{
	FillColor.Red = fill_color.Red;
	FillColor.Green = fill_color.Green;
	FillColor.Blue = fill_color.Blue;

	BorderColor.Red = border_color.Red;
	BorderColor.Green = border_color.Green;
	BorderColor.Blue = border_color.Blue;
}

Ellips::~Ellips()
{
	cout << "\nDestructor Ellips";
}

void Ellips::Print() const
{
	cout << "\n\n============================== Ellipse ========================================";
	if (Visible)
	{
		cout << "\n���������� ������ �������: (" << X << ", " << Y << ")";
		cout << "\n������ �������: " << Height << "\n������ �������: " << Width;
		cout << "\n���� �������:\tR: " << FillColor.Red << "\tG: " << FillColor.Green << "\tB: " << FillColor.Blue;
		cout << "\n���� �������:\tR: " << BorderColor.Red << "\tG: " << BorderColor.Green << "\tB: " << BorderColor.Blue;
	}
	cout << "\n===============================================================================";
}

void Ellips::SetFillColor(RedGreenBlue& fill_color)
{
	FillColor.Red = fill_color.Red;
	FillColor.Green = fill_color.Green;
	FillColor.Blue = fill_color.Blue;
}
RedGreenBlue Ellips::GetFillColor() const
{
	return FillColor;
}

void Ellips::SetBorderColor(RedGreenBlue& border_color)
{
	BorderColor.Red = border_color.Red;
	BorderColor.Green = border_color.Green;
	BorderColor.Blue = border_color.Blue;
}
RedGreenBlue Ellips::GetBorderColor() const
{
	return BorderColor;
}