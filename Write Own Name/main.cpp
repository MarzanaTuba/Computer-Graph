#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	glLineWidth(7.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.25f, 0.50f);
	glVertex2f(-0.45f, 0.50f);
	glVertex2f(-0.35f, 0.50f);
	glVertex2f(-0.35f, 0.0f);

	glVertex2f(-0.05f, 0.50f);
	glVertex2f(-0.05f, 0.0f);
	glVertex2f(-0.05f, 0.0f);
	glVertex2f(-0.15f, 0.0f);
	glVertex2f(-0.15f, 0.0f);
	glVertex2f(-0.15f, 0.50f);

	glVertex2f(0.05f, 0.0f);
	glVertex2f(0.05f, 0.50f);
	glVertex2f(0.05f, 0.50f);
	glVertex2f(0.15f, 0.45f);
	glVertex2f(0.15f, 0.45f);
	glVertex2f(0.15f, 0.30f);
	glVertex2f(0.15f, 0.30f);
	glVertex2f(0.05f, 0.25f);
	glVertex2f(0.05f, 0.25f);
	glVertex2f(0.15f, 0.20f);
	glVertex2f(0.15f, 0.20f);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.05f, 0.0f);


	glVertex2f(0.25f, 0.0f);
	glVertex2f(0.35f, 0.50f);
	glVertex2f(0.35f, 0.50f);
	glVertex2f(0.45f, 0.0f);
	glVertex2f(0.30f, 0.25f);
	glVertex2f(0.40f, 0.25f);

	glEnd();

	glFlush();  // Render now
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	 // Create a window with the given title
	glutInitWindowSize(420, 320);
	glutCreateWindow("Window Title");  // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
