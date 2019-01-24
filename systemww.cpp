#include <stdlib.h>
#include <string>
#include <iostream>

int main()
{
	string com[] = {"ls -al","df"};
	system(com[0]);
	system(com[1]);
	return 0;
}
