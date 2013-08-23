#include "Vector.h"


Vector::Vector()
{
	x = y = 0;
}

Vector::Vector(double xx, double yy)
{
	x = xx;
	y = yy;
}

double Vector::getX()
{
	return x;
}

double Vector::getY()
{
	return y;
}

double Vector::lengthSqr()
{
	return x * x + y * y;
}

double Vector::length()
{
	return sqrt(lengthSqr());
}