#include<iostream>
#include<ctime>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	while (1)
	{


		int nam;
		cin >> nam;
		system("cls");
		switch (nam)
		{

		case 1:
			system("cls");
			for (int i = 1; i <= 10; i++) {
				for (int j = 1; j < i; j++) {
					cout << "* ";
				}
				cout << endl;
			}break;
		case 2:
		{
			for (int i = 10; i >= 1; i--) {
				for (int j = 0; j < i; j++) {
					cout << "* ";
				}
				cout << " " << endl;
			}break;
		case 3:
		{
			int x = 1;
			for (int i = 10; i >= 1; i--) {
				for (int k = 1; k <= x; k++) {
					cout << " ";
				}
				for (int j = 1; j <= i; j++) {
					cout << "* ";
				}
				cout << endl;
				x++;
			}
		}break;
		case 4:
		{
			int x = 0;
			for (int i = 1; i < 10; i++) {
				for (int k = 10; k >= x; k--) {
					cout << "  ";
				}
				for (int j = 1; j <= i; j++) {
					cout << "* ";
				}
				cout << endl;
				x++;
			}
		}break;
		case 5:
		{
			int x = 0;
			for (int i = 0; i < 10; i++) {
				for (int k = 10; k >= x; k--)
					cout << " ";
				for (int j = 1; j <= i; j++) {
					cout << "* ";
				}cout << endl;
				x++;
			}
		}break;
		case 6:
		{
			int x = 0;
			for (int i = 10; i > 1; i--) {
				for (int k = 1; k < x * 2; k++) {
					cout << " ";
				}for (int j = 1; j < i; j++) {
					cout << "* ";
				}cout << endl;
				x++;
			}
		}break;
		case 7:
		{

			int x = 0;
			int y = 0;

			for (int i = 5; i >= 0; i--) {
				for (int k = 1; k <= y; k++) {
					cout << " ";
				}
				for (int j = 0; j <= i; j++) {
					cout << "* ";
				}
				cout << endl;
				y++;
			}
			for (int i = 0; i < 5; i++) {
				for (int k = 4; k >= x; k--)
					cout << " ";
				for (int j = 0; j <= i; j++) {
					cout << "* ";
				}cout << endl;
				x++;
			}
		}break;
		case 8:
		{
			for (int i = 1; i <= 5; i++) {
				for (int j = 1; j <= i; j++) {
					cout << "* ";
				}
				cout << endl;
			}
			for (int i = 6; i >= 1; i--) {
				for (int j = 1; j <= i; j++) {
					cout << "* ";
				}
				cout << endl;
			}
		}break;
		case 9:
		{
			int x = 1;
			for (int i = 1; i < 6; i++) {
				for (int k = 6; k >= x; k--) {
					cout << "  ";
				}
				for (int j = 1; j <= i; j++) {
					cout << "* ";
				}
				cout << endl;
				x++;
			}
			for (int i = 6; i > 1; i--) {
				for (int k = 1; k < x * 2; k++) {
					cout << " ";
				}for (int j = 1; j < i; j++) {
					cout << "* ";
				}cout << endl;
				x++;
			}
		}break;
		case 10:
		{
			int x = 0;
			int y = 1;
			for (int i = 0; i < 6; i++) {
				for (int k = 5; k >= y; k--) {
					cout << "  ";
				}
				for (int j = 0; j <= i; j++) {
					cout << "* ";
				}
				cout << endl;
				y++;
			}
			for (int i = 5; i >= 0; i--) {
				for (int k = 0; k <= x * 2; k++) {
					cout << " ";
				}
				for (int j = 0; j <= i; j++) {
					cout << "* ";
				}
				cout << endl;
				x++;
			}
			system("pause");
		}break;
		case 11:
		{
			setlocale(LC_ALL, "Russian");

			int a, n = 0, sum = 0, c = 0;
			cout << "number";
			cin >> a;

			while (a)
			{
				if (a % 10 == 0)
					c++;
				a /= 10;

				cout << "íóë³â " << c << endl;

				for (n = 0; a > 0;)
				{
					sum += a % 10;
					a /= 10;
					n++;
				}
				cout << " ê³ëüê³ñòü öèôð = " << n << endl << " " << "sum = " << sum << endl << " ñóðåäüíå àðèôìåòè÷íå = " << sum / n << endl;
			}

			system("pause");
		}break;
		case 12:
		{
			int h, w, a;
			setlocale(LC_ALL, "ukr");
			cout << "øèðèíà ";
			cin >> h;
			cout << "âèñîòà";
			cin >> w;
			cout << "ê³ëüê³÷òü êë³òèíîê ";
			cin >> a;
			for (int i = 0; i < h; i++)
			{
				if (i % 2 == 0)
					for (int i = 0; i < w / 2; i++)
					{
						for (int i = 0; i < a; i++)
							cout << "*";
						for (int i = 0; i < a; i++)
							cout << "-";
					}
				else
					for (int i = 0; i < w / 2; i++)
					{
						for (int i = 0; i < a; i++)
							cout << "-";
						for (int i = 0; i < a; i++)
							cout << "*";
					}
				cout << "\n";
			}

		}break;

		default:

			break;
		}

		cin.get();
		return 0;
		}
	}
	return 0;
}