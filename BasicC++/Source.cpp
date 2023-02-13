#include <iostream>
#include<Windows.h>

using namespace std;

int main()
{
    int nam;
    cin >> nam;
    switch (nam)
    {
    case 1:

    {
        int h, v, simw;
        cout << "h>= ";
        cin >> h;
        cout << "v>=";
        cin >> v;
        cout << "simvol";
        cin >> simw;

        for (int i = 0; i < v; i++) {
            for (int j = 0; j < h; j++) {
                cout << simw;
            }cout << " " << endl;
        }
    }break;
    case 2:

    {
        while (true)
        {
            HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
            int color;
            cout << "color ";
            cin >> color;
            SetConsoleTextAttribute(handle, WORD(0 << 4 | color));
            int h, v, simw;
            cout << "h>= ";
            cin >> h;
            cout << "v>=";
            cin >> v;
            cout << "simvol";
            cin >> simw;
            for (int i = 0; i < v; i++)
                cout << simw;
            cout << endl;
            for (int k = 0; k < v - 1; k++) {
                cout << simw;
                for (int j = 1; j < h - 1; j++)
                    cout << " ";
                cout << simw << endl;
            }
            if (v > 1)
                for (int i = 0; i < v; ++i) {
                    cout << simw;

                }cout << endl;


            system("pause");
            system("cls");
        }
    }break;
    default:
        break;
    }


    return 0;
}