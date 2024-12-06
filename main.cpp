#include <GL/glut.h>
#include <GL/glu.h>

void myInit(){
    glClearColor(0,0,0,1); //R G B Transparency (background color)
    glColor3f(1,0,0); //set to RED (drawing color)
}


void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT); //clear the background

    glBegin(GL_POLYGON); //group data points as a single object
        glVertex2f(-0.5,  0.5); //data point 1
        glVertex2f( 0.5,  0.5); //data point 2
        glVertex2f( 0.5, -0.5); //data point 3
        glVertex2f(-0.5, -0.5); //data point 4
    glEnd();

    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    glutInitWindowSize(600, 600);
    glutInitWindowPosition(250, 50);
    glutCreateWindow("Basic OpenGL - 2D");
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE); //RGB | 2D
    myInit();

    glutDisplayFunc(displayMe);

    glutMainLoop();
    return 0;
}
