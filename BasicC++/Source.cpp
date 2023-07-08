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
	cout << "Введіть ім'я співробітника";
	cin >> firstName;
	cout << "Введіть прізвище співробітника";
	cin >> lostName;
	cout << "Введіть вік співробітника";
	cin >> age;
	Person personn(id, firstName, lostName, age);
	persons.push_back(personn);
	cout << "Дані збережино";
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
			cout << "Введіть нове  і'мя співробітника:  ";
			string firstName;
			cin >> firstName;
			personn.setFirstName(firstName);
			cout << "Введіть нове прізвище співробіника ";
			string lostName;
			cin >> lostName;
			personn.setLostName(lostName);
			cout << "Введіть новий вік співробітника";
			int age;
			cin >> age;
			personn.setAge(age);
			safePerson;
			cout << "Дані збережино ";
			return;
		}
	}
	cout << "Співробітник з таким id не знайдений";
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
	cout << "Введіть і'мя";
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
		cout << "Результат пошуку ";
		for (const Person& personn : namesPersons)
		{
			cout << "Id->" << personn.getId() << endl;
			cout << "І'мя" << personn.getFirstName() << endl;
			cout << "Прізвище" << personn.getLostName() << endl;
			cout << "Вік" << personn.getAge() << endl;
		}
	}
	else
	{
		cout << "Співробітник з таким іменем не знайдений" << endl;
	}
}

void printPerson(const  vector<Person>& persons)
{
	cout << "Всі співробітники " << endl;
	for (const Person& personn : persons)
	{
		cout << "Id->" << personn.getId() << endl;
		cout << "І'мя" << personn.getFirstName() << endl;
		cout << "Прізвище" << personn.getLostName() << endl;
		cout << "Вік" << personn.getAge() << endl;
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
		cout << "\t Меню :" << endl;
		cout << "1: Добавити співробітника " << endl;
		cout << "2: Редактувати дані " << endl;
		cout << "3: Видалити співробітника" << endl;
		cout << "4: Пошук співробітника за прізвищем " << endl;
		cout << "5: Вивести інформацію про співробітників " << endl;
		cout << "6: Вийти з програми " << endl;
		cout << "Введіть номер " << endl;
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
			cout << "До побачення";
			return 0;
		}
	} while (true);
}