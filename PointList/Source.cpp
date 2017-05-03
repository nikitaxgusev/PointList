#include <iostream>
#include "ptlist.h"
#include <GL/glew.h>
#include <GL/glut.h>

Point points[maxListSize];
void showStructure();
int main(int argc,char** argv)
{	
	for (int i = 0; i < 4; i++)
	{
		std::cout << "Point x [ "<<i+1<<" ]: ";
		std::cin >> points[i].x;
		std::cout << "Point y [ " << i + 1 << " ]: ";
		std::cin >> points[i].y;
	}
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE |  GLUT_DEPTH);
	glutInitWindowSize(400, 400);
	glutCreateWindow("PointList");
	glutDisplayFunc(showStructure);

	glutMainLoop();
	system("pause");

	return 0;
}

void showStructure()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glBegin(GL_POLYGON);

		glVertex2f(GLfloat(points[1].x), GLfloat(points[2].y));
		glVertex2f(GLfloat(points[3].y), GLfloat(points[4].x)); 
		glVertex2f(GLfloat(points[5].y), GLfloat(points[6].x));
		glVertex2f(GLfloat(points[7].y), GLfloat(points[8].x));
		
	glEnd();
	glutSwapBuffers();
}
