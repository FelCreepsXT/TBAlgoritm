#pragma once
#include "string.h"

using namespace System;
using namespace System::Drawing;

enum Direccion {Arriba,Abajo,Derecha,Izquierda,Ninguno};

class cJugador {
private:
	int x, y;
	int dx, dy;
	int w, h;
	int indiceW, indiceH;
	char *figura;
public:
	cJugador();
	~cJugador();

	void SET_x(int x);
	void SET_y(int y);
	void SET_figura(char *figura);

	int GET_x();
	int GET_y();
	int GET_w();
	int GET_h();
	int GET_dx();
	int GET_dy();

	void TeclaPulsada(Direccion teclapulsada);
	void Dibujar(Graphics^g);
	void Mover(Graphics ^g, Direccion teclapulsada);
	void MoverImagen();
};

auto Limites = [](int x,int dx,int w) {
	return x + dx + w;
};

cJugador::cJugador() {
	x = y = 0;
	w = h = 0;
	indiceH = indiceW = 0;
	figura = new char[50];
}
cJugador::~cJugador(){}

void cJugador::SET_x(int x) { this->x = x; }
void cJugador::SET_y(int y) { this->y = y; }

void cJugador::SET_figura(char *imagen){
	strcpy(figura, imagen);
	Bitmap ^bmp = gcnew Bitmap(gcnew String(figura));
	w = bmp->Width / 3;
	h = bmp->Height / 4;
	delete bmp;
}

int cJugador::GET_x() { return x; }
int cJugador::GET_y() { return y; }
int cJugador::GET_w() { return w; }
int cJugador::GET_h() { return h; }
int cJugador::GET_dx() { return dx; }
int cJugador::GET_dy() { return dy; }

void cJugador::TeclaPulsada(Direccion teclapulsada){
	int N = 8;
	switch (teclapulsada)
	{
	case Arriba:dx = 0; dy = -N; indiceH = 3;
		break;
	case Abajo:dx = 0; dy = N; indiceH = 0;
		break;
	case Derecha:dx = N; dy = 0; indiceH = 2;
		break;
	case Izquierda:dx = -N; dy = 0; indiceH = 1;
		break;
	case Ninguno:dx = 0; dy = 0; indiceH = 0;
		break;
	default:
		break;
	}
}

void cJugador::Dibujar(Graphics^g){
	Bitmap ^bmp = gcnew Bitmap(gcnew String(figura));
	Rectangle porcion = Rectangle(indiceW*w, indiceH*h, w, h);
	Rectangle zoom = Rectangle(x, y, w, h);
	g->DrawImage(bmp, zoom, porcion, GraphicsUnit::Pixel);
	delete bmp;
}

void cJugador::MoverImagen() {
	indiceW++;
	if (indiceW >= 3)indiceW = 0;
}


void cJugador::Mover(Graphics ^g, Direccion teclapulsada){
	if (Limites(x,dx,0) < 0 || Limites(x,dx,w) > g->VisibleClipBounds.Width)
		dx = 0;
	if (Limites(y,dy,0) < 0 || Limites(y,dy,h) >g->VisibleClipBounds.Height)
		dy = 0;


	
	if (teclapulsada == Arriba) { MoverImagen(); }
	if (teclapulsada == Abajo) { MoverImagen(); }
	if (teclapulsada == Derecha) { MoverImagen(); }
	if (teclapulsada == Izquierda) { MoverImagen(); }
	if (teclapulsada == Ninguno) { indiceW = 1; }

	x = x + dx;
	y = y + dy;

	Dibujar(g);
}