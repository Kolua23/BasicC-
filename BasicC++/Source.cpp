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
			int т, с, v;
			cout << " ????????? ";
			cin >> с;
			cout << " ??? ?? ???? ???????? ??????? ";
			cin >> т;
			v = с / т;
			cout << " ???????? ????? ?? ??????с?? " << v << " ?? ??? " << endl;

		} break;
		case  2 :
		{
			int h1, h2, m1, m2, s1, s2;
			setlocale(LC_ALL, " ru ");
			cout << " ??? ";
			cin >> h1;
			cout << " Текст ";
			cin >> m1;
			cout << " смородина ";
			cin >> s1;
			cout << " ??? ";
			cin >> h2;
			cout << " Текст ";
			cin >> m2;
			cout << " смородина ";
			cin >> s2;
			 int result= (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);
			cout << " добавить до конца " << result / 60 * 2;

		} break;
		case  3 : {
			int v, имя1, имя2, имя3;
			int результат1, результат2, результат3;
			setlocale(LC_ALL, " ru ");
			cout << " Вернуться к тексту ";
			cin >> v;
			cout << " Счетчик 92 числа ";
			cin >> имя1;
			cout << " Должность 95 лет ";
			cin >> имя2;
			cout << " Должность 90 лет ";
			cin >> имя3;
			результат1 = v * 100 / имя1;
			результат2 = v * 100 / имя2;
			результат3 = v * 100 / имя3;

		   system(" cls ");
			cout << " #>-------------------------------------------------------<# " << endl;
			cout << " #>------< " << " ???????? " << результат1 << " ???? ?? " << v << " ?? >----<# " << endl;
			cout << " #>------< " << " ???????? " << результат2 << " ???? ?? " << v << " ?? >----<# " << endl;
			cout << " #>------< " << " ???????? " << результат3 << " ???? ?? " << v << " ?? >----<# " << endl;
			cout << " #>-------------------------------------------------------<# ";
		} break;

	}
	return 0;
}