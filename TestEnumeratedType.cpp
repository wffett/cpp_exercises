#include <iostream>
using namespace std;

void TestEnumeratedType()
{
	enum Day {MONDAY =1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY} day;
	cout << "Enter a day (1 for Monday, 2 for Tuesday, etc): ";
	int dayNumber;
	cin >> dayNumber;
	switch(dayNumber)
	{
		case MONDAY:
			cout << "Play soccer" << endl;
			break;
		case TUESDAY:
			cout << "Piano lesson" << endl;
			break;
		case WEDNESDAY:
			cout << "Math team" << endl;
			break;
		default:
			cout << "Go houme" << endl;
	}
}
