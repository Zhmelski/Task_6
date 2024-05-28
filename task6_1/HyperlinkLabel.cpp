#include "HyperlinkLabel.h"

HyperlinkLabel::HyperlinkLabel(bool visible, double x, double y, double height, double width, string url) : MainControl(visible, x, y, height, width)
{
	URL = url;
}

HyperlinkLabel::~HyperlinkLabel()
{
	cout << "\nDestructor HyperlinkLabel";
}

void HyperlinkLabel::Print() const
{
	cout << "\n\n============================== HyperlinkLabel =================================";
	if (Visible)
	{
		cout << "\n���������� ����� �����������: (" << X << ", " << Y << ")";
		cout << "\n������ ����� �����������: " << Height << "\n������ ����� �����������: " << Width;
		cout << "\nURL: " << URL;
	}
	cout << "\n===============================================================================";
}

void HyperlinkLabel::SetURL(string& url)
{
	URL = url;
}
string HyperlinkLabel::GetURL() const
{
	return URL;
}