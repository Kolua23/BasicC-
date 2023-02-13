#include <iostream>
#include <string>
#include <string.h>
using namespace std;
struct full_name {
public:
    string first_name;
    string surname;
    void Output()
    {
        cout << "First Name: " << first_name << endl;
        cout << "Surname: " << surname << endl;
    }
    void Input()
    {
        cout << "First Name: ";
        getline(cin, first_name);
        cout << "Surname: ";
        getline(cin, surname);
    }
};
struct date_of_birthday {
private:
    short CheckDate(short end_value, string text)
    {
        short value;
        do {
            cout << "Input " << text << "->";
            cin >> value;
            if (value < 0 || value>end_value)
            {
                cout << "Erorr! Inccorect value!" << endl;
            }
            else {
                break;
            }
        } while (true);
        return value;
    }
public:
    short d;
    short m;
    short y;
    string full_m;
    void Output()
    {
        cout << "Date of birthday: " << d << "." << m << " (" << full_m << ")" << "." << y << endl;
    }
    void Input()
    {
        d = CheckDate(31, "day");
        m = CheckDate(12, "month");
        y = CheckDate(2022, "year");
        switch (m)
        {
        case 1: {full_m = "January"; }break;
        case 2: {full_m = "February"; }break;
        case 3: {full_m = "March"; }break;
        case 4: {full_m = "April"; }break;
        case 5: {full_m = "Mai"; }break;
        case 6: {full_m = "June"; }break;
        case 7: {full_m = "July"; }break;
        case 8: {full_m = "August"; }break;
        case 9: {full_m = "September"; }break;
        case 10: {full_m = "October"; }break;
        case 11: {full_m = "November"; }break;
        case 12: {full_m = "December"; }break;
        }
    }
};
struct adress {
private:
    string region;
    string city;
    string street;
    string apt;
public:
    void Output()
    {
        cout << "Region: " << region << endl;
        cout << "City: " << city << endl;
        cout << "Street: " << street << endl;
        cout << "Apt: " << apt << endl;
    }
    void Input()
    {
        cin.ignore();
        cout << "Region: ";
        getline(cin, region);
        cout << "City: ";
        getline(cin, city);
        cout << "Street: ";
        getline(cin, street);
        cout << "Apt: ";
        getline(cin, apt);
    }
};
struct Person {
private:
    full_name fullname_;
    uint32_t age;
    date_of_birthday date_of_birthday_;
    adress adress_;
public:
    void Output()
    {
        fullname_.Output();
        cout << "Age: " << age << endl;
        date_of_birthday_.Output();
        adress_.Output();
    }
    void Input()
    {
        fullname_.Input();
        cout << "Input age: ";
        cin >> age;
        cin.ignore();
        date_of_birthday_.Input();
        adress_.Input();
    }
};
int main()
{
    Person* person = new Person;
    person->Input();
    system("cls");
    person->Output();
    return 0;
}