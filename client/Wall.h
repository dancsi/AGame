#pragma once
#include "object.h"

class Wall :
	public Object
{
public:
	Wall(double, double, double, double, bool);
	bool isDangerous() const { return danger; }

private:
	bool danger;
};

