#include<iostream>
#include<ctime>

using namespace std;

template<typename T>
T* imput(uint32_t const size)
{
	return   new T[size];
}
template<typename T>
void* arr_sort(T* arr, uint32_t const size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
	return new T[size];
}
template<typename T>
void* arr_print(T* arr, uint32_t const size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	return  new T[size];
}
template<typename T>
void* sort_arr(T* arr, uint32_t const size)
{
	T copy;
	T sort;
	for (size_t i = 0; i < size; i++)
	{
		copy = i;
		for (sort = i; sort < size; sort++)
		{
			if (arr[copy] > arr[sort])
			{
				copy = sort;
			}
		}
		swap(arr[i], arr[copy]);
	}
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	return new T[size];
}

int main()
{
	srand(time(0));
	int A;
	cout << "A->";
	cin >> A;
	int* B = imput<int>(A);
	arr_sort<int>(B, A);
	arr_print<int>(B, A);
	cout << endl;
	sort_arr<int>(B, A);
	return 0;
}