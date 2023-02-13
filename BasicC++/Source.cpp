#include<iostream>
using namespace std;

int main()
{
	int i;
	cin >> i;
	switch (i)

	{
	case 1:
	{
		int nam;
		setlocale(LC_ALL, "ukr");
		cout << "÷čńëî ";
		cin >> nam;

		if (nam % 2 == 0)
			cout << "÷čńëî ďŕđíĺ" << endl;
		else
			cout << "Íĺďŕđíĺ" << endl;
	}break;
	case 2:
	{
		int nam1, nam2;
		setlocale(LC_ALL, "ukr");
		cout << "ďĺđřĺ ÷čńëî ";
		cin >> nam1;
		cout << "äđóăĺ ÷čńëî ";
		cin >> nam2;
		if (nam1 > nam2 || nam1 < nam2)
			nam1 > nam2 ? cout << "áłëüřĺ 1 ÷čńëî " << nam1 : cout << "áłëüřĺ 2 ÷čńëî " << nam2;
	}
	break;
	case 3:
	{
		int nam;
		setlocale(LC_ALL, "ukr");
		cout << "÷čńëî ";
		cin >> nam;
		if (nam > 1 || nam <= -1)
			nam <= 1 ? cout << "âłäşěíĺ " << nam : cout << "äîäŕňíĺ " << nam;
		else if (nam == 0)
			cout << "äîđłâíţş íóëţ " << nam;

	}break;
	case 4:
	{
		int nam1, nam2;
		setlocale(LC_ALL, "ukr");
		cout << "ďĺđřĺ ÷čńëî ";
		cin >> nam1;
		cout << "äđóăĺ ÷čńëî ";
		cin >> nam2;
		if (nam1 > nam2 || nam1 < nam2)
			nam1 > nam2 ? cout << "áłëüřĺ 1 ÷čńëî " << nam1 << ">" << nam2 : cout << "áłëüřĺ 2 ÷čńëî " << nam2 << ">" << nam1;
		else if (nam1 == nam2) {
			cout << nam1 << "=" << nam2;
		}

	}break;

	}
	cin.get();

	return 0;
}