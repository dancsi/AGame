// NEDOVRSENO (moguce nepotrebno)
#pragma once

#include <cmath>

class Vector
{
public:
	Vector();
	Vector(double, double);
	
	double getX();
	double getY();
	double lengthSqr();
	double length();

//	Vector operator+(Vector);
//	Vector operator-(Vector);
//	double operator*(Vector);

private:
	double x, y;
};
