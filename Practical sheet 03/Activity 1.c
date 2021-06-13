#include <GL/glut.h>

void createCube(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT);


    glColor3f(0.73,0.0,1.0); //Back face
    glBegin(GL_POLYGON);
        glVertex3f( -0.2, 0, -0.4 );
        glVertex3f( -0.2, 0.4, -0.4);
        glVertex3f(  0.2, 0.4, -0.4);
        glVertex3f( 0.2, 0, -0.4 );
    glEnd();

    glColor3f(0.0,1.0,0.0);  //Left face
    glBegin(GL_POLYGON);
        glVertex3f( -0.4, -0.2, 0 );
        glVertex3f( -0.4, 0.2, 0 );
        glVertex3f( -0.2, 0.4, -0.4);
        glVertex3f( -0.2, 0, -0.4 );
    glEnd();

    glColor3f(1.0,0.0,0.0); //Bottom
    glBegin(GL_POLYGON);
        glVertex3f( -0.4, -0.2, 0 );
        glVertex3f( -0.2, 0, -0.4 );
        glVertex3f( 0.2, 0, -0.4 );
         glVertex3f( 0, -0.2, 0 );
    glEnd();

    glColor3f(0.0,1.0,0.0); //Right face
    glBegin(GL_POLYGON);
        glVertex3f( 0, -0.2, 0 );
        glVertex3f( 0, 0.2, 0 );
        glVertex3f(  0.2, 0.4, -0.4);
        glVertex3f( 0.2, 0, -0.4 );
    glEnd();

glColor3f(0.0,0.0,1.0); //Top face
    glBegin(GL_POLYGON);
        glVertex3f( -0.4, 0.2, 0 );
        glVertex3f( -0.2, 0.4, -0.4);
        glVertex3f(  0.2, 0.4, -0.4);
        glVertex3f( 0, 0.2, 0 );
    glEnd();

glColor3f(1.0,1.0,1.0); //Front face
    glBegin(GL_POLYGON);
        glVertex3f( -0.4, -0.2, 0 );
        glVertex3f( -0.4, 0.2, 0 );
        glVertex3f( 0, 0.2, 0 );
        glVertex3f( 0, -0.2, 0 );
    glEnd();


    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("My Cube");


    glutDisplayFunc(createCube);
    glutMainLoop();

    return 0;
}

