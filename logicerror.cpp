#include <iostream>
using namespace std;

int main()
{
	int num1 = 3;
	int num2 = 3;
	num2 += num1 + num2;
	// num2 = num2 + (num1 + num2)
	cout << " number2 is " << num2 << endl;

	return 0;
}
