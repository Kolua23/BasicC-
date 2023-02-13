#include<iostream>
using namespace std;

int main()
{
	while (true)
	{
		setlocale(LC_ALL, "ukr");
		cout << "#>---------------------<#" << endl;
		cout << "#>  1 êóëüêà  -20 ãðí  <#" << endl;
		cout << "#>  2 ³ãðàøêà -50ãðí   <#" << endl;
		cout << "#>  3 øàïî÷êà -15 ãðí  <#" << endl;
		cout << "#>  4 áðàñëåò -45 ãðí  <#" << endl;
		cout << "#>                     <#" << endl;
		cout << "#>--------ïðàéñ--------<#" << endl;

		int q = 32;
		int w = 23;
		int e = 54;
		int r = 34;

		int kil;
		cout << "ê³ëüê³ñòü" << endl;
		cin >> kil;
		int y;
		cout << "âèá³ð ";
		cin >> y;
		switch (y)
		{
		case 1:
		{
			cout << "sum" << kil * 20 << endl;
			cout << "ostatok" << q - kil << endl;
		}break;
		case 2:
		{
			cout << "sum" << kil * 50 << endl;
			cout << "ostatok" << w - kil << endl;
		}break;
		case 3:
		{
			cout << "sum" << kil * 15 << endl;
			cout << "ostatok" << e - kil << endl;
		}break;
		case 4:
		{
			cout << "sum" << kil * 45 << endl;
			cout << "ostatok" << r - kil << endl;
		}break;
		default:
			break;
			system("pause");
		}
	}


	return 0;
}