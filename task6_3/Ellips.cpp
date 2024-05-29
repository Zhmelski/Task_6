#include "Ellips.h"

Ellips::Ellips() : MainControl()
{
	FillColor.Red = 0;
	FillColor.Green = 0;
	FillColor.Blue = 0;

	BorderColor.Red = 0;
	BorderColor.Green = 0;
	BorderColor.Blue = 0;
}

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
		cout << "\nКоординаты центра эллипса: (" << X << ", " << Y << ")";
		cout << "\nВысота эллипса: " << Height << "\nШирина эллипса: " << Width;
		cout << "\nЦвет заливки:\tR: " << FillColor.Red << "\tG: " << FillColor.Green << "\tB: " << FillColor.Blue;
		cout << "\nЦвет контура:\tR: " << BorderColor.Red << "\tG: " << BorderColor.Green << "\tB: " << BorderColor.Blue;
	}
	cout << "\n===============================================================================";
}

void Ellips::SetFillColor(RedGreenBlue fill_color)
{
	FillColor.Red = fill_color.Red;
	FillColor.Green = fill_color.Green;
	FillColor.Blue = fill_color.Blue;
}
RedGreenBlue Ellips::GetFillColor() const
{
	return FillColor;
}

void Ellips::SetBorderColor(RedGreenBlue border_color)
{
	BorderColor.Red = border_color.Red;
	BorderColor.Green = border_color.Green;
	BorderColor.Blue = border_color.Blue;
}
RedGreenBlue Ellips::GetBorderColor() const
{
	return BorderColor;
}

void Ellips::SaveToFile(ofstream& out) const {
	out << GetType() << ' ' << Visible << ' ' << X << ' ' << Y << ' '
		<< FillColor.Red << ' ' << FillColor.Green << ' ' << FillColor.Blue << ' '
		<< BorderColor.Red << ' ' << BorderColor.Green << ' ' << BorderColor.Blue << ' '
		<< Height << ' ' << Width << ' ' << '\n';
}

void Ellips::LoadFromFile(ifstream& in) {
	in >> Visible >> X >> Y
		>> FillColor.Red >> FillColor.Green >> FillColor.Blue
		>> BorderColor.Red >> BorderColor.Green >> BorderColor.Blue
		>> Height >> Width;
}