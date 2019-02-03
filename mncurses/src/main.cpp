#include "game.h"

int main(int argc, char **argv)
{
	int init_status = init(); //This function is from game.cpp
	if(init_status == 0) run();
	close();

    return 0;
}
