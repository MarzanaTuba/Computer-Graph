#include<windows.h>
#include <GL/glut.h>
#include<math.h>
#define PI 3.1415

int cloud(float x,float y, float r){
int i;


int triangleAmount = 30;

GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0f,1.0f,1.0f);
glVertex2f(x,y);
for(i=0; i<=triangleAmount;i++)
{
glVertex2f(
x+(r*cos(i*twicePi/triangleAmount)), y+(r*sin(i*twicePi/triangleAmount))
);
}

glEnd();
glFlush();
}


static void display(void)
{
glClearColor(0.f,0.0f,0.0f,1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(7.5);
glBegin(GL_QUADS);

glColor3f(0.0f,0.5f,1.0f);

glVertex2f(-1.0f,1.0f);
glVertex2f(-1.0f,-0.2f);
glVertex2f(1.0f,-0.2f);
glVertex2f(1.0f,1.0f);

glEnd();

glBegin(GL_QUADS);

glColor3f(0.0f,1.0f,0.0f);

glVertex2f(-1.0f,-0.2f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.2f);

glEnd();

//sun
int i;

GLfloat x=0.35f;
GLfloat y=0.20f;
GLfloat r=0.25f;

int triangleAmount = 30;

GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3f(1.0f,1.0f,0.0f);
glVertex2f(x,y);
for(i=0; i<=triangleAmount;i++)
{
glVertex2f(
x+(r*cos(i*twicePi/triangleAmount)),
y+(r*sin(i*twicePi/triangleAmount))
);
}

glEnd();
glFlush();

//cloud1
cloud(0.80f,0.70f,0.15f);
cloud(0.60f,0.70f,0.18f);
cloud(0.40f,0.70f,0.15f);

//cloud2
cloud(-0.80f,0.70f,0.15f);
cloud(-0.60f,0.70f,0.18f);
cloud(-0.40f,0.70f,0.15f);


glFlush();
}


int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitWindowSize(600,500);
glutInitWindowPosition(10,10);
glutCreateWindow("Sun and Clouds");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
