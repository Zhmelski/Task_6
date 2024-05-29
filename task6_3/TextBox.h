#pragma once

#include "MainControl.h"
#include "RGB.h"

class TextBox : public MainControl
{
	string Text;
	RedGreenBlue TextColor;
public:
	TextBox();
	TextBox(string text, RedGreenBlue text_color, bool visible, double x, double y, double height, double width);
	~TextBox();
	virtual void Print() const override;

	void SetText(string text);
	string GetText() const;

	void SetTextColor(RedGreenBlue text_color);
	RedGreenBlue GetTextColor() const;

	void SaveToFile(ofstream& out) const override;
	void LoadFromFile(ifstream& in) override;
	const char* GetType() const override { return "TextBox"; };
};