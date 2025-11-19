// Chapter 17 Sum and Product of Two Numbers
#include <iostream>
using namespace std;

int find_sum(int first_number, int second_number);
int find_product(int first_number, int second_number);

int main()
{
	int user_input_1, user_input_2;

	cout << "Enter two numbers: ";
	cin >> user_input_1 >> user_input_2;

	int total_sum = find_sum(user_input_1, user_input_2);
	int total_product = find_product(user_input_1, user_input_2);

	cout << "Total Sum: " << total_sum << endl;
	cout << "Total Product: " << total_product << endl;

	return 0;
}

int find_sum(int first_number, int second_number)
{
	int result = first_number + second_number;

	return result;
}

int find_product(int first_number, int second_number)
{
	int result = first_number * second_number;

	return result;
}