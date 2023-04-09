#include <iostream>
#include<string>
#include<vector>
#include<Windows.h>

using namespace std;

class Person
{
public:
	Person(string name, string namber, string data) :
		m_name(name), m_namber(namber), m_data(data) {}

	string Name()const { return m_name; }
	string Namber()const { return m_namber; }
	string DAta()const { return m_data; }

	void print()const
	{
		cout << "імя" << m_name << endl;
		cout << "Номер телефона " << m_namber << endl;
		cout << "День народження " << m_data << endl;
	}
private:
	string m_name;
	string m_namber;
	string m_data;
};

void savePerson(vector<Person>& Piple) {
	string name, nambers, data;
	cout << "Ведіть імя: " << endl;
	getline(cin, name);
	cout << "Ведіть номер телефону :" << endl;
	getline(cin, nambers);
	cout << "ведіть дату народження :" << endl;
	getline(cin, data);
	Person p(name, nambers, data);
	Piple.push_back(p);
}
void printPiple(const vector<Person>& Piple)
{
	for (const auto& p : Piple) {
		p.print();
		cout << endl;
	}
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	vector<Person>Piple;
	int nam;
	do {
		cout << "Виберіть операцію" << endl;
		cout << "1 вести дані " << endl;
		cout << "2 показати дані" << endl;
		cout << "3 вихід" << endl;
		cin >> nam;
		switch (nam)
		{
		case 1:
		{
			cin.ignore();
			savePerson(Piple);
		}break;
		case 2:
		{
			printPiple(Piple);
		}break;
		case 3:
		{

		}break;
		default:
			break;
		}
	} while (nam < 3);
	return 0;
}