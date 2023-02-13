#include<iostream>
using namespace std;

int main()
{
	int nam;
	cout << "zavdania";
	cin >> nam;
	switch (nam)
	{
	case 1:
	{
		const int kol = 5;
		const int col = 5;
		int arr_0[kol][col];
		srand(time(0));
		for (int i = 0; i < kol; i++) {
			for (int j = 0; j < col; j++)
			{
				arr_0[i][j] = rand() % 10;
				cout << arr_0[i][j] << "\t";
			}
			cout << endl << endl;
		}
		int sum;
		for (int i = 0; i < kol; i++)
		{
			sum = 0;
			for (int j = 0; j < col; j++)
			{
				sum += arr_0[i][j];
			}
			cout << "sum" << sum << endl;
		}
		int max, min;
		min = max = arr_0[0][0];
		for (int i = 0; i < kol; i++) {
			for (int j = 0; j < col; j++) {
				if (min > arr_0[i][j])
				{
					min = arr_0[i][j];
				}
				if (max < arr_0[i][j])
				{
					max = arr_0[i][j];

				}

			}
			cout << "min=" << min << " - " << "max=" << max << endl;
		}
	}break;
	case 2:
	{
		const int kol = 5;
		const int col = 5;
		int sum1;
		int arr_0[kol][col];
		srand(time(0));
		for (int i = 0; i < kol; i++) {
			sum1 = 0;

			for (int j = 0; j < col; j++)
			{
				arr_0[i][j] = rand() % 10;
				cout << arr_0[i][j] << "\t";
				sum1 += arr_0[i][j];

			}
			cout << "|" << sum1;

			cout << endl << endl;

		}
		int q = 14;
		for (int x = 0; x < q; x++)
		{
			cout << "---";
		}
		cout << endl;
		int sum2;
		int result;
		for (int i = 0; i < kol; i++)
		{
			sum2 = 0;
			result = 0;
			for (int j = 0; j < col; j++) {
				sum2 += arr_0[j][i];
				result += sum2;
			}
			cout << sum2 << "\t";

		}
		cout << "| " << result;


	}break;
	case 3:
	{
		const int kol = 5;
		const int col = 10;

		int arr_0[kol][col];
		srand(time(0));
		for (int i = 0; i < kol; i++) {
			for (int j = 0; j < col; j++)
			{
				arr_0[i][j] = rand() % 50;
				cout << arr_0[i][j] << "\t";
			}
			cout << endl << endl;

		}
		cout << endl;
		int  res, res1;
		for (int i = 0; i < kol; i++) {
			res = 0;
			res1 = 0;
			for (int j = 0; j < col; j++)
			{

				cout << arr_0[i][j] << "\t";
				j += 1;
			}

			cout << endl << endl;

		}

		cout << endl;
	}break;
	default:
		break;
	}

	return 0;
}