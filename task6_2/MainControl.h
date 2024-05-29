#pragma once

#include <iostream>
using namespace std;

class MainControl
{
protected:
	bool Visible;
	double X, Y;
	double Height, Width;
public:
	MainControl(bool visible, double x, double y, double height, double width);
	~MainControl();
	virtual void Print() const = 0;

	void SetVisible(bool& vizible);
	bool GetVisible() const;

	void SetX(double& x);
	double GetX() const;

	void SetY(double& y);
	double GetY() const;

	void SetHeight(double& height);
	double GetHeight() const;

	void SetWidth(double& width);
	double GetWidth() const;
};