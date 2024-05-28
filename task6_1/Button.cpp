#include "Button.h"

Button::Button(string tool_tip_text, bool visible, double x, double y, double height, double width) : MainControl(visible, x, y, height, width)
{
	ToolTipText = tool_tip_text;
}

Button::~Button()
{
	cout << "\nDestructor Button";
}

void Button::Print() const
{
	cout << "\n\n============================== Button =========================================";
	if (Visible)
	{
		cout << "\nТекст подсказки: " << ToolTipText;
		cout << "\nКоординаты поля подсказки: (" << X << ", " << Y << ")";
		cout << "\nВысота поля подсказки: " << Height << "\nШирина поля подсказки: " << Width;
	}
	cout << "\n===============================================================================";
}

void Button::SetToolTipText(string& tool_tip_text)
{
	ToolTipText = tool_tip_text;
}
string Button::GetToolTipText() const
{
	return ToolTipText;
}