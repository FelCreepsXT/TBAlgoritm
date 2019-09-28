#pragma once
#include "cDiscos.h"

class cDiscoAzul :public cDiscos {
public:
	cDiscoAzul(int x, int y, int dx, int dy, char *figura, char representa, bool elimina);
	~cDiscoAzul();

	void Dibujar(Graphics^g);
	void Mover(Graphics^g);
	void Mover2(Graphics ^g, int xx, int yy);
};

cDiscoAzul::cDiscoAzul(int x, int y, int dx, int dy, char *figura, char representa, bool elimina) :cDiscos(x, y, dx, dy, figura, representa, elimina) {}
cDiscoAzul::~cDiscoAzul() {}

void cDiscoAzul::Dibujar(Graphics^g) {
	Bitmap ^bmp = gcnew Bitmap(gcnew String(figura));
	Rectangle porcion = Rectangle(indiceW*w, indiceH*h, w, h);
	Rectangle zoom = Rectangle(x, y, w/8, h/8);
	g->DrawImage(bmp, zoom, porcion, GraphicsUnit::Pixel);
	delete bmp;
}
void cDiscoAzul::Mover(Graphics^g) {
	if (y + dy < 0 || y + dy + h / 8 > g->VisibleClipBounds.Height)
		dy = dy * -1;

	y = y + dy;
	Dibujar(g);
}
void cDiscoAzul::Mover2(Graphics ^g, int xx, int yy){}