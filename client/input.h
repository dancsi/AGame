#pragma once

#include <cstdio>

class InputBuffer
{
public:
	InputBuffer();
	~InputBuffer();
	bool empty();
	char getNext();
};

