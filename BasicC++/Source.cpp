#include<iostream>
#include<ctime>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int name;
	cin >> name;
	switch(name)
	{

		case  1 :
		{
			setlocale(LC_ALL, " ru ");
			int �, �, v;
			cout << " ????????? ";
			cin >> �;
			cout << " ??? ?? ???? ???????? ??????? ";
			cin >> �;
			v = � / �;
			cout << " ???????? ????? ?? ??????�?? " << v << " ?? ??? " << endl;

		} break;
		case  2 :
		{
			int h1, h2, m1, m2, s1, s2;
			setlocale(LC_ALL, " ru ");
			cout << " ??? ";
			cin >> h1;
			cout << " ����� ";
			cin >> m1;
			cout << " ��������� ";
			cin >> s1;
			cout << " ??? ";
			cin >> h2;
			cout << " ����� ";
			cin >> m2;
			cout << " ��������� ";
			cin >> s2;
			 int result= (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);
			cout << " �������� �� ����� " << result / 60 * 2;

		} break;
		case  3 : {
			int v, ���1, ���2, ���3;
			int ���������1, ���������2, ���������3;
			setlocale(LC_ALL, " ru ");
			cout << " ��������� � ������ ";
			cin >> v;
			cout << " ������� 92 ����� ";
			cin >> ���1;
			cout << " ��������� 95 ��� ";
			cin >> ���2;
			cout << " ��������� 90 ��� ";
			cin >> ���3;
			���������1 = v * 100 / ���1;
			���������2 = v * 100 / ���2;
			���������3 = v * 100 / ���3;

		   system(" cls ");
			cout << " #>-------------------------------------------------------<# " << endl;
			cout << " #>------< " << " ???????? " << ���������1 << " ???? ?? " << v << " ?? >----<# " << endl;
			cout << " #>------< " << " ???????? " << ���������2 << " ???? ?? " << v << " ?? >----<# " << endl;
			cout << " #>------< " << " ???????? " << ���������3 << " ???? ?? " << v << " ?? >----<# " << endl;
			cout << " #>-------------------------------------------------------<# ";
		} break;

	}
	return 0;
}