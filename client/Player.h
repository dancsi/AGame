#pragma once
#include "object.h"
#include "Command.h"

class Player :
	public Object
{
public:
	Player(double, double, double, double);
	void applyCommand(Command, double);

private:
	double vx, vy;
	double ax, ay;
};

