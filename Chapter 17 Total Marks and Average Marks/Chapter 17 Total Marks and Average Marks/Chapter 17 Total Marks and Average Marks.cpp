// Chapter 17 Total Marks and Average Marks
#include <iostream>
using namespace std;

int calculate_total(int mark_1, int mark_2, int mark_3);
int calculate_average(int total, int subjects);

int main()
{
	int user_input_1, user_input_2, user_input_3;

	cout << "Enter Three marks: ";
	cin >> user_input_1 >> user_input_2 >> user_input_3;

	int total_marks = calculate_total(user_input_1, user_input_2, user_input_3);
	int average_marks = calculate_average(total_marks, 3);

	cout << "Total marks: " << total_marks << endl;
	cout << "Average marks: " << average_marks << endl;

	return 0;
}

int calculate_total(int mark_1, int mark_2, int mark_3)
{
	int result = mark_1 + mark_2 + mark_3;

	return result;
}

int calculate_average(int total, int subjects)
{

	int result = total / subjects;

	return result;

}