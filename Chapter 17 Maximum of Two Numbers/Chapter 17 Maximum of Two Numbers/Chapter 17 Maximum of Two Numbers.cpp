// Chapter 17 Maximum of Two Numbers
#include <iostream>
using namespace std;

int max_of_two(int number_1, int number_2);

int main()
{
	int user_input_1, user_input_2;

	cout << "Enter two integers: ";
	cin >> user_input_1 >> user_input_2;

	int highest = max_of_two(user_input_1, user_input_2);

	cout << "The largest number is: " << highest << endl;
	return 0;
}

int max_of_two(int number_1, int number_2)
{
	if (number_1 > number_2)
	{
		return number_1;
	}
	else
	{
		return number_2;
	}
}