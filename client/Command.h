#pragma once

class Command
{
public:
	Command();
	Command(int, bool, bool, bool, bool);

	int getID() { return id; }
	bool isUp() { return up; }
	bool isDown() { return down; }
	bool isLeft() { return left; }
	bool isRight() { return right; }

private:
	int id;
	bool up, down, left, right;
};

