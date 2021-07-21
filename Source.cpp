#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

string names[] = { "Sarah Smith", "Bob Williams", "Jennifer Thompson" };
string numbers[] = { "555-1234", "555-4321", "555-5555" };

int length = sizeof(names) / sizeof(string);

void lookupNumber();
void changeNumber();

int main()
{
	char option; 
	do
	{
		cout << "'1' for looking up your given name's phone number!" << endl;
		cout << "'2' for putting the new number!" << endl;
		cout << "'q' for quitting the program!" << endl;
		cin >> option;
		cin.ignore();
		option = tolower(option);

		switch (option)
		{
		case '1':
			lookupNumber();
			break;
		case '2':
			changeNumber();
			break;
		default:
			break;
		}
	} while (option != 'q');
	return 0;
}

void lookupNumber()
{
	string givenName;
	cout << "Enter the name whose number you want to know: ";
	getline(cin, givenName);
	for (int i = 0; i < length; i++)
	{
		if (givenName == names[i])
		{
			cout << "The phone number of " << givenName << " is " << numbers[i] << " \n\n";
			return;
		}
			
	}
	cout << "The name doesn't exist!\n\n";
	
}

void changeNumber()
{
	string name;
	cout << "Enter a person's name whose number you want to change: ";
	getline(cin, name);
	for (int i = 0; i < length; i++)
	{
		if (name == names[i])
		{
			cout << "Enter a new number: ";
			cin >> numbers[i];
			cout << "\n";
			return;
		}
	}
	cout << "The name doesn't exist!\n\n";
}