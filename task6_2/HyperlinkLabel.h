#pragma once

#include "MainControl.h"

class HyperlinkLabel : public MainControl
{
	string URL;
public:
	HyperlinkLabel(bool visible, double x, double y, double height, double width, string url);
	~HyperlinkLabel();
	virtual void Print() const override;

	void SetURL(string& url);
	string GetURL() const;
};