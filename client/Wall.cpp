#include "Wall.h"


Wall::Wall(double xx, double yy, double ww, double hh, bool d = false)
{
	type = WALL;
	x = xx;
	y = yy;
	w = ww;
	h = hh;
	danger = d;
}

