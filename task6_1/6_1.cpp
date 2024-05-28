#include "6_1.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "����������� � ����������� RGB ��� Ellips:";
	RedGreenBlue fill_color_ellips(45, -1, 300);
	RedGreenBlue border_color_ellips(14, 40, 34);
	Ellips ex_Ellips(1, 12, 12, fill_color_ellips, border_color_ellips, 14, 15);
	ex_Ellips.Print();


	cout << "\n\n\n���� � ���������� �������� RGB ��� Ellips:\n";
	RedGreenBlue fill_color_ellips_1;
	cout << "\n������� �������� RGB(1 - 255) ����� ������� ��� Ellips:\n\n";
	fill_color_ellips_1.FillColorFromKeyboard();
	RedGreenBlue border_color_ellips_1;
	cout << "\n\n������� �������� RGB(1 - 255) ����� ������� ��� Ellips:\n\n";
	border_color_ellips_1.FillColorFromKeyboard();
	Ellips ex_Ellips_1(1, 12, 12, fill_color_ellips_1, border_color_ellips_1, 14, 15);
	ex_Ellips_1.Print();


	cout << "\n\n����������� � ����������� RGB ��� HyperlinkLabel:";
	HyperlinkLabel ex_HyperlinkLabel(1, 100, 100, 10, 10, "https://example.com");
	ex_HyperlinkLabel.Print();


	cout << "\n\n\n���� � ���������� �������� RGB ��� TextBox:\n";
	RedGreenBlue text_color_text_box;
	cout << "\n������� �������� RGB(1 - 255) ��� TextBox:\n\n";
	text_color_text_box.FillColorFromKeyboard();
	TextBox ex_TextBox("����� ����������!", text_color_text_box, 1, 100, 100, 30, 13);
	ex_TextBox.Print();


	cout << "\n\n����������� � ����������� RGB ��� Button:";
	Button ex_Button("���������: ������� CTRL ��� ��������", 1, 44, 44, -10, 10);
	ex_Button.Print();

	return 0;
}