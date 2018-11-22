#include "inimigosmovimento.h"



void inimigosmovimento::Desenhainimigo()
{
	glPushMatrix();
	glTranslatef(0.5, 0.2, 0.0f);
	glScalef(0.5, 0.5, 0.5);
	glColor3f(0.35, 0.15, 0.0);
	glutSolidCube(0.5);
	glPopMatrix();
	
}

void inimigosmovimento::MovimentoInimigo(float _x, float _y, float _z)
{

	x += _x;
	y += _y;
	z += _z;
	
	glPushMatrix();
	glTranslatef(0.5+x+0.5, 0.2, 0.0f);
	glScalef(0.5, 0.5, 0.5);
	glColor3f(0.35, 0.15, 0.0);
	glutSolidCube(0.5);
	glPopMatrix();


}


inimigosmovimento::inimigosmovimento()
{

}


inimigosmovimento::~inimigosmovimento()
{
}
