// Chapter 17 Even or ODD and Positive or Negative
#include <iostream>
using namespace std;

int check_even_or_odd(int number);
int check_positive_or_negative(int number);

int main()
{
	int user_input;

	cout << "Enter a number: ";
	cin >> user_input;

	int total_1 = check_even_or_odd(user_input);
	if (total_1 == 1)
	{
		cout << user_input << " is Even" << endl;
	}
	else
	{
		cout << user_input << " is Odd" << endl;
	}

	int total_2 = check_positive_or_negative(user_input);
	if (total_2 == 1)
	{
		cout << user_input <<" is Positive" << endl;
	}
	else
	{
		cout << user_input <<" is Negative" << endl;
	}

	return 0;
}

int check_even_or_odd(int number)
{
	int result = number;

	if (result % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int check_positive_or_negative(int number)
{
	int result = number;

	if (result >= 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}