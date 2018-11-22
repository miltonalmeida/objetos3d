//#include <GL\freeglut.h>
//
//GLfloat xRotated, yRotated, zRotated;
//GLfloat angle, fAspect, stepX, stepY, stepZ;
//float Px1, Px2, Px3, Px4, Px5, Px6, Px7, Px8, Px9, Px10, Px11, Px12, Px13, Px14, Px15;
//float Py1, Py2, Py3, Py4, Py5, Py6, Py7, Py8, Py9, Py10, Py11, Py12, Py13, Py14, Py15;
//void redisplayFunc(void)
//{
//	// limpa o bufffer de desenho
//	glClear(GL_COLOR_BUFFER_BIT);
//	// limpa a matriz identidade
//	glLoadIdentity();
//
//
//	// traslada o desenho para z = -5.0
//	glTranslatef(0.0, 0.0, -5.0);
//	// Define a cor do desenho
//	glColor3f(0.0, 0.5, 0.0);
//
//
//
//	// Mudan�as na matriz de transforma��o
//	// rota��o sobre o eixo X
//	glRotatef(xRotated, 1.0, 0.0, 0.0);
//	// rota��o sobre o eixo Y
//	glRotatef(yRotated, 0.0, 1.0, 0.0);
//	// rota��o sobre o eixo Z
//	glRotatef(zRotated, 0.0, 0.0, 1.0);
//	// Defini��o de escala
//	glScalef(1.0, 1.0, 1.0);
//
//	glColor3f(1.0, 1.0, 1.0);
//	glBegin(GL_QUADS);
//	glVertex3f(Px5 + 0.5f, Py5 + 0.9f, 1.0f);
//	glVertex3f(Px6 + 0.5f, Py6 + 1.1f, 1.0f);
//	glVertex3f(Px7 + 1.4f, Py7 + 1.1f, 1.0f);
//	glVertex3f(Px8 + 1.4f, Py8 + 0.9f, 1.0f);
//	glEnd();
//
//	// Fun��o pr�pria da glut para desenho de primitivas 3d
//	//glutSolidTeapot(1);
//	//void glutWireCube(GLdouble size);
//	//void glutWireSphere(GLdouble radius, GLint slices, GLint stacks);
//	//void glutWireCone(GLdouble radius, GLdouble height, GLint slices, GLint stacks);
//	//void glutWireTorus(GLdouble innerRadius, GLdouble outerRadius, GLint nsides, GLint rings);
//	//void glutWireIcosahedron(void);
//	//void glutWireOctahedron(void);
//	//void glutWireTetrahedron(void);
//	//void glutWireDodecahedron(GLdouble radius);
//
//	// Esvazia o buffer na tela
//	glFlush();
//	// troca o buffer pois estamos usando double buffering 
//	glutSwapBuffers();
//}
//
//
//// Especifica��o do volume de visualiza��o
//void EspecificaParametrosVisualizacao(void)
//{
//	// Especifica sistema de coordenadas de proje��o
//	glMatrixMode(GL_PROJECTION);
//
//	// Inicializa sistema de coordenadas de proje��o
//	glLoadIdentity();
//
//	// Especifica a proje��o perspectiva
//	gluPerspective(angle, fAspect, 0.1, 500);
//
//	/*	Esta fun��o estabelece os par�metros da Proje��o Perspectiva,
//	atualizando a matriz de proje��o perspectiva.
//	Seu prot�tipo �:
//	void gluPerspective(GLdouble fovy, GLdouble aspect, GLdouble zNear, GLdouble zFar);
//	Descri��o dos par�metros:
//	1) fovy � o �ngulo, em graus, na dire��o y (usada para determinar a
//	"altura" do volume de visualiza��o);
//	2) aspect � a raz�o de aspecto que determina a �rea de visualiza��o
//	na dire��o x, e seu valor � a raz�o em x(largura) e y(altura);
//	3) zNear, que sempre deve ter um valor positivo maior do que zero,
//	� a dist�ncia do observador at� o plano de corte mais pr�ximo(em z);
//	4) zFar, que tamb�m sempre tem um valor positivo maior do que zero,
//	� a dist�ncia do observador at� o plano de corte mais afastado(em z).
//	Esta fun��o sempre deve ser definida ANTES da fun��o gluLookAt, e no modo GL_PROJECTION  */
//
//	// Especifica sistema de coordenadas do modelo
//	glMatrixMode(GL_MODELVIEW);
//
//	// Inicializa sistema de coordenadas do modelo
//	glLoadIdentity();
//
//	// Especifica posi��o do observador e do alvo
//	gluLookAt(0, 80, 200, 0, 0, 0, 0, 1, 0);
//
//	/*Descri��o dos par�metros:
//	1) eyex, eyey e eyez s�o usados para definir as
//	coordenadas x, y e z, respectivamente, da posi��o
//	da c�mera(ou observador);
//	2) centerx, centery e centerz s�o usados para
//	definir as coordenadas x, y e z, respectivamente,
//	da posi��o do alvo, isto �, para onde o
//	observador est� olhando  (normalmente, o centro da cena);
//	3) upx, upy e upz s�o as coordenadas x, y e z,
//	que estabelecem o vetor up(indica o
//	"lado de cima" de uma cena 3D)*/
//}
//
//
//// Fun��o callback chamada quando o tamanho da janela � alterado 
//void AlteraTamanhoJanela(GLsizei w, GLsizei h)
//{
//	// Para previnir uma divis�o por zero
//	if (h == 0) h = 1;
//
//	// Especifica o tamanho da viewport
//	glViewport(0, 0, w, h);
//
//	// Calcula a corre��o de aspecto
//	fAspect = (GLfloat)w / (GLfloat)h;
//
//	EspecificaParametrosVisualizacao();
//}
//
//// Fun��o callback chamada para gerenciar eventos de teclado
//void GerenciaTeclado(unsigned char key, int x, int y)
//{
//	switch (key) {
//	case 'a':
//		stepX = 0.3;
//		stepY = 0;
//		stepZ = 0;
//		break;
//	case 's':
//		stepX = 0;
//		stepY = 0.3;
//		stepZ = 0;
//		break;
//	case 'd':
//		stepX = 0;
//		stepY = 0;
//		stepZ = 0.3;
//		break;
//	}
//	redisplayFunc();
//	glutPostRedisplay();
//}
//
//void idleFunc(void)
//{
//	// rotation around x axis 
//	xRotated += stepX;
//	yRotated += stepY;
//	zRotated += stepZ;
//}
//
//
//// Inicializa par�metros de rendering
//void Inicializa(void)
//{
//	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
//	angle = 45;
//	stepX = stepY = stepZ = 0;
//}
//
//// Fun��o callback chamada para gerenciar eventos do mouse
//void GerenciaMouse(int button, int state, int x, int y)
//{
//	if (button == GLUT_LEFT_BUTTON)
//		if (state == GLUT_DOWN) {  // Zoom-in
//			if (angle >= 10) angle -= 5;
//		}
//	if (button == GLUT_RIGHT_BUTTON)
//		if (state == GLUT_DOWN) {  // Zoom-out
//			if (angle <= 130) angle += 5;
//		}
//	EspecificaParametrosVisualizacao();
//	glutPostRedisplay();
//}
//
//int main(int argc, char **argv)
//{
//	//Initializa a GLUT
//	glutInit(&argc, argv);
//	//double buffering utilizado para evitar o probema de flick da anima��o
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
//	// Inicializa a janela
//	glutInitWindowSize(350, 350);
//
//	// Cria a janela
//	glutCreateWindow("3D animation");
//	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//	//glPolygonMode(GL_FRONT_AND_BACK, GLU_FILL);
//
//	xRotated = yRotated = zRotated = 0.0;
//
//	glClearColor(0.0, 0.0, 0.0, 0.0);
//	//Atribui as fun��es utilizados aos eventos
//	glutDisplayFunc(redisplayFunc);
//	glutReshapeFunc(AlteraTamanhoJanela);
//	glutKeyboardFunc(GerenciaTeclado);
//	glutMouseFunc(GerenciaMouse);
//
//	Inicializa();
//	glutIdleFunc(idleFunc);
//
//	// Inicia o loop da glut
//	glutMainLoop();
//	return 0;
//}
//



