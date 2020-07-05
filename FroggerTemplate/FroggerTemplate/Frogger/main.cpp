#include <chrono>
#include "Terminal.h"
#include "Frog.h"

int main()
{
	Terminal term(40, 20);
	Frog frog();
	frog().draw(term);
	return 0;
}
