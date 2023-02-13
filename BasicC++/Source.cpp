#include<iostream>
#include<ctime>

using namespace std;
void func(const int& number) {
	int bik, korova, input;
	do {
		cin >> input;
		bik = korova = 0;

		for (int i = 1000; i != 0; i /= 10) {
			if ((input / i % 10) == (number / i % 10))
				bik++;
		}
		for (int i = 1000; i != 0; i /= 10) {
			for (int j = 1000; j != 0; j /= 10)
			{
				if (i != j && (input / i % 10) == (number / j % 10))
					korova++;
			}
		}
		cout << "kolichestvo bikov: " << bik << " kolichestvo korov: " << korova << endl;

	} while (bik < 4);

}
int spiln(int nam1, int nam2)
{
	while (nam1 > 0 && nam2 > 0)
		if (nam1 > nam2)
			nam1 %= nam2;
		else
			nam2 %= nam1;

	return nam1 + nam2;
	cout << endl;
}

int main()
{
	while (true)
	{
		int nam;
		cout << "nam is 1 -nam is 2 ";
		cin >> nam;
		switch (nam)
		{
		case 1:
		{
			srand(time(0));
			bool bmap[10];
			for (int i = 0; i != 10; i++) bmap[i] = true;
			int n, number = 0;
			for (int i = 1; i != 10000; i *= 10)
			{
				do {
					n = 1 + rand() % 9;
				} while (bmap[n] == false);
				bmap[n] = false;
				number += i * n;
			}
			cout << number << endl;


			func(number);
		}break;
		case 2:
		{
			int nam1, nam2;
			cout << "nam1 is";
			cin >> nam1;
			cout << "nam2 is ";
			cin >> nam2;
			cout << spiln(nam1, nam2);

		}break;
		default:
			break;
		}


	}
	return 0;
}