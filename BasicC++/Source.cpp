#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	int nam;
	cout << "nam is ";
	cin >> nam;
	switch (nam)
	{

	case 3:
	{
		srand(time(0));
		int size;
		cout << "Enter size:";
		cin >> size;
		int* arr = new int[size];
		int* arrcopy = &*arr;
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = rand() % 10;
			cout << arr[i] << "\t";

		}
		delete[] arr;

		cout << endl;
		for (size_t i = 0; i < size; i++)
		{
			arrcopy[i] = rand() % 10;
			cout << arrcopy[i] << "\t";

		}

		cout << endl;
		int* arrcopy = &*arr;
		for (size_t i = size - 1; i > 0; --i)
		{

			cout << *&arrcopy[i] << "\t";

		}
		delete[] arrcopy;
	}break;
	case 1:
	{
		srand(time(0));
		int size;
		cout << "Enter size:";
		cin >> size;
		int* arr = new int[size];
		int* arrcopy = &*arr;
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = rand() % 10;
			cout << arr[i] << "\t";

		}
		delete[] arr;

		cout << endl;
		for (size_t i = 0; i < size; i++)
		{
			arrcopy[i] = rand() % 10;
			cout << arrcopy[i] << "\t";

		}

		cout << endl;
	}break;
	case 2:
	{
		srand(time(0));
		int size;
		cout << "Enter size:";
		cin >> size;
		int* arr = new int[size];
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = rand() % 10;
			cout << arr[i] << "\t";

		}
		cout << endl;
		int* arrcopy = &*arr;

		for (size_t i = size - 1; i > 0; --i)
		{

			cout << *&arrcopy[i] << "\t";

		}
		delete[] arrcopy;

	}break;
	default:
		break;
	}

}