#include "objetos.h"



void objetos::addVertex(float x, float y, float z)
{

}

void objetos::DesenhaAgua()
{

	//mar
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(0, 0, 255);
	glVertex3f(-1.5, 0, 999999.999999999f);
	glVertex3f(1.5, 0, 999999.999999999f);
	glVertex3f(1.5, 0, -999999.99999999f);
	glVertex3f(-1.5, 0, -999999.9999999f);
	glEnd();
	glPopMatrix();
}

void objetos::DesenhaParedes()
{
	//desenho das paredes tanto escala quanto a translação

	glPushMatrix();
	glScalef(0.5f, 0.5f, 99.9f);	
	glTranslatef(-1.9f, 0.0f, 0.0f );
	glColor3f(0.0, 0.5, 0.0);
	glutSolidCube(0.5);
	

	
	glTranslatef(3.8f, 0.0f, 0.0f);
	glColor3f(0.0, 0.9, 0.0);
	glutSolidCube(0.5);	
	glFlush();
	glPopMatrix();

}

objetos::objetos()
{
}


objetos::~objetos()
{
}
