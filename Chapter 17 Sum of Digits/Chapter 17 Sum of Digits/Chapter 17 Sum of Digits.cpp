// Chapter 17 Sum of Digits
#include <iostream>
using namespace std;

int sum_of_digits(int number);

int main()
{
	int user_input;

	cout << "Enter a number: ";
	cin >> user_input;

	int total_sum = sum_of_digits(user_input);

	cout << "Sum of digits: " << total_sum << endl;
	return 0;
}

int sum_of_digits(int number)
{
	int sum = 0;
	while (number > 0)
	{
		int user_digit = number % 10;
		sum += user_digit;
		number = number / 10;

	}
	int total_sum = sum;
	return total_sum;
}