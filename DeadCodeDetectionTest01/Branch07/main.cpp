#include <iostream>

using namespace std;

enum Week { Mon, Tue, Wed, Thu, Fri, Sat, Sun };

Week GetDayOfTheWeek(void)
{
	return Week::Sun;
}

int main(void)
{
	Week today = GetDayOfTheWeek();

	switch (today)
	{
	case Mon:
		cout << "�o��1����" << endl;
		break;
	case Tue:
		cout << "�o��2����" << endl;
		break;
	case Wed:
		cout << "�o��3����" << endl;
		break;
	case Thu:
		cout << "�o��4����" << endl;
		break;
	case Fri:
		cout << "�o��5����" << endl;
		break;
	case Sat:
		cout << "�x��1����" << endl;
		break;
	case Sun:
		cout << "�x��2����" << endl;
		break;
	default:
		break;
	}

	return 0;
}