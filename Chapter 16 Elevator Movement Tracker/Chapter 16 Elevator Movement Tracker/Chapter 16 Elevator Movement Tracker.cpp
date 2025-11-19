// Chapter 16 Elevator Movement Tracker
#include <iostream>
using namespace std;

int building_min = -2;
int building_max = 10;
int min_floor = 0, max_floor = 0, invalid_moves = 0;

int main()
{
	int current_floor = 0;
	char user_input;

	do
	{
		cout << "Enter a command (U, D, S, Q): ";     //User Input
		cin >> user_input;

		switch (user_input)
		{
		case 'u':
		case 'U':
		{
			if (current_floor >= building_max)
			{
				cout << "invalid move" << endl;
				invalid_moves = invalid_moves + 1;
			}
			else
			{
				cout << "Going up 1 floor" << endl;
				current_floor = current_floor + 1;
				max_floor = max_floor + 1;
				cout << "current floor: " << current_floor << endl;
			}
			break;
		}
		case 'd':
		case 'D':
		{
			if (current_floor <= building_min)
			{
				cout << "Invalid move" << endl;
				invalid_moves = invalid_moves + 1;
			}
			else
			{
				cout << "going down 1 floor" << endl;
				current_floor = current_floor - 1;
				min_floor = min_floor + 1;
				cout << "current floor: " << current_floor << endl;
			}
			break;
		}
		case 's':
		case 'S':
		{
			//do nothing
			break;
		}
		default:     //Prints if user does not input 
		{
			cout << "Invalid command" << endl;
			break;
		}
		}
		
	} while (user_input != 'q' && user_input != 'Q');
	cout << "Max floor: " << max_floor << endl;
	cout << "Min floor: " << min_floor << endl;
	cout << "invalid moves: " << invalid_moves << endl;
	cout << "Goodbye" << endl;
	return 0;
}