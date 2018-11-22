#pragma once

#include <GL\freeglut.h>
class inimigosmovimento
{



public:

	float x,y,z;

	void Desenhainimigo();
	void MovimentoInimigo(float x, float y, float z);
	

	inimigosmovimento();
	~inimigosmovimento();

	
};

