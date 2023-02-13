#include<iostream>
using namespace std;

int main()
{
	int namber;
	cin >> namber;
	switch (namber)
	{
	case 1:
	{
		cout << "“Hello, World!”" << endl;
		cout << "/Bjarne Stroustrup/" << endl;

	}break;
	case 2:
	{
		cout << "Hello worsl!" << endl;
		cout << "\\Dennis Ritchi\\" << endl;
	}break;
	case 3:
	{
		cout << "To be, or not to be" << endl;
		cout << " that is the question" << endl;
		cout << "Whether 'tis nobler in the mind to suffer" << endl;
		cout << "The slings and arrows of outrageous fortune" << endl;
		cout << "Or to take arms against a sea of troubles" << endl;
		cout << "And by opposing end them? " << endl;
		cout << "William Shakespeare" << endl;
	}break;
	default:
		break;
	}
	return 0;
}