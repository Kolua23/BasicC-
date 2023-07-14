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
	cout << "Enter Name";
	cin >> firstName;
	cout << "Enter lost name";
	cin >> lostName;
	cout << "Enter the employee's age";
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
			cout <<  "Enter a new employee name: ";
			string firstName;
			cin >> firstName;
			personn.setFirstName(firstName);
			cout << "Enter a new colleague's last name ";
			string lostName;
			cin >> lostName;
			personn.setLostName(lostName);
			cout << "Enter the new age of the employee";
			int age;
			cin >> age;
			personn.setAge(age);
			safePerson;
			cout << "The data will be saved";
			return;
		}
	}
	cout << "An employee with this id was not found";
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
	cout << "Enter a name";
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
		cout <<  "Search result";
		for (const Person& personn : namesPersons)
		{
			cout << "Id->" << personn.getId() << endl;
			cout << "Name" << personn.getFirstName() << endl;
			cout << "Lost Name" << personn.getLostName() << endl;
			cout << "Age" << personn.getAge() << endl;
		}
	}
	else
	{
		cout << "No employee with this name was found" << endl;
	}
}

void printPerson(const  vector<Person>& persons)
{
	cout << "All employees " << endl;
	for (const Person& personn : persons)
	{
		cout << "Id->" << personn.getId() << endl;
		cout << "Name" << personn.getFirstName() << endl;
		cout << "Lost Name" << personn.getLostName() << endl;
		cout << "Age" << personn.getAge() << endl;
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
		cout << "\t Menu :" << endl;
		cout << "1: Add an employee " << endl;
		cout << "2: Edit data " << endl;
		cout << "3: Delete employee" << endl;
		cout << "4: Search for an employee by last name" << endl;
		cout << "5: Display information abour employees " << endl;
		cout << "6:Exit the program  " << endl;
		cout << " Enter in namer  " << endl;
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
			cout << "Goodbay";
			return 0;
		}
	} while (true);
	return 0;
}