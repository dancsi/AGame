#include <iostream>
#include <cstdio>

#include "graphics/graphics.h"
#include "input.h"

int main(int argc, char* argv[])
{
	Graphics::initialize(argc, argv);
	InputBuffer input;

	while(1)
	{
		glutMainLoopEvent();
		
		while(!input.empty())
		{
			char c = input.getNext();
			printf("%c", c);
		}
	}
	return 0;
}

