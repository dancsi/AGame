#include <iostream>
#include <cstdio>

#include "graphics/graphics.h"


int main(int argc, char* argv[])
{
	// TODO: poceti sa projektom
	Graphics::initialize(argc, argv);
	while(1)
	{
		glutMainLoopEvent();
		std::cerr<<"Ovo radi!\n";
	}
	return 0;
}

