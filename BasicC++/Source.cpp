#include<iostream>
#include<Windows.h>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

class Person
{
private:
	int m_id;
	string m_firstName;
	string m_lostName;
	int m_age;
public:
	Person(int id, string firstName, string lostName, int age) :
		m_id(id), m_firstName(firstName), m_lostName(lostName), m_age(age) {}

	int getId()const { return m_id; };
	string getFirstName()const { return m_firstName; }
	string getLostName()const { return m_lostName; }
	int getAge()const { return m_age; }

	void setId(int id)
	{
		this->m_id = id;
	}
	void setFirstName(const string firstName)
	{
		this->m_firstName = firstName;
	}
	void setLostName(const  string lostName)
	{
		this->m_lostName = lostName;
	}
	void  setAge(int age)
	{
		this->m_age = age;
	}
};

const string PERSON_FILE = "person.txt";

void loadPerson(vector<Person>& persons)
{
	ifstream file(PERSON_FILE);
	if (file.is_open())
	{
		int id;
		string firstName;
		string lostName;
		int age;
		while (file >> id >> firstName >> lostName >> age)
		{
			Person personn(id, firstName, lostName, age);
			persons.push_back(personn);
		}
		file.close();
	}
}

void safePerson(vector<Person>& persons)
{
	ofstream file(PERSON_FILE);
	for (const Person& personn : persons) {
		if (file.is_open())
		{
			file << personn.getFirstName() << personn.getLostName() << personn.getAge();
		}
		file.close();
	}
}

void addPerson(vector<Person>& persons)
{
	int id;
	string firstName;
	string lostName;
	int age;
	cout << "id";
	cin >> id;
	cout << "������ ��'� �����������";
	cin >> firstName;
	cout << "������ ������� �����������";
	cin >> lostName;
	cout << "������ �� �����������";
	cin >> age;
	Person personn(id, firstName, lostName, age);
	persons.push_back(personn);
	cout << "��� ���������";
}

void editPerson(vector<Person>& persons)
{
	int id;
	cout << "id ->";
	cin >> id;
	for (Person& personn : persons)
	{
		if (personn.getId() == id)
		{
			cout << "������ ����  �'�� �����������:  ";
			string firstName;
			cin >> firstName;
			personn.setFirstName(firstName);
			cout << "������ ���� ������� ���������� ";
			string lostName;
			cin >> lostName;
			personn.setLostName(lostName);
			cout << "������ ����� �� �����������";
			int age;
			cin >> age;
			personn.setAge(age);
			safePerson;
			cout << "��� ��������� ";
			return;
		}
	}
	cout << "���������� � ����� id �� ���������";
}

void deletePerson(vector<Person>& persons)
{
	int id;
	cout << "id->";
	cin >> id;
	for (auto i = persons.begin(); i != persons.end(); i++)
	{
		if (i->getId() == id)
			persons.erase(i);
		safePerson(persons);
		cout << "delete persons";
		return;

	}
}

void namePerson(vector<Person>& persons)
{
	string firstName;
	cout << "������ �'��";
	cin >> firstName;
	vector<Person> namesPersons;
	for (const Person& personn : persons)
	{
		if (personn.getFirstName() == firstName)
		{
			namesPersons.push_back(personn);
		}
	}
	if (!namesPersons.empty()) {
		cout << "��������� ������ ";
		for (const Person& personn : namesPersons)
		{
			cout << "Id->" << personn.getId() << endl;
			cout << "�'��" << personn.getFirstName() << endl;
			cout << "�������" << personn.getLostName() << endl;
			cout << "³�" << personn.getAge() << endl;
		}
	}
	else
	{
		cout << "���������� � ����� ������ �� ���������" << endl;
	}
}

void printPerson(const  vector<Person>& persons)
{
	cout << "�� ����������� " << endl;
	for (const Person& personn : persons)
	{
		cout << "Id->" << personn.getId() << endl;
		cout << "�'��" << personn.getFirstName() << endl;
		cout << "�������" << personn.getLostName() << endl;
		cout << "³�" << personn.getAge() << endl;
	}
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	vector<Person>persons;

	int namber;
	do
	{
		cout << "\t ���� :" << endl;
		cout << "1: �������� ����������� " << endl;
		cout << "2: ����������� ��� " << endl;
		cout << "3: �������� �����������" << endl;
		cout << "4: ����� ����������� �� �������� " << endl;
		cout << "5: ������� ���������� ��� ����������� " << endl;
		cout << "6: ����� � �������� " << endl;
		cout << "������ ����� " << endl;
		cin >> namber;

		switch (namber)
		{
		case 1:
			cin.ignore();
			addPerson(persons);
			break;
		case 2:
			editPerson(persons);
		case  3:
			deletePerson(persons);
			break;
		case 4:
			namePerson(persons);
		case 5:
			printPerson(persons);
			break;
		case 6:
			cout << "�� ���������";
			return 0;
		}
	} while (true);
}