#pragma once
#include "cDiscos.h"

class cDiscoPlomo :public cDiscos {
public:
	cDiscoPlomo(int x, int y, int dx, int dy, char *figura, char representa, bool elimina);
	~cDiscoPlomo();

	void Dibujar(Graphics^g);
	void Mover(Graphics^g);
	void Mover2(Graphics ^g,int xx,int yy);
};

cDiscoPlomo::cDiscoPlomo(int x, int y, int dx, int dy, char *figura, char representa, bool elimina) :cDiscos(x, y, dx, dy, figura, representa, elimina) {}
cDiscoPlomo::~cDiscoPlomo() {}

void cDiscoPlomo::Dibujar(Graphics^g) {
	Bitmap ^bmp = gcnew Bitmap(gcnew String(figura));
	Rectangle porcion = Rectangle(indiceW*w, indiceH*h, w, h);
	Rectangle zoom = Rectangle(x, y, w / 8, h / 8);
	g->DrawImage(bmp, zoom, porcion, GraphicsUnit::Pixel);
	delete bmp;
}
void cDiscoPlomo::Mover(Graphics^g) {
	Dibujar(g);
	
}
int N = 3;
void cDiscoPlomo::Mover2(Graphics ^g, int xx, int yy) {
	if (x > xx) {
		dx = -N;
	}
	else {
		if (x < xx)
			dx = N;
		else
			dx = 0;
	}
	if (y > yy) {
		dy = -N;
	}
	else {
		if (y < yy) {
			dy = N;
		}
		else {
			dy = 0;
		}
	}

	x = x + dx;
	y = y + dy;
	Dibujar(g);
}