#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int totalSeconds=time(0);
	int currentSecond = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	int currentMinute = totalMinutes % 60; 
	int totalHours = totalMinutes / 60;
	int currentHours = totalHours % 24;
	
	
	cout << "Current time is " << currentHours << ":" 
		 << currentMinute << ":" << currentSecond << " GMT" << endl;

	return 0;
}