//
// File:        meucubo.c
// Author:      Matt Daisley
// Created:     25/4/2012
// Project:     C�digo Fonte para o artigo Como Fazer um Cubo em OpenGL
// Description: Cria uma janela OpenGL e desenha um cubo em 3D.
//              Que o usu�rio pode rotacionar com as setas do teclado
// 
// Controls:    Seta para Esquerda - Rotacionar para Esquerda
//              Seta para Direita - Rotaciona para direita
//              Seta para Cima    - Rotaciona para cima
//              Seta para Baixo - Rotaciona para Baixo     

// ----------------------------------------------------------
// Inclus�es
// ----------------------------------------------------------
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#include <iostream>
#define GL_GLEXT_PROTOTYPES
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include"objetos.h"
#include"Player.h"
#include"inimigosmovimento.h"
using namespace std;
#endif

// ----------------------------------------------------------
// Declara��es de Fun��es
// ----------------------------------------------------------
void display();
void specialKeys();

// ----------------------------------------------------------
// Vari�veis Globais
// ----------------------------------------------------------
float rotate_y = 0;
float rotate_x = -25;
float pontodireita = 0;
float pontoesquerda = 0;
objetos cenarios;
Player jogador;
inimigosmovimento inimigo;
// ----------------------------------------------------------
// fun��o display() 
// ----------------------------------------------------------
void display() {

	//  Limpa a tela e o Z-Buffer
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	// Reinicia transforma��es
	glLoadIdentity();

	// Outras Transforma��es
	 //glTranslatef( 0.1, 0.0, 0.0 );      // N�o est� inclu�do
	// glRotatef( 270, 0.0, 1.0, 0.0 );    // N�o est� inclu�do

	// Rotaciona quando o usu�rio muda rotate_x e rotate_y
	glRotatef(rotate_x, 1.0, 0.0, 0.0);
	glRotatef(rotate_y, 0.0, 1.0, 0.0);
	

	//gluPerspective(45, 0, 0.1, 500);
	
	// Outras Transforma��es
	// glScalef( 2.0, 2.0, 0.0 );          // N�o est� inclu�do

	jogador.DesenhaPlayer();

	//desenha mar
	cenarios.DesenhaAgua();
	cenarios.DesenhaParedes();
	
	inimigo.Desenhainimigo();
	inimigo.MovimentoInimigo(0.5f, 0.0, 0.0);
	
	
	glFlush();
	glutSwapBuffers();

	char ddd[10];

	printf("x: |%f| e y: |%f| \n", rotate_x, rotate_y);
}

