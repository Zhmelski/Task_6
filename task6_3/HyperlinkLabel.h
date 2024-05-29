#pragma once

#include "MainControl.h"

class HyperlinkLabel : public MainControl
{
	string URL;
public:
	HyperlinkLabel();
	HyperlinkLabel(bool visible, double x, double y, double height, double width, string url);
	~HyperlinkLabel();
	virtual void Print() const override;

	void SetURL(string url);
	string GetURL() const;

	void SaveToFile(ofstream& out) const override;
	void LoadFromFile(ifstream& in) override;
	const char* GetType() const override { return "HyperlinkLabel"; };
};