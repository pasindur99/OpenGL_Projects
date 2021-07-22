#include <GL/glut.h>

void init(void) {
	glClearColor(0.0, 0.0, 0.0, 0.0);
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);

	glLoadIdentity(); /*This will clear the current Model View Matrix*/

	gluLookAt(0.0,0.0,5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0); /*Viewing transformation*/

	/*Modeling transformation*/
	glScalef(1.0,2.0,1.0);
	glRotatef(45.0, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 1.0, 0.0);
	glutWireCube(1.0);
	glFlush();
}

void reshape(int w, int h) {
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION); /*Loading Projection Matrix*/
	glLoadIdentity(); /*This will clear the current matrix (Projection Matrix)*/
	glFrustum(-1.0, 1.0, -1.0, 1.0, 1.5, 20.0); /*Projection trnasformation*/
	glMatrixMode(GL_MODELVIEW); /*Loading ModelView Matrix*/
}

int main(int argc, char **argv) {
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Transformations");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}