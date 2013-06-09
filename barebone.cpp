#include <iostream>
#include <GL/glut.h>

#include "barebone.h"
#include "glut/glutinit.h"

using namespace std;

void Init(int argc, char** argv) {
	bcGlutInit(argc, argv);

	glutDisplayFunc(Draw);
	glutTimerFunc(10, Update, 0);
	glutIdleFunc(Draw);

	glutMainLoop();
}

void Update(int value) {

}

void Draw() {

}
