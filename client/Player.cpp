#include "Player.h"


Player::Player(double ww, double hh, double xx, double yy)
{
	type = PLAYER;
	w = ww;
	h = hh;
	x = xx;
	y = yy;

	vx = vy = 0;
	ax = ay = 0;
}

void Player::applyCommand(Command c, double accel = 1.0)
{
	ax = (c.isRight() ? accel : 0) - (c.isLeft() ? accel : 0);
	ay = (c.isDown() ? accel : 0) - (c.isUp() ? accel : 0);
}