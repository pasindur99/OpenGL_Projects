#include <GL/glut.h>
void Cube(void){
    glColor3f(0.0,1.0,1.0);

    glBegin(GL_POLYGON);     //back face
    glVertex3f(-0.4,-0.4,-0.4);
    glVertex3f(-0.4,0.4,-0.4);
    glVertex3f(0.4,0.4,-0.4);
    glVertex3f(0.4,-0.4,-0.4);
    glEnd();

    glBegin(GL_POLYGON);    //left face
    glVertex3f(-0.4,-0.4,0.4);
    glVertex3f(-0.4,0.4,0.4);
    glVertex3f(-0.4,0.4,-0.4);
    glVertex3f(-0.4,-0.4,-0.4);
    glEnd();

    glBegin(GL_POLYGON);    //bottom face
    glVertex3f(-0.4,0.4,0.4);
    glVertex3f(-0.4,-0.4,-0.4);
    glVertex3f(0.4,-0.4,-0.4);
    glVertex3f(0.4,-0.4,0.4);
    glEnd();

    glBegin(GL_POLYGON);    //right face
    glVertex3f(0.4,-0.4,0.4);
    glVertex3f(0.4,0.4,0.4);
    glVertex3f(0.4,0.4,-0.4);
    glVertex3f(0.4,-0.4,-0.4);
    glEnd();

    glBegin(GL_POLYGON);    //top face
    glVertex3f(-0.4,0.4,0.4);
    glVertex3f(-0.4,0.4,-0.4);
    glVertex3f(0.4,0.4,-0.4);
    glVertex3f(0.4,0.4,0.4);
    glEnd();

    glBegin(GL_POLYGON);    //front face
    glVertex3f(-0.4,0.4,0.4);
    glVertex3f(0.4,0.4,0.4);
    glVertex3f(0.4,-0.4,0.4);
    glVertex3f(-0.4,-0.4,0.4);
    glEnd();
    glFlush();
}

void Triangles(void){

    glBegin(GL_POLYGON); // Back
    glColor3f(0.0,0.0,1.0);
    glVertex3f(0.0,1, 0.4);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(0.4,0.4,-0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(-0.4,0.4,-0.4);
    glEnd();

    glBegin(GL_POLYGON); //left
    glColor3f(0.0,0.0,1.0);
    glVertex3f(0.0,1, 0.4);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-0.4,0.4,-0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(-0.4,0.4,0.4);
    glEnd();

    glBegin(GL_POLYGON); //right
    glColor3f(0.0,0.0,1.0);
    glVertex3f(0.0,1, 0.4);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(0.4,0.4,-0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.4,0.4,0.4);
    glEnd();

    glBegin(GL_POLYGON); // front
    glColor3f(0.0,0.0,1.0);
    glVertex3f(0.0,1, 0.4);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-0.4,0.4,0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.4,0.4,0.4);
    glEnd();
    glFlush();
}

void displayCombinedModel(void){

    Cube();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(0,1, 0.0);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-0.4,0.4,0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.4,0.4,0.4);
    glEnd();

//first top
    glBegin(GL_POLYGON); // Back
    glColor3f(0.0,0.0,1.0);
    glVertex3f(0.0,1, 0.0);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(0.4,0.4,-0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(-0.4,0.4,-0.4);
    glEnd();

    glBegin(GL_POLYGON); //left
    glColor3f(0.0,0.0,1.0);
    glVertex3f(0.0,1, 0.0);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-0.4,0.4,-0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(-0.4,0.4,0.4);
    glEnd();

    glBegin(GL_POLYGON); //right
    glColor3f(0.0,0.0,1.0);
    glVertex3f(0.0,1, 0.0);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(0.4,0.4,-0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.4,0.4,0.4);
    glEnd();

    glBegin(GL_POLYGON); // front
    glColor3f(0.0,0.0,1.0);
    glVertex3f(0.0,1, 0.0);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-0.4,0.4,0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.4,0.4,0.4);
    glEnd();

//second right
    glBegin(GL_POLYGON); // Back
    glColor3f(0.0,0.0,1.0);
    glVertex3f(1,0.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(0.4,0.4,-0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.4,-0.4,-0.4);
    glEnd();

    glBegin(GL_POLYGON); //left
    glColor3f(0.0,0.0,1.0);
    glVertex3f(1,0.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(0.4,0.4,0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.4,0.4,-0.4);
    glEnd();

    glBegin(GL_POLYGON); //right
    glColor3f(0.0,0.0,1.0);
    glVertex3f(1,0.0,0.0);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(0.4,-0.4,-0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.4,-0.4,0.4);
    glEnd();

    glBegin(GL_POLYGON); // front
    glColor3f(0.0,0.0,1.0);
    glVertex3f(1,0.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(0.4,-0.4,0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.4,0.4,0.4);
    glEnd();

//Third Left
    glBegin(GL_POLYGON); // Back
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-1,0.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-0.4,0.4,-0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(-0.4,-0.4,-0.4);
    glEnd();

    glBegin(GL_POLYGON); //left
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-1,0.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-0.4,-0.4,-0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(-0.4,-0.4,0.4);
    glEnd();

    glBegin(GL_POLYGON); //right
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-1,0.0,0.0);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(0.4,-0.4,-0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0.4,-0.4,0.4);
    glEnd();

    glBegin(GL_POLYGON); // front
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-1,0.0, 0.0);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-0.4,0.4,-0.4);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(-0.4,-0.4,0.4);
    glEnd();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Practical-4");

    glutDisplayFunc(displayCombinedModel);

    glutMainLoop();

    glutMainLoop();
    return 0;
}

