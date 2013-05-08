#include "stdafx.h"
#include "graphics.h"

namespace Graphics
{ 
	
	int currentWidth = 800,
		currentHeight = 600,
		windowHandle = 0;

	void initialize(int argc, char* argv[])
	{
		initWindow(argc, argv);

		glewExperimental = GL_TRUE;

		glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	}

	void initWindow(int argc, char* argv[])
	{
		glutInit(&argc, argv);

		glutInitContextVersion(4, 0);
		glutInitContextFlags(GLUT_FORWARD_COMPATIBLE);
		glutInitContextProfile(GLUT_CORE_PROFILE);

		glutSetOption(
			GLUT_ACTION_ON_WINDOW_CLOSE,
			GLUT_ACTION_GLUTMAINLOOP_RETURNS
		);

		glutInitWindowSize(currentWidth, currentHeight);

		glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);

		windowHandle = glutCreateWindow(WINDOW_TITLE_PREFIX);

		if(windowHandle < 1)
		{
			fprintf(stderr, "ERROR: Could not create a new rendering window.\n");
			exit(EXIT_FAILURE);
		}

		glutReshapeFunc(resizeFunction);
		glutDisplayFunc(renderFunction);
	}

	void resizeFunction(int Width, int Height)
	{
		currentWidth = Width;
		currentHeight = Height;
		glViewport(0, 0, currentWidth, currentHeight);
	}

	void renderFunction()
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		glutSwapBuffers();
		glutPostRedisplay();
	}

}