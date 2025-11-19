// Chapter 17 Perimeter and Area of a Rectangle
#include <iostream>
using namespace std;

int calculate_perimeter(int length, int width);
int calculate_area(int length, int width);

int main()
{
	int user_input_1, user_input_2;

	cout << "Enter Length and Width of the rectangle: ";
	cin >> user_input_1 >> user_input_2;

	int perimeter_total = calculate_perimeter(user_input_1, user_input_2);
	int perimeter_average = calculate_area(user_input_1, user_input_2);

	cout << "Perimeter = " << perimeter_total << endl;
	cout << "Area = " << perimeter_average << endl;
	return 0;
}

int calculate_perimeter(int length, int width)
{
	int result = (length + width) * 2;

	return result;
}

int calculate_area(int length , int width)
{
	int result = length * width;

	return result;
}