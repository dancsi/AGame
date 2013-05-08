#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <GL\glew.h>
#include <GL\freeglut.h>
#include <cstdio>
#include <cstdlib>

namespace graphics
{
	using namespace std;
	#define WINDOW_TITLE_PREFIX "Battle of Squares"

	void initialize(int, char*[]);
	void initWindow(int, char*[]);
	void resizeFunction(int, int);
	void renderFunction(void);
}
#endif // GRAPHICS_H