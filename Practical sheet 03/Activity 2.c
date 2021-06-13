#include <GL/glut.h>

void createPyramid(void)
{
    glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);


    glColor3f(0.0,0.0,1.0); //Back triangle
    glBegin(GL_TRIANGLES);
        glVertex3f(-0.5,0,-0.5);
        glVertex3f( 0,1,0 );
        glVertex3f( 0.5,0,-0.5 );
    glEnd();

    glColor3f(1.0,0.0,1.0); //Left triangle
    glBegin(GL_TRIANGLES);
        glVertex3f(-0.5,0,0.5);
        glVertex3f(0,1,0);
        glVertex3f(-0.5,0,-0.5);
    glEnd();

    glColor3f(0.78,1.0,1.0); //Right triangle
    glBegin(GL_TRIANGLES);
        glVertex3f(0.5,0,0.5);
        glVertex3f(0,1,0);
        glVertex3f(0.5,0,-0.5);
    glEnd();

    glColor3f(1.0,1.0,0.0); //Front triangle
    glBegin(GL_TRIANGLES);
        glVertex3f(-0.5,0,0.5);
        glVertex3f(0,1,0);
        glVertex3f(0.5,0,0.5);
    glEnd();

    glColor3f(1.0,0.0,0.0); //Bottom base
    glBegin(GL_POLYGON);
        glVertex3f( -0.5, 0, 0.5 );
        glVertex3f( -0.5, 0, -0.5 );
        glVertex3f( 0.5, 0, -0.5 );
        glVertex3f( 0.5, 0, 0.5 );
    glEnd();


    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("My Pyramid");

    glRotatef(-45,1.0,2,1.0);

    glutDisplayFunc(createPyramid);
    glutMainLoop();

    return 0;
}

