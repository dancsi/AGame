#include "Object.h"

Vector Vector::operator+(Vector b)
{
    this->x+=b.x;
    this->y+=b.y;
    return *this;
}

Square::Square()
{
    Type=S;
}

Wall::Wall()
{
    Type=W;
}
