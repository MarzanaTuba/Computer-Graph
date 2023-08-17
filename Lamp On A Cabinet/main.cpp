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


		// Draw a Red 1x1 Square centered at origin
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad (1)
	glColor3f(1.0f, 0.0f, 0.0f); // Red

	glVertex2f(-0.80f, 0.42f);    // x, y
	glVertex2f(-0.80f, 0.12f);
	glVertex2f(0.80f, 0.12f);    // x, y
	glVertex2f(0.80f, 0.42f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad (1.1)
	glColor3f(0.0f, 0.0f, 0.0f); // Black

	glVertex2f(-0.40f, 0.42);    // x, y
	glVertex2f(0.40f, 0.42f);
	glVertex2f(0.40f, 0.50f);    // x, y
	glVertex2f(-0.40f, 0.50f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad (1.2)
	glColor3f(0.0f, 0.0f, 0.0f); // Black

	glVertex2f(0.30f, 0.50f);    // x, y
	glVertex2f(-0.30f, 0.50f);
	glVertex2f(-0.30f, 0.56);    // x, y
	glVertex2f(0.30f, 0.56f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad (1.3)
	glColor3f(0.0f, 0.0f, 0.0f); // Black

	glVertex2f(-0.05f, 0.56);    // x, y
	glVertex2f(0.05f, 0.56f);
	glVertex2f(0.05f, 0.75f);    // x, y
	glVertex2f(-0.05f, 0.75f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad (1.4)
	glColor3f(0.0f, 0.0f, 0.0f); // Black

	glVertex2f(-0.08f, 0.60);    // x, y
	glVertex2f(0.08f, 0.60f);
	glVertex2f(0.08f, 0.65f);    // x, y
	glVertex2f(-0.08f, 0.65f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad (1.5)
	glColor3ub(232, 133, 20);//rgb color picker

	glVertex2f(-0.35f, 0.75f);
	glVertex2f(0.35f, 0.75f);    // x, y
	glVertex2f(0.15f, 1.00f);    // x, y
	glVertex2f(-0.15f, 1.00f);

	glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad (2)
	glColor3f(1.0f, 0.0f, 0.0f); // Red

	glVertex2f(-0.80f, 0.10f);    // x, y
	glVertex2f(-0.80f, -0.20f);
	glVertex2f(0.80f, -0.20f);    // x, y
	glVertex2f(0.80f, 0.10f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad (3)
	glColor3f(1.0f, 0.0f, 0.0f); // Red

	glVertex2f(-0.80f, -0.22f);    // x, y
	glVertex2f(-0.80f, -0.80f);
	glVertex2f(-0.02f, -0.80f);    // x, y
	glVertex2f(-0.02f, -0.22f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad (4)
	glColor3f(1.0f, 0.0f, 0.0f); // Red

	glVertex2f(0.80f, -0.22f);    // x, y
	glVertex2f(0.80f, -0.80f);
	glVertex2f(0.02f, -0.80f);    // x, y
	glVertex2f(0.02f, -0.22f);

	glEnd();

	glLineWidth(5.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 1.0f); // Blue

	glVertex2f(-0.30f, 0.30);    // x, y
	glVertex2f(0.30f, 0.30f);    // x, y

	glVertex2f(-0.30f, 0.00f);    // x, y
	glVertex2f(0.30f, 0.00f);    // x, y

	glVertex2f(0.45f, -0.40f);    // x, y
	glVertex2f(0.35f, -0.50f);
	glVertex2f(0.45f, -0.60f);    // x, y
	glVertex2f(0.55f, -0.50f);
	glVertex2f(0.35f, -0.50f);
	glVertex2f(0.45f, -0.60f);    // x, y
	glVertex2f(0.45f, -0.40f);    // x, y
	glVertex2f(0.55f, -0.50f);


	glVertex2f(-0.45f, -0.40f);    // x, y
	glVertex2f(-0.35f, -0.50f);
	glVertex2f(-0.45f, -0.60f);    // x, y
	glVertex2f(-0.55f, -0.50f);
	glVertex2f(-0.35f, -0.50f);
	glVertex2f(-0.45f, -0.60f);    // x, y
	glVertex2f(-0.45f, -0.40f);    // x, y
	glVertex2f(-0.55f, -0.50f);





	glEnd();

	glLineWidth(3.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Black

	glVertex2f(-0.35f, 0.75f);
	glVertex2f(0.35f, 0.75f);    // x, y
	glVertex2f(0.15f, 0.98f);    // x, y
	glVertex2f(-0.15f, 0.98f);
	glVertex2f(0.35f, 0.75f);    // x, y
	glVertex2f(0.15f, 0.98f);    // x, y
	glVertex2f(-0.35f, 0.75f);
	glVertex2f(-0.15f, 0.98f);

	glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Lamp on a table");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
