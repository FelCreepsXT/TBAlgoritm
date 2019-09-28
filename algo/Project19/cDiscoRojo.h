#pragma once
#include "cDiscos.h"

class cDiscoRojo :public cDiscos {
public:
	cDiscoRojo(int x, int y, int dx, int dy, char *figura, char representa, bool elimina);
	~cDiscoRojo();

	void Dibujar(Graphics^g);
	void Mover(Graphics^g);
	void Mover2(Graphics ^g, int xx, int yy);
};

cDiscoRojo::cDiscoRojo(int x, int y, int dx, int dy, char *figura, char representa, bool elimina):cDiscos(x,y,dx,dy,figura,representa,elimina){}
cDiscoRojo::~cDiscoRojo(){}

auto f1 = [](int W, int w) {
	return W*w;
};
auto f2 = [](int x, int dx,int w) {
	return x+dx+w;
};

void cDiscoRojo::Dibujar(Graphics^g){

	

	Bitmap ^bmp = gcnew Bitmap(gcnew String(figura));
	Rectangle porcion = Rectangle(f1(indiceW,w), f1(indiceH,h), w, h);
	Rectangle zoom = Rectangle(x, y, w/8, h/8);
	g->DrawImage(bmp, zoom, porcion, GraphicsUnit::Pixel);
	delete bmp;
}
void cDiscoRojo::Mover(Graphics^g){
	if (f2(x,dx,0) < 0 || f2(x,dx,w) / 8 > g->VisibleClipBounds.Width)
		dx = dx * -1;

	x = x + dx;
	Dibujar(g);
}
void cDiscoRojo::Mover2(Graphics ^g, int xx, int yy) {}