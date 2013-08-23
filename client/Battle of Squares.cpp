#include <iostream>
#include <cstdio>

#include "graphics/graphics.h"
#include "input.h"
#include "Configuration.h"

int main(int argc, char* argv[])
{
	// iskomentovano radi testiranja
	/*Graphics::initialize(argc, argv);
	InputBuffer input;

	while(1)
	{
		glutMainLoopEvent();
		
		while(!input.empty())
		{
			char c = input.getNext();
			printf("%c", c);
		}
	}*/

	Configuration conf("..\\config.txt");
	for(int i = 0; i < conf.size(); i++)
		std::cout << conf[i].getX();
	while(1) ;

	return 0;
}

