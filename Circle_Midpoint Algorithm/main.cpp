#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int xc,yc,r;

void plot_point(int x, int y)
{
    glBegin(GL_POINTS);

    glVertex2i(xc+x, yc+y);
    glVertex2i(xc+x, yc-y);
    glVertex2i(xc+y, yc+x);
    glVertex2i(xc+y, yc-x);
    glVertex2i(xc-x, yc-y);
    glVertex2i(xc-y, yc-x);
    glVertex2i(xc-x, yc+y);
    glVertex2i(xc-y, yc+x);

    glEnd();
}

void mid_point (void)
{
    int x=0, y=r;
    float pk=1-r;

    plot_point(x,y);

    int k;

    while(x<y)
    {
        x=x+1;

        if(pk<0){
            pk=pk+(2*x)+1;
        }

        else{
            y=y-1;

            pk=pk+(2*x)-(2*y);
        }

        plot_point(x,y);

    }

    glFlush();

}

void init(void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}



int main(int argc, char** argv)
{
    cout<<("Enter the points\n(xc,yc):-\n");
    cin>>xc>>yc;

    cout<<("Enter the raduis\n(r):-\n");
    cin>>r;

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Circle_Midpoint Algorithm");
    init ();
    glutDisplayFunc(mid_point);
    glutMainLoop();
    return 0;

}
