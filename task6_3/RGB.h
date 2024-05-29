#pragma once

struct RedGreenBlue
{
	int Red;
	int Green;
	int Blue;

	RedGreenBlue()
	{
		Red = 0;
		Green = 0;
		Blue = 0;
	}

	RedGreenBlue(int red, int green, int blue)
	{
		if (red >= 0 && red <= 255)
		{
			Red = red;
		}
		else
		{
			cout << "\n¬ведено недопустимое значение Red. ”становлено значение по умолчанию: 1";
			Red = 1;
		}

		if (green >= 0 && green <= 255)
		{
			Green = green;
		}
		else
		{
			cout << "\n¬ведено недопустимое значение Green. ”становлено значение по умолчанию: 1";
			Green = 1;
		}

		if (blue >= 0 && blue <= 255)
		{
			Blue = blue;
		}
		else
		{
			cout << "\n¬ведено недопустимое значение Blue. ”становлено значение по умолчанию: 1";
			Blue = 1;
		}
	}

	void FillColorFromKeyboard()
	{
		do
		{
			cout << "¬ведите значение Red: ";
			cin >> Red;

			if (Red < 0 || Red >255)
				cout << "¬ведено неккоректное значение";
		} while (Red < 0 || Red >255);

		do
		{
			cout << "¬ведите значение Green: ";
			cin >> Green;

			if (Green < 0 || Green >255)
				cout << "¬ведено неккоректное значение";
		} while (Green < 0 || Green >255);

		do
		{
			cout << "¬ведите значение Blue: ";
			cin >> Blue;

			if (Blue < 0 || Blue >255)
				cout << "¬ведено неккоректное значение";
		} while (Blue < 0 || Blue >255);
	}
};