void GerenciaTeclado(unsigned char key, int x, int y)
{
	switch (key) {
	case 'D':
	case 'd':
		pontodireita += 0.05f;
		break;

	}


}
// ----------------------------------------------------------
// Fun��o specialKeys()
// ----------------------------------------------------------
void specialKeys(int key, int x, int y) {

	//  Seta direita - aumenta rota��o em 5 graus
	if (key == GLUT_KEY_RIGHT)
		rotate_y += 5;

	//  Seta para esquerda - diminui a rota��o por 5 graus
	else if (key == GLUT_KEY_LEFT)
		rotate_y -= 5;
	

	else if (key == GLUT_KEY_UP)
		rotate_x += 5;

	else if (key == GLUT_KEY_DOWN)
		rotate_x -= 5;

	//  Requisitar atualiza��o do display
	glutPostRedisplay();
}

// ----------------------------------------------------------
// Fun��o main()
// ----------------------------------------------------------
int main(int argc, char* argv[]) {

	//  Inicializa o GLUT e processa os par�metros do usu�rio GLUT
	glutInit(&argc, argv);

	//  Requisita uma janela com buffer duplo e true color com um Z-buffer
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(900, 800);
	// Cria a janela do programa

	glutCreateWindow("Super Cube");

	//  Habilita o teste de profundidade do Z-buffer
	glEnable(GL_DEPTH_TEST);
	
	// Fun��es
	glutDisplayFunc(display);
	glutSpecialFunc(specialKeys);
	glutKeyboardFunc(GerenciaTeclado);

	//  Passa o controle dos eventos para o GLUT
	glutMainLoop();

	//  Retorna para o SO
	return 0;

}