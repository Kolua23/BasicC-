#include<iostream>
#include<Windows.h>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
	int nam;
	cin >> nam;
	switch (nam)
	{
	case 1:
	{
		int h, w;
		cout << "h>= ";
		cin >> h;
		cout << "w>= ";
		cin >> w;
		for (int i = 0; i < h; i++)
		{
			if (i == 0 || i == h - 1)
			{
				for (int j = 0; j < w; j++)
				{
					if (i == 0)
					{
						if (j == 0)
							cout << char(201);
						else if (j == w - 1)
							cout << char(187);
						else
							cout << char(205) << char(205);
					}
					if (i == h - 1)
					{
						if (j == 0)
							cout << char(200);
						else if (j == w - 1)
							cout << char(188);
						else
							cout << char(205) << char(205);
					}
				}
				cout << endl;

			}
		}

	}break;
	case 2:
	{
		while (1)
		{


			int line;
			char speed;
			int w, h;
			setlocale(LC_ALL, "ukr");
			cout << "simwol ";
			cin >> line;
			cout << "h=";
			cin >> h;
			cout << "w=";
			cin >> w;
			cout << "1=ãîðèçîíòàëüíî , 2=âåðòèêàëüíî" << endl;

			int a;
			cin >> a;
			switch (a)
			{
			case 1:
			{
				cout << "\n f - Áèñòðî \n n - Íîðìàëüíî \n s - Ìåäë³íî \n\n Âèáðàòè âàð³àíò : ";
				cin >> speed;
				for (int i = 0; i < h; i++)

					if (speed == 'f')
					{
						Sleep(20);
						cout << line;

					}
					else if (speed == 'n')
					{
						Sleep(400);
						cout << line;

					}
					else if (speed == 's')
					{
						Sleep(1000);
						cout << line;

					}
				system("pause");
				system("cls");
			}break;
			case 2:
			{
				cout << "\n f - Áèñòðî \n n - Íîðìàëüíî \n s - Ìåäë³íî \n\n Âèáðàòè âàð³àíò : ";
				cin >> speed;
				for (int j = 0; j < w; j++)
					if (speed == 'f')
					{
						Sleep(20);
						cout << line << endl;

					}
					else if (speed == 'n')
					{
						Sleep(400);
						cout << line << endl;

					}
					else if (speed == 's')
					{
						Sleep(1000);
						cout << line << endl;

					}
				system("pause");
				system("cls");
			}break;

			}
		}
	}break;


	return 0;
	default:
		break;
	}

	return 0;
}