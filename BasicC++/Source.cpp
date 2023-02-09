#include<iostream>
using namespace std;

int main()
{
	//	int x;
	//	cout << " year ";
	//	cin >> x;
	//		cout << 366 - (x % 4);
	//		cout <<"dey";
	// double  r0, r1, r2, r3;
	//r1 = 2;
	//r2 = 4;
	//r3 = 8;
	//r0 = 1.142857;
	//r0 = 1 / r1 + 1 / r2 + 1 / r3;
	//cout << r0 << "=" << 1 / r1 << "+" << 1 / r2 << "+" << 1 / r3 << endl;
	//const int  pi = 3.14;
	//float S, L,R;
	//cout << "R= ";
	//cin >> R;
	//S = pi * R;
	//cout << "\n S= " << S;
	//L = 2 * pi * R;
	//cout << "\n L= " << L;
	double  s, v, t, a;
	cout << "v= ";
	cin >> v;
	cout << "t= ";
	cin >> t;
	cout << "a= ";
	cin >> a;
	s = v * t + (a * t / 2) / 2;
	cout << "s= " << s;
	return 0;
}