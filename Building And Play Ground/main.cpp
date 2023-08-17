/*
* GL02Primitive.cpp: Vertex, Primitive and Color
* Draw Simple 2D colored Shapes: quad, triangle and polygon.
*/
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 1.0f); // Light Blue

	glVertex2f(-0.75f, 0.75f);    // x, y
	glVertex2f(0.25f, 0.75f);
	glVertex2f(0.25f, 0.25f);
	glVertex2f(-0.75f, 0.25f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 1.0f); // Purple

	glVertex2f(-0.55f, 0.65f);    // x, y
	glVertex2f(-0.05f, 0.65f);
	glVertex2f(-0.05f, 0.25f);
	glVertex2f(-0.55f, 0.25f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow

	glVertex2f(-0.45f, 0.55f);    // x, y
	glVertex2f(-0.40f, 0.55f);
	glVertex2f(-0.40f, 0.50f);
	glVertex2f(-0.45f, 0.50f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow

	glVertex2f(-0.45f, 0.45f);    // x, y
	glVertex2f(-0.40f, 0.45f);
	glVertex2f(-0.40f, 0.40f);
	glVertex2f(-0.45f, 0.40f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow

	glVertex2f(-0.45f, 0.35f);    // x, y
	glVertex2f(-0.40f, 0.35f);
	glVertex2f(-0.40f, 0.30f);
	glVertex2f(-0.45f, 0.30f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow

	glVertex2f(-0.20f, 0.55f);    // x, y
	glVertex2f(-0.15f, 0.55f);
	glVertex2f(-0.15f, 0.50f);
	glVertex2f(-0.20f, 0.50f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow

	glVertex2f(-0.20f, 0.45f);    // x, y
	glVertex2f(-0.15f, 0.45f);
	glVertex2f(-0.15f, 0.40f);
	glVertex2f(-0.20f, 0.40f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow

	glVertex2f(-0.20f, 0.35f);    // x, y
	glVertex2f(-0.15f, 0.35f);
	glVertex2f(-0.15f, 0.30f);
	glVertex2f(-0.20f, 0.30f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black

	glVertex2f(-0.75f, 0.25f);    // x, y
	glVertex2f(0.25f, 0.25f);
	glVertex2f(0.25f, 0.03f);
	glVertex2f(-0.75f, 0.03f);    // x, y

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-0.75f, 0.0f);
	glVertex2f(0.25f, 0.0f);
	glVertex2f(0.25f, 0.03f);
	glVertex2f(-0.75f, 0.03f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black

	glVertex2f(-0.75f, 0.0f);    // x, y
	glVertex2f(0.25f, 0.0f);
	glVertex2f(0.25f, -0.25f);
	glVertex2f(-0.75f, -0.25f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 1.0f); // Blue

	glVertex2f(-0.75f, -0.75f);    // x, y
	glVertex2f(0.25f, -0.75f);
	glVertex2f(0.25f, -0.25f);
	glVertex2f(-0.75f, -0.25f);    // x, y

	glEnd();

    glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // White

	glVertex2f(-0.75f, -0.25f);    // x, y
	glVertex2f(-0.35f, -0.25f);
	glVertex2f(-0.55f,  -0.50f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // White

	glVertex2f(-0.35f, -0.25f);    // x, y
	glVertex2f(0.0f, -0.25f);
	glVertex2f(-0.175f,  -0.50f);

	glEnd();

	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // White

	glVertex2f(0.0f, -0.25f);    // x, y
	glVertex2f(0.25f, -0.25f);
	glVertex2f(0.125f,  -0.50f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 0.0f); // Green

	glVertex2f(0.25f, 0.75f);    // x, y
	glVertex2f(0.75f, 0.75f);
	glVertex2f(0.75f, -0.75f);
	glVertex2f(0.25f, -0.75f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // white

	glVertex2f(0.35f, 0.35f);    // x, y
	glVertex2f(0.65f, 0.35f);
	glVertex2f(0.65f, -0.35f);
	glVertex2f(0.35f, -0.35f);    // x, y

	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f); // white
	glVertex2f(0.45f, 0.45f);
	glVertex2f(0.45f, 0.35f);
	glVertex2f(0.50f, 0.45f);
	glVertex2f(0.50f, 0.35f);
	glVertex2f(0.55f, 0.45f);
	glVertex2f(0.55f, 0.35f);

	glVertex2f(0.45f, -0.45f);
	glVertex2f(0.45f, -0.35f);
	glVertex2f(0.50f, -0.45f);
	glVertex2f(0.50f, -0.35f);
	glVertex2f(0.55f, -0.45f);
	glVertex2f(0.55f, -0.35f);

	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Building And Play Ground");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
