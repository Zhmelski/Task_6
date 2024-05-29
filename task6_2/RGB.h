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
			cout << "\n������� ������������ �������� Red. ����������� �������� �� ���������: 1";
			Red = 1;
		}

		if (green >= 0 && green <= 255)
		{
			Green = green;
		}
		else
		{
			cout << "\n������� ������������ �������� Green. ����������� �������� �� ���������: 1";
			Green = 1;
		}

		if (blue >= 0 && blue <= 255)
		{
			Blue = blue;
		}
		else
		{
			cout << "\n������� ������������ �������� Blue. ����������� �������� �� ���������: 1";
			Blue = 1;
		}
	}

	void FillColorFromKeyboard()
	{
		do
		{
			cout << "������� �������� Red: ";
			cin >> Red;

			if (Red < 0 || Red >255)
				cout << "������� ������������ ��������";
		} while (Red < 0 || Red >255);

		do
		{
			cout << "������� �������� Green: ";
			cin >> Green;

			if (Green < 0 || Green >255)
				cout << "������� ������������ ��������";
		} while (Green < 0 || Green >255);

		do
		{
			cout << "������� �������� Blue: ";
			cin >> Blue;

			if (Blue < 0 || Blue >255)
				cout << "������� ������������ ��������";
		} while (Blue < 0 || Blue >255);
	}
};