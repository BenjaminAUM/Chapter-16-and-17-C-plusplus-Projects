// Chapter 16 Library Late Fee Calculator
#include <iostream>
using namespace std;

int total_fee = 0;

int main()
{
	int total_books;
	int days_late;

	cout << "How many books? ";
	cin >> total_books;

	for (int book = 0; book <= total_books; book++)
	{
		cout << "Days late: ";
		cin >> days_late;

		if (days_late >= 1 && days_late <= 5)
		{
			cout << "$1 per day";
			total_fee = (total_fee + 1);
		}
		else if (days_late >= 6 && days_late <= 10)
		{
			cout << "$2 per day";
			total_fee = (total_fee + 2);
		}
		else if (days_late > 10)
		{
			cout << "$5 per day";
			total_fee = (total_fee + 5);
		}
		else
		{
			cout << "No fee";
		}
		cout << endl;
	}
	cout << "Total fee :" << total_fee << endl;
	return 0;
}