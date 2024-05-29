#include "TextBox.h"

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
		cout << "\n�����: " << Text;
		cout << "\n���� ������:\tR: " << TextColor.Red << "\tG: " << TextColor.Green << "\tB: " << TextColor.Blue;
		cout << "\n���������� ���������� ����: (" << X << ", " << Y << ")";
		cout << "\n������ ���������� ����: " << Height << "\n������ ���������� ����: " << Width;
	}
	cout << "\n===============================================================================";
}

void TextBox::SetText(string& text)
{
	Text = text;
}
string TextBox::GetText() const
{
	return Text;
}

void TextBox::SetTextColor(RedGreenBlue& text_color)
{
	TextColor.Red = text_color.Red;
	TextColor.Green = text_color.Green;
	TextColor.Blue = text_color.Blue;
}
RedGreenBlue TextBox::GetTextColor() const
{
	return TextColor;
}