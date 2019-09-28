#pragma once
#include "string.h"

using namespace System;
using namespace System::Drawing;

class cDiscos {
protected:
	int x, y;
	int dx, dy;
	int w, h;
	int indiceW, indiceH;
	char representa;
	char *figura;
	bool choque;
	bool elimina;
public:
	cDiscos(int x,int y,int dx,int dy,char *imagen,char representa, bool elimina);
	~cDiscos();

	void SET_x(int x);
	void SET_y(int y);
	void SET_Choque(bool choque);
	void SET_figura();
	void SET_dx(int dx);
	void SET_dy(int dy);
	void SET_elimina(bool elimina);

	int GET_x();
	int GET_y();
	int GET_w();
	int GET_h();
	int GET_dx();
	int GET_dy();
	bool GET_choque();
	char GET_representa();
	bool GET_elimina();
	virtual void Dibujar(Graphics^g)abstract;
	virtual void Mover(Graphics^g)abstract;
	virtual void Mover2(Graphics ^g, int xx, int yy) abstract;
};

cDiscos::cDiscos(int x, int y, int dx, int dy, char *imagen, char representa, bool elimina){
	this->x = x;
	this->y = y;
	this->dx = dx;
	this->dy = dy;
	this->representa = representa;
	indiceW = indiceH = 0;
	figura = new char[50];
	strcpy(figura, imagen);
	this->elimina = elimina;
	SET_figura();
}
cDiscos::~cDiscos() { delete figura; }

void cDiscos::SET_x(int x) { this->x = x; }
void cDiscos::SET_y(int y) { this->y = y; }
void cDiscos::SET_Choque(bool choque) { this->choque = choque; }
void cDiscos::SET_figura(){
	Bitmap ^bmp = gcnew Bitmap(gcnew String(figura));
	w = bmp->Width / 4;
	h = bmp->Height / 1;
	delete bmp;
}
void cDiscos::SET_dx(int dx) { this->dx = dx; }
void cDiscos::SET_dy(int dy) { this->dy = dy; }
void cDiscos::SET_elimina(bool elimina) { this->elimina = elimina; }

int cDiscos::GET_x() { return x; }
int cDiscos::GET_y() { return y; }
int cDiscos::GET_w() { return w/8; }
int cDiscos::GET_h() { return h/8; }
int cDiscos::GET_dx() { return dx; }
int cDiscos::GET_dy() { return dy; }
bool cDiscos::GET_choque() { return choque; }
char cDiscos::GET_representa() { return representa; }
bool cDiscos::GET_elimina() { return elimina; }