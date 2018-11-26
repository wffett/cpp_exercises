#include <iostream>
using namespace std;
int main()
{
	//======================
	short int a;
	int b;
	char c;
	double d;
	float e;
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(e) << endl;
	//========================
	double x=1.0,y=5.0,z=x--+(++y);
	cout << x << y << z << endl;
	//========================
	int i =10;
	int newNum=10*i++;
	cout << newNum << endl;






	return 0;
}
