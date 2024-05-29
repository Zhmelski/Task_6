#include "Button.h"

Button::Button() : MainControl()
{
	ToolTipText = '\0';
}

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
		cout << "\n����� ���������: " << ToolTipText;
		cout << "\n���������� ���� ���������: (" << X << ", " << Y << ")";
		cout << "\n������ ���� ���������: " << Height << "\n������ ���� ���������: " << Width;
	}
	cout << "\n===============================================================================";
}

void Button::SetToolTipText(string tool_tip_text)
{
	ToolTipText = tool_tip_text;
}
string Button::GetToolTipText() const
{
	return ToolTipText;
}

void Button::SaveToFile(ofstream& out) const
{
	out << GetType() << ' '
		<< ToolTipText << ' '
		<< Visible << ' ' << X << ' ' << Y << ' '
		<< Height << ' ' << Width << ' ' << '\n';

}
void Button::LoadFromFile(ifstream& in)
{
	in >> ToolTipText
		>> Visible >> X >> Y
		>> Height >> Width;
}