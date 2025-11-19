// Chapter 16 7-day step tracker
#include <iostream>
using namespace std;

int total_steps = 0;

int main()
{
	for (int day = 1; day <= 7; day++)
	{
		int steps = 0;

		cout << "How many steps day " << day << ":";
		cin >> steps;

		total_steps = total_steps + steps;
	}
	float average = (total_steps / 7);

	cout << "Total steps taken in a week: " << total_steps << endl;
	cout << "Average steps taken a day: " << average << endl;
	return 0;
}