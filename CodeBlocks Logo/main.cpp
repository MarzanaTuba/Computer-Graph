#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // white background
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(.5);

	//codeblocks
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.8f, 0.4f);
	glVertex2f(-0.6f, 0.4f);
	glVertex2f(-0.6f, 0.2f);
	glVertex2f(-0.8f, 0.2f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.6f, 0.4f);
	glVertex2f(-0.48f, 0.2f);
	glVertex2f(-0.48f, 0.0f);
	glVertex2f(-0.6f, 0.2f);
	glEnd();


    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.8f, 0.2f);
	glVertex2f(-0.6f, 0.2f);
	glVertex2f(-0.48f, 0.0f);
	glVertex2f(-0.6f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f); // Green
	glVertex2f(-0.3f, 0.4f);
	glVertex2f(-0.1f, 0.4f);
	glVertex2f(-0.1f, 0.2f);
	glVertex2f(-0.3f, 0.2f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f); // Green
	glVertex2f(-0.3f, 0.4f);
	glVertex2f(-0.3f, 0.2f);
	glVertex2f(-0.42f, 0.0f);
	glVertex2f(-0.42f, 0.2f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f); // Green
	glVertex2f(-0.3f, 0.2f);
	glVertex2f(-0.1f, 0.2f);
	glVertex2f(-0.32f, 0.0f);
	glVertex2f(-0.42f, 0.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-0.8f, -0.2f);
	glVertex2f(-0.6f, -0.2f);
	glVertex2f(-0.6f, -0.4f);
	glVertex2f(-0.8f, -0.4f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); // yellow
	glVertex2f(-0.8f, -0.2f);
	glVertex2f(-0.6f, -0.2f);
	glVertex2f(-0.48f, -0.1f);
	glVertex2f(-0.6f, -0.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f); // yellow
	glVertex2f(-0.6f, -0.2f);
	glVertex2f(-0.48f, -0.1f);
	glVertex2f(-0.48f, -0.2f);
	glVertex2f(-0.6f, -0.4f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f); // Blue
	glVertex2f(-0.3f, -0.2f);
	glVertex2f(-0.1f, -0.2f);
	glVertex2f(-0.1f, -0.4f);
	glVertex2f(-0.3f, -0.4f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f); // Blue
	glVertex2f(-0.3f, -0.2f);
	glVertex2f(-0.3f, -0.4f);
	glVertex2f(-0.42f, -0.2f);
	glVertex2f(-0.42f, -0.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f); // Blue
	glVertex2f(-0.3f, -0.2f);
	glVertex2f(-0.1f, -0.2f);
	glVertex2f(-0.3f, -0.1f);
	glVertex2f(-0.42f, -0.1f);
    glEnd();

glFlush();  // Render now


}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("CodeBlocks Logo");
	glutInitWindowSize(520, 320);
	glutDisplayFunc(display);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
