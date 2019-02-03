#include <string>
#include <ncurses.h>

#include "game.h"

WINDOW *wnd;

int init()
{
    wnd = initscr();
	cbreak();
	noecho();
	clear();
	refresh();

//	attron(A_BOLD);
//		box(wnd, 0, 0);
//	attroff(A_BOLD);
	
	start_color();

	init_pair(1,COLOR_BLACK, COLOR_CYAN);
	wbkgd(wnd, COLOR_PAIR(1));

	return 0;
}
void run()
{
   	move(5,5);
	std::string text = "Hello world!";
	for(int i=0; i<text.size(); i++)
	{
	    addch(text[i]);
		addch(' ');
	}
	refresh();
	while(1);
}
void close()
{
    endwin();
}
