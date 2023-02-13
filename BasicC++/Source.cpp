#include<iostream>
#include<ctime>

using namespace std;
template< typename T >
int a(T arr[], const size_t size)
{
	for (size_t i = 0; i < size; i++) {
		arr[size] = rand() % 10;
		cout << arr[size] << "\t";
	}cout << endl;
	return 0;
}
template< typename T >
double  b(T arr1[], const size_t size)
{
	for (size_t i = 0; i < size; i++) {
		arr1[size] = rand() % 10;
		cout << arr1[size] << "\t";
	}
	cout << endl;
	return 0;
}
template< typename T >
char  c(T arr2[], const size_t size)
{
	for (size_t i = 0; i < size; i++) {

		arr2[size] = rand() % 50;
		cout << arr2[size] << "\t";
	}
	cout << endl;
	return 0;
}


int spiln(int nam1, int nam2, int sum = 0)
{
	sum = nam1 / nam2;
	nam1 = nam2;
	nam2 = sum;
	return sum;
}
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
int main()
{
	srand(time(0));
	int nam;
	cout << "nam is ";
	cin >> nam;
	switch (nam)
	{
	case 1:
	{
		const int size = 5;
		int arr[size];
		double arr1[size];
		char arr2[size];

		cout << a <int>(arr, size);
		cout << b <double>(arr1, size);
		cout << c <char>(arr2, size);

	}break;

	case 2:
	{
		int nam1, nam2;
		cout << "nam1 is";
		cin >> nam1;
		cout << "nam2 is";
		cin >> nam2;
		cout << spiln(nam1, nam2);

	}break;
	case 3:
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
	default:
		break;
	}
	return 0;


}