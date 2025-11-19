// Chapter 17 Square Number
#include <iostream>
using namespace std;

int square_number(int number);

int main()
{
	int user_input;

	cout << "Enter a number: ";
	cin >> user_input;

	int total = square_number(user_input);

	cout << "The square of " << user_input << " is: " << total << endl;
	return 0;
}

int square_number(int number)
{
	int result = number * number;
	return result;
}