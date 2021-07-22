#include <GL/glut.h>
#include <math.h>

void init(void) {
       glClearColor(0.0, 0.0, 0.0, 0.0);

}
void display(void) {
       glClear(GL_COLOR_BUFFER_BIT);
       glLoadIdentity();
       float theta;

       glBegin(GL_TRIANGLE_FAN);
       glEnd();

       glPushMatrix();
	glColor4f(1.0,1.0,1.0,0.5);
	glutWireSphere(0.8,30, 10);
     
       glPopMatrix();

       glColor3f(1.0, 1.0, 0.0);
              glScalef(0.8,1.0,1.0);
              glutSolidSphere(0.10, 20.0, 10.0);

/*First planet*/
       glColor3f(0.0,0.5,0.9);
           glPushMatrix();
           glScalef(0.9,1.0,1.0);
       glTranslatef(-0.30, 0.1, 1.0);
           glRotatef(45.0, -1.0, 1.0, 1.0);
           glutSolidSphere(0.05, 40.0, 10.0);
       glPopMatrix();

/*Second planet*/
       glColor3f(1.0,0.0,0.0);
           glPushMatrix();
           glScalef(0.9,1.0,1.0);
       glTranslatef(0.50, -0.2, 1.0);
           glRotatef(45.0, -1.0, 1.0, 1.0);
           glutSolidSphere(0.04, 40.0, 10.0);
       glPopMatrix();

/*Third planet*/
       glColor3f(1.0,0.70,0.9);
           glPushMatrix();
           glScalef(0.9,1.0,1.0);
       glTranslatef(-0.60, -0.2, 1.0);
           glRotatef(45.0, 1.0, 1.0, 1.0);
           glutSolidSphere(0.09, 40.0, 10.0);
       glPopMatrix();

/*Forth planet*/
       glColor3f(1.0,1.0,1.0);
           glPushMatrix();
           glScalef(0.9,1.0,1.0);
       glTranslatef(0.825, 0.2, 1.0);
           glRotatef(45.0, 1.0, 1.0, 1.0);
           glutSolidSphere(0.08, 40.0, 10.0);
       glPopMatrix();
       
/*Fifth planet*/
       glColor3f(0.0,1.0,1.0);
           glScalef(0.9,1.0,1.0);
       glTranslatef(-0.3, 0.6, 1.0);
           glRotatef(45.0, 1.0, 1.0, 1.0);
           glutSolidSphere(0.059, 40.0, 10.0);
       glPopMatrix();

       glFlush();

}

int main(int argc, char **argv) {
       glutInit(&argc,argv);
       glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
       glutInitWindowSize(1500,1500);

       glutInitWindowPosition(200,200);

       glutCreateWindow("Solar System in OpenGL");

       glutDisplayFunc(display);
       glutMainLoop();
       return 0;
}