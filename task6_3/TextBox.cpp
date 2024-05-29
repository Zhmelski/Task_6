#include "TextBox.h"

TextBox::TextBox() : MainControl()
{
	Text = '\0';

	TextColor.Red = 0;
	TextColor.Green = 0;
	TextColor.Blue = 0;
}

TextBox::TextBox(string text, RedGreenBlue text_color, bool visible, double x, double y, double height, double width) : MainControl(visible, x, y, height, width)
{
	Text = text;

	TextColor.Red = text_color.Red;
	TextColor.Green = text_color.Green;
	TextColor.Blue = text_color.Blue;
}

TextBox::~TextBox()
{
	cout << "\nDestructor TextBox";
}

void TextBox::Print() const
{
	cout << "\n\n============================== TextBox ========================================";
	if (Visible)
	{
		cout << "\nТекст: " << Text;
		cout << "\nЦвет текста:\tR: " << TextColor.Red << "\tG: " << TextColor.Green << "\tB: " << TextColor.Blue;
		cout << "\nКоординаты текстового поля: (" << X << ", " << Y << ")";
		cout << "\nВысота текстового поля: " << Height << "\nШирина текстового поля: " << Width;
	}
	cout << "\n===============================================================================";
}

void TextBox::SetText(string text)
{
	Text = text;
}
string TextBox::GetText() const
{
	return Text;
}

void TextBox::SetTextColor(RedGreenBlue text_color)
{
	TextColor.Red = text_color.Red;
	TextColor.Green = text_color.Green;
	TextColor.Blue = text_color.Blue;
}
RedGreenBlue TextBox::GetTextColor() const
{
	return TextColor;
}

void TextBox::SaveToFile(ofstream& out) const
{
	out << GetType() << ' ' << Text << ' '
		<< TextColor.Red << ' ' << TextColor.Green << ' ' << TextColor.Blue << ' '
		<< Visible << ' ' << X << ' ' << Y << ' '
		<< Height << ' ' << Width << ' ' << '\n';
}
void TextBox::LoadFromFile(ifstream& in)
{
	in >> Text
		>> TextColor.Red >> TextColor.Green >> TextColor.Blue
		>> Visible >> X >> Y
		>> Height >> Width;
}