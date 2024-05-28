#include "6_1.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Конструктор с параметрами RGB для Ellips:";
	RedGreenBlue fill_color_ellips(45, -1, 300);
	RedGreenBlue border_color_ellips(14, 40, 34);
	Ellips ex_Ellips(1, 12, 12, fill_color_ellips, border_color_ellips, 14, 15);
	ex_Ellips.Print();


	cout << "\n\n\nВвод с клавиатуры значений RGB для Ellips:\n";
	RedGreenBlue fill_color_ellips_1;
	cout << "\nВведите значения RGB(1 - 255) цвета заливки для Ellips:\n\n";
	fill_color_ellips_1.FillColorFromKeyboard();
	RedGreenBlue border_color_ellips_1;
	cout << "\n\nВведите значения RGB(1 - 255) цвета контура для Ellips:\n\n";
	border_color_ellips_1.FillColorFromKeyboard();
	Ellips ex_Ellips_1(1, 12, 12, fill_color_ellips_1, border_color_ellips_1, 14, 15);
	ex_Ellips_1.Print();


	cout << "\n\nКонструктор с параметрами RGB для HyperlinkLabel:";
	HyperlinkLabel ex_HyperlinkLabel(1, 100, 100, 10, 10, "https://example.com");
	ex_HyperlinkLabel.Print();


	cout << "\n\n\nВвод с клавиатуры значений RGB для TextBox:\n";
	RedGreenBlue text_color_text_box;
	cout << "\nВведите значения RGB(1 - 255) для TextBox:\n\n";
	text_color_text_box.FillColorFromKeyboard();
	TextBox ex_TextBox("Добро пожаловать!", text_color_text_box, 1, 100, 100, 30, 13);
	ex_TextBox.Print();


	cout << "\n\nКонструктор с параметрами RGB для Button:";
	Button ex_Button("Подсказка: нажмите CTRL для перехода", 1, 44, 44, -10, 10);
	ex_Button.Print();

	return 0;
}