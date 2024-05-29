#pragma once

#include "MainControl.h"

class Button : public MainControl
{
	string ToolTipText;
public:
	Button();
	Button(string tool_tip_text, bool visible, double x, double y, double height, double width);
	~Button();
	virtual void Print() const override;

	void SetToolTipText(string tool_tip_text);
	string GetToolTipText() const;

	void SaveToFile(ofstream& out) const override;
	void LoadFromFile(ifstream& in) override;
	const char* GetType() const override { return "Button"; };
};