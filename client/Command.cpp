#include "Command.h"


Command::Command()
{
	id = 0;
	left = right = up = down = false;
}

Command::Command(int i, bool u, bool d, bool l, bool r)
{
	id = i;
	up = u;
	down = d;
	left = l;
	right = r;
}