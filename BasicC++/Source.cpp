#include <iostream>
using namespace std;
int Func(int number, int count, int res = 1)
{
    if (count != 0)
    {
        count--;
        return res = 2 * Func(number, count);
    }
    else {
        return res;
    }
}
int n(int N) {
    for (int i = 0; i < N; i++) {
        cout << "*";
    }
    return N;
}
int suma(int a, int b, int sum = 0)
{

    for (int i = a; i < b; i++)
    {
        sum = a += b;
    }

    return sum;
}
void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        while (j >= 0 && arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
            cout << "\ndid";
            j--;
        }
    }
}

int main()
{
    int nam;
    cout << "nam>=";
    cin >> nam;
    switch (nam)
    {
    case 1:
    { cout << Func(2, 4) << endl;

    }break;
    case 2:
    { int N;
    cout << "n>=";
    cin >> N;
    cout << n(N) << endl;

    }break;
    case 3:
    { int a, b;
    cout << "a>=";
    cin >> a;
    cout << "b>=";
    cin >> b;
    cout << suma(a, b) << endl;

    }break;
    case 4:
    {
        srand(time(0));
        const int size = 10;
        int arr[size];
        for (int i = 0; i < size; i++) {
            arr[i] = rand() % 100;
            cout << arr[i] << "\t";

        }
        cout << endl;
        insertionSort(arr, 10);
        cout << "\n\nSorted array ... \n";
        for (int i = 0; i < 8; i++)
        {
            cout << arr[i] << "\t";
        }
        return 0;
    }break;
    default:
        break;
    }



    return 0;
}