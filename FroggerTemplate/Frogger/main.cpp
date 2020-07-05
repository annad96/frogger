#include <chrono>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <curses.h>
#include "Terminal.h"
#include "Frog.h"


int main()
{
	Terminal term(40, 20);
	Frog frog;
	frog.draw();
	//return 0;
}
