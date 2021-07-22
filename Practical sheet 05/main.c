#include <GL/glut.h>

void init(void) {
	glClearColor(0.0, 0.0, 0.0, 0.0);
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity(); //Clear the current Model View Matrix
	glColor3f(1.0, 1.0, 1.0);
	gluLookAt(0.0,0.0,10.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0); // View transformation
	glScalef(1.0,1.0,1.0);//Transformation modeling
	glRotatef(45.0,0.0,1.0,0.0);
	glTranslatef(0.0,-2.0, 0.0);
	glutWireCube(2.0);
	glScalef(1.0,11.5,1.0);
	glLoadIdentity(); //Clear the current Model View Matrix
    glColor3f(0.0, 0.0, 1.0);
	gluLookAt(0.0,0.0,10.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0); // View transformation
	glScalef(1.0,1.0,1.0); 
	glRotatef(45.0, 1.0, 1.0, 0.0);
	glutSolidSphere(1,100,100);
	glScalef(1.0,11.5,1.0);
	glLoadIdentity(); //Clear the current Model View Matrix
    glColor3f(1.0, 1.0, 0.0);
	gluLookAt(-3.5,0.0,10.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0); // View transformation
	glScalef(1.0,1.0,1.0);//Modele transformation
	glRotatef(45.0,0.0,1.0,0.0);
	glTranslatef(0.0,2.0, 0.0);
	glutWireCube(2.0);
	glScalef(1.0,11.5,1.0);

	glFlush();
}

void reshape(int w, int h) {
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1.0, 1.0, -1.0, 1.0, 1.5, 20.0);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char **argv) {
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Transformations-Practical Sheet 05");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}