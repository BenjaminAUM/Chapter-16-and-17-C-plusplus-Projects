// Chapter 16 Vowel or Consonant
#include <iostream>
using namespace std;

int main()
{

	char user_input;
	cout << "Enter only letters please: ";
	cin >> user_input;

	if (user_input >= 'a' && user_input <= 'z')
	{
		switch (user_input)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout << "Vowel" << endl;
			break;
		default:
			cout << "Consonant" << endl;
			break;
		}
	}
	else
	{
		cout << "Invalid input" << endl;
	}
	return 0;
}