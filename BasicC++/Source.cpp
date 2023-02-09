#include<iostream>
#include<ctime>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int namber;
	cin >> namber;
	switch (namber)
	{
	case 1:
	{
		int a;
		cout << "nam is ";
		cin >> a;
		cout << 500 * 501 / 2 - a * (a - 1) / 2;


	}break;
	case 2:
	{
		int x = 0;
		int y = 0;
		cout << "x = ";
		cin >> x;
		cout << "y = ";
		cin >> y;
		cout << "result " << powl(x, y);
	}break;
	case 3:
	{
		int x = 1;
		int y = 1000;
		do
		{
			cout << x + y / 2 << endl;
		} while (x == 1000 / 2);

	}break;
	case 4:
	{
		int a, s = 1;
		cout << "nam is ";
		cin >> a;
		for (int i = a; i <= 20; i++)
		{
			cout << s * i;
		}cout << "zdobutok = " << s;
	}break;
	case 5:
	{
		int k;
		cin >> k;
		if (k > 0 || k < 10)
		{
			for (int i = 1; i <= 10; i++)
			{
				cout << k << "*" << i << "=" << k * i << endl;
			}
		}
		else
		{
			return 0;
		}
	}break;
	default:
		break;
	}
	return 0;
}