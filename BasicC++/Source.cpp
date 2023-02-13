#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	int name;
	cout << "nam>=";
	cin >> name;
	switch (name)
	{
	case 1: {
		int a, b;
		cout << "a>=";
		cin >> a;
		cout << "b>=";
		cin >> b;
		int sum = 1;
		for (int i = 1; i < a; i++)
		{
			sum = b *= a;

		}
		cout << sum;
	}break;
	case 2:
	{
		int a, b;
		cout << "a>=";
		cin >> a;
		cout << "b>=";
		cin >> b;
		int sum = 1;
		for (int i = a; i < b; i++)
		{
			sum = a += b;

		}
		cout << sum;
	}break;
	case 3:
	{
		int number;
		cout << "namber>=";
		cin >> number;
		int sum = 0;

		for (int i = 1; i <= number / 2; ++i)
		{
			if (number % i == 0)
			{
				sum += i;
			}

		}


		if (sum == number) {
			cout << "true";
		}
		else {
			cout << "folse";
		}
	}break;
	case 4:
	{
		while (true)
		{
			srand(time(0));
			const int nam = 6;
			int arr[nam];
			for (int i = 0; i < nam; i++)
			{
				arr[i] = rand() % 10;
				cout << arr[i] << "\t";
				arr[0] + arr[1] + arr[2];
				arr[3] + arr[4] + arr[5];


			}
			cout << endl;
			if (arr[0] + arr[1] + arr[2] == arr[3] + arr[4] + arr[5])
			{
				cout << "is heppi" << endl;
			}
			else
			{
				cout << "no heppi" << endl;
			}
			system("pause");


		}system("cls");

	}break;
	default:
	case 5:
	{


	}break;
	break;
	}

}