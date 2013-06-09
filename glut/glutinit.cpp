#include <iostream>
#include <GL/glut.h>

#include "../properties/properties.h"

void bcGlutInit(int argc, char** argv) {
	glutInit(&argc, argv);

	ClientScreenWidth = glutGet(GLUT_SCREEN_WIDTH );
	ClientScreenHeight = glutGet(GLUT_SCREEN_HEIGHT );

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH | GLUT_MULTISAMPLE);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(ClientScreenWidth, ClientScreenHeight);
	glutCreateWindow(argv[0]);
	glutSetWindowTitle(WindowTitle);

	if (StartFullScreen) glutFullScreen();
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glViewport(0, 0, ClientScreenWidth, ClientScreenHeight);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double) ClientScreenWidth / (double) ClientScreenHeight, 1.0, 200.0);
}
