#include<iostream>
#include<ctime>

using namespace std;

size_t  Prav(size_t n, size_t k)
{

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return (1);
}
size_t Factorial(size_t number)
{
	size_t mul = 1;
	cout << "!" << number << " = ";
	do {
		mul *= number;
		if (number == 1)
		{
			cout << number << " = ";
		}
		else {
			cout << number << " * ";
		}
		number--;
	} while (number);
	return mul;
}
bool SimpleNumber(int number)
{
	uint32_t counter = 0;
	for (size_t i = 1; i <= number; i++)
	{
		if (number % i == 0)
			counter++;
		if (counter >= 3)
			return false;
	}
	return true;
}
size_t Kub(size_t kub) {

	int sum;
	sum = kub * kub * kub;
	cout << sum << endl;



	return kub;
}
size_t Bil(int arr[], int bil)
{
	srand(time(0));
	cout << endl;
	for (int i = 0; i < bil; i++) {
		arr[bil] = rand() % 100;
		cout << arr[bil] << "\t";
	}
	cout << endl;
	int max;
	max = bil;
	if (max < arr[bil]) {
		max = arr[bil];
	}
	cout << "bil=" << max;
	return true;
}size_t tru(size_t x)
{
	if (x >= 1) {
		cout << "true";
	}
	if (x == 0) {
		cout << "fols";
	}
	return x;
}

int main()
{
	int n, k;
	cout << "N=";
	cin >> n;
	cout << "K=";
	cin >> k;
	cout << Prav(n, k) << endl;
	int N;
	cout << "N->";
	cin >> N;
	cout << Factorial(N) << endl;
	int N1;
	cout << "N->";
	cin >> N1;
	if (SimpleNumber(N1))
		cout << "This number is simple!" << endl;
	else        cout << "This number is not simple!" << endl;
	int kub;
	cout << "kub";
	cin >> kub;
	cout << Kub(kub);
	const int bil = 2;
	int arr[bil];
	Bil(arr, bil);
	int x;
	cout << "nam is ";
	cin >> x;
	cout << tru(x);
	return 0;
}
