#pragma once

class Object
{
public:
	enum ObjectType { UNDEFINED, WALL, PLAYER } ; 

	Object();

	double getX() const { return x; } ;
	double getY() const { return y; } ;
	double getW() const { return w; } ;
	double getH() const { return h; } ;
	ObjectType getType() { return type; }

protected:
	ObjectType type;
	double x, y;
	double w, h;
};
