#include<iostream>
#include <time.h>
#include <iomanip>
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
		const int  col = 5;

		int arr_0[kol][col];
		int sum, nam;
		cout << "nam=";
		cin >> nam;

		srand(time(0));

		for (int i = 0; i < kol; i++)
		{

			for (int j = 0; j < col; j++) {
				sum = 0;
				arr_0[i][j] = rand() % 10;
				cout << arr_0[i][j] << "\t";

				if (j == 0)
				{
					arr_0[i][j] = nam;
				}
				if (j == 1) {
					sum = nam * 2;
					cout << nam << "*2" << "=" << sum << "\t";
				}
			}

			cout << endl << endl;
		}


	}break;
	case 2:
	{   int sum, nam;
	cout << "nam=";
	cin >> nam;
	const int kol = 5;
	const int  col = 5;

	int arr_0[kol][col];


	srand(time(0));

	for (int i = 0; i < kol; i++)
	{

		for (int j = 0; j < col; j++) {

			arr_0[i][j] = rand() % 10;
			cout << arr_0[i][j] << "\t";

			if (j == 0)
			{

				cout << nam << "\t";
			}
			if (j == 1) {
				sum = nam + 1;
				cout << nam << "+1" << "=" << sum << "\t";
			}
			if (j == 2) {
				sum = sum + 1;
				cout << nam + 1 << "+1" << "=" << sum << "\t";
			}
		}

		cout << endl << endl;
	}
	}break;
	case 3:
	{


		int rows, cols, a = 0, cho, shift, tmp, j1 = 0;
		const int m = 100, n = 100, num = 10;
		int ar[m][n], ar1[num];
		cout << "Enter rows:";
		cin >> rows;
		cout << "Enter cols:";
		cin >> cols;
		srand(time(0));
		for (int i = 0; i < num; i++) {
			ar1[i] = a;
			a++;
		}
		a = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				ar[i][j] = rand() % num;
				a = ar[i][j];
				ar[i][j] = ar1[a];
			}
		}
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cout << setw(5) << ar[i][j];
			}
			cout << "\n";
		}
		cout << "0 - exit \n1 - shift left \n2 - shift right \n3 - shift up \n4 - shift down \n";
		cin >> cho;
		for (; cho > 0 && cho <= 4;) {
			if (cho == 1) {
				cout << "shift:";
				cin >> shift;
				for (int a = 0; a < rows; a++) {
					for (int i = 0; i < rows; i++) {
						for (int j = 0; j < cols; j++) {
							if (a > 0) {
								j1++;
							}
							if (j >= 0 && j < shift) {
								for (int j = j1; j < cols - 1; j++) {
									if (j1 == 0) {
										tmp = ar[i][j];
										ar[i][j] = ar[i][j + 1];
										ar[i][j + 1] = tmp;
									}
									if (j1 > 0) {
										tmp = ar[i][j];
										ar[i][j] = ar[i][j + 1];
										ar[i][j + 1] = tmp;
									}
								}
							}
						}
					}
				}
				for (int i = 0; i < rows; i++) {
					for (int j = 0; j < cols; j++) {
						cout << setw(5) << ar[i][j];
					}
					cout << "\n";
				}
				cout << "0 - exit \n1 - shift left \n2 - shift right \n3 - shift up \n4 - shift down \n";
				cin >> cho;
			}
		}

	}break;
	default:
		break;
	}

	return 0;
}