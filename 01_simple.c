#include <stdio.h>

#include <GL/gl.h>
#include <GL/glut.h>

void display(void) {

	// Clear all pixels.
	glClear(GL_COLOR_BUFFER_BIT);
	
	// Draw white polygon (rectangle) with corners at...
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
		glVertex3f(0.25, 0.25, 0.0);
		glVertex3f(0.75, 0.25, 0.0);
		glVertex3f(0.75, 0.75, 0.0);
		glVertex3f(0.25, 0.75, 0.0);
	glEnd();
	
	// Don't wait!
	glFlush();
	
}

void init(void) {

	// Select clearing (background) color.
	glClearColor(0.0, 0.0, 0.0, 0.0);
	
	// Initialize viewing values.
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0., 1.0, -1.0, 1.0);

}




int main(int argc, char** argv) {
	printf("Hello World!");
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(250, 250);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("hello");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}








