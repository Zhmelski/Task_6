#include "6_3.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const char* FileName = "ArrayData.txt";

	DynamicArray ex_Array;
	ex_Array.LoadArrayFromFile(FileName);

	cout << "\nВывод массива после загрузки из файла:\n";
	ex_Array.Print();


	RedGreenBlue fill_color_ellips(45, 10, 30);
	RedGreenBlue border_color_ellips(14, 40, 34);
	Ellips* ex_Ellips = new Ellips(1, 12, 12, fill_color_ellips, border_color_ellips, 14, 15);
	ex_Array.AddObject(ex_Ellips);


	HyperlinkLabel* ex_HyperlinkLabel = new HyperlinkLabel(1, 100, 100, 10, 10, "httpsexample.com");
	ex_Array.AddObject(ex_HyperlinkLabel);


	RedGreenBlue text_color_text_box(100, 105, 110);
	//TextBox* ex_TextBox = new TextBox("Добро пожаловать!", text_color_text_box, 1, 100, 100, 30, 13);
	TextBox* ex_TextBox = new TextBox("Привет!", text_color_text_box, 1, 100, 100, 30, 13);
	ex_Array.AddObject(ex_TextBox);


	//Button* ex_Button = new Button("Подсказка нажмите CTRL для перехода", 1, 44, 44, 15, 10);
	Button* ex_Button = new Button("Выйти", 1, 44, 44, 15, 10);
	ex_Array.AddObject(ex_Button);


	cout << "\n\nВывод массива\n";
	ex_Array.Print();

	/*cout << "\n\nУдаление второго элемента массива(HyperlinkLabel):\n";
	ex_Array.DeleteObject(1);
	ex_Array.Print();*/

	/*cout << "\n\nУдаление всего массива:\n";
	ex_Array.DeleteAllArrayElements();
	ex_Array.Print();*/


	ex_Array.SaveArrayToFile(FileName);

	return 0;
}