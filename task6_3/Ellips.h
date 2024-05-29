#pragma once

#include "MainControl.h"
#include "RGB.h"

class Ellips : public MainControl
{
	RedGreenBlue FillColor;
	RedGreenBlue BorderColor;
public:

	Ellips();
	Ellips(bool visible, double x, double y, RedGreenBlue fill_color, RedGreenBlue border_color, double height, double width);
	~Ellips();
	virtual void Print() const override;

	void SetFillColor(RedGreenBlue fill_color);
	RedGreenBlue GetFillColor() const;

	void SetBorderColor(RedGreenBlue border_color);
	RedGreenBlue GetBorderColor() const;

	void SaveToFile(ofstream& out) const override;
	void LoadFromFile(ifstream& in) override;
	const char* GetType() const override { return "Ellips"; };
};