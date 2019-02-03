#include <iostream>
using namespace std;
void test()
{
	int currVal = 0;
	int val = 0;
	if(cin >> currVal)
	{
		int cnt = 1;
		while(cin >> val)
		{
			if(val == currVal)
				++cnt;
			else
			{
				cout << currVal << " occurs " << cnt << " times " << endl;
				currVal = val;
				cnt = 1;
			}

		}
	}
}
