#include "HyperlinkLabel.h"

HyperlinkLabel::HyperlinkLabel() : MainControl()
{
	URL = '\0';
}

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
		cout << "\nКоординаты метки гиперсслыки: (" << X << ", " << Y << ")";
		cout << "\nВысота метки гиперссылки: " << Height << "\nШирина метки гиперссылки: " << Width;
		cout << "\nURL: " << URL;
	}
	cout << "\n===============================================================================";
}

void HyperlinkLabel::SetURL(string url)
{
	URL = url;
}
string HyperlinkLabel::GetURL() const
{
	return URL;
}

void HyperlinkLabel::SaveToFile(ofstream& out) const
{
	out << GetType() << ' ' << Visible << ' ' << X << ' ' << Y << ' '
		<< Height << ' ' << Width << ' '
		<< URL << ' ' << '\n';
}
void HyperlinkLabel::LoadFromFile(ifstream& in)
{
	in >> Visible >> X >> Y
		>> Height >> Width
		>> URL;
}