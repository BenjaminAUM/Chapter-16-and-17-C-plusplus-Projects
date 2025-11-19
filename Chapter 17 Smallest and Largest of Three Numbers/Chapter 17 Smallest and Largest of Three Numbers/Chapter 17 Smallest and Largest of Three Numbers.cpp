// Chapter 17 Smallest and Largest of Three Numbers
#include <iostream>
using namespace std;

int find_smallest(int first_number, int second_number, int third_number);
int find_largest(int first_number, int second_number, int third_number);

int main()
{
	int user_input_1, user_input_2, user_input_3;

	cout << "Enter three sets of numbers: ";
	cin >> user_input_1 >> user_input_2 >> user_input_3;

	int smallest = find_smallest(user_input_1, user_input_2, user_input_3);
	int largest = find_largest(user_input_1, user_input_2, user_input_3);

	cout << "The smallest number is: " << smallest << endl;
	cout << "The largest number is: " << largest << endl;

	return 0;
}

int find_smallest(int first_number, int second_number, int third_number)
{
	int number_1 = first_number;
	int number_2 = second_number;
	int number_3 = third_number;
	if (first_number < second_number && first_number < third_number)
	{
		return number_1;
	}
	else if (first_number < second_number && first_number > third_number)
	{
		return number_3;
	}
	else
	{
		return number_2;
	}
}

int find_largest(int first_number, int second_number, int third_number)
{
	int number_1 = first_number;
	int number_2 = second_number;
	int number_3 = third_number;

	if (first_number > second_number && first_number > third_number)
	{
		return number_1;
	}
	else if (first_number > second_number || first_number < third_number)
	{
		return number_3;
	}
	else
	{
		return number_2;
	}
}