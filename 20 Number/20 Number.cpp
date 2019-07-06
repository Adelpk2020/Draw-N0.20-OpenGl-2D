#include<GL/glut.h>
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(0.0, -0.9);
	glVertex2f(-0.9, -0.9);
	glVertex2f(-0.9,0.0);
	glVertex2f(0.0,0.0);
	glVertex2f(0.0,0.9);
	glVertex2f(-0.9, 0.9);
	glEnd();
	glFlush();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.2, -0.9);
	glVertex2f(0.9, -0.9);
	glVertex2f(0.9,0.9);
	glVertex2f(0.2, 0.9);
	glEnd();
	glFlush();

}
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(50, 100);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutCreateWindow("20 Number");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}