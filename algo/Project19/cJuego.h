#pragma once
#include "arrDisco.h"
#include "cJugador.h"

class cJuego {
private:
	arrDisco *Disco;
	cJugador *Jugador;
	bool choque;
public:
	cJuego();
	~cJuego();

	void Inicializar();

	bool ColisionFigura(cDiscos *D1, cDiscos *D2);
	bool ColisionJugadorFigura(cDiscos *D1);

	void VerificarColision(Graphics ^g);

	void Mover(Graphics^g, Direccion teclapulsada);
	void Mover2(Graphics ^g);
	void Agregar(Graphics ^g);
	void TeclaPulsada(Direccion teclapulsada);
	void SET_Choque(bool choque);
	bool GET_Choque();
	void AsignarCargaX(int x);
	void AsignarCargaY(int y);
	int GET_jugador_x();
	int GET_jugador_y();
};

cJuego::cJuego(){
	Disco = new arrDisco();
	Jugador = new cJugador();
}
cJuego::~cJuego(){
	delete Disco;
	delete Jugador;
}
void cJuego::Inicializar() {
	Jugador->SET_x(200);
	Jugador->SET_y(100);
	Jugador->SET_figura("jugador.png");
}
bool cJuego::ColisionFigura(cDiscos *D1, cDiscos *D2){
	Rectangle rec1 = Rectangle(D1->GET_x(), D1->GET_y(), D1->GET_w(), D1->GET_h());
	Rectangle rec2 = Rectangle(D2->GET_x(), D2->GET_y(), D2->GET_w(), D2->GET_h());

	return rec1.IntersectsWith(rec2);
}
bool cJuego::ColisionJugadorFigura(cDiscos *D1){
	Rectangle rec1 = Rectangle(D1->GET_x(), D1->GET_y(), D1->GET_w(), D1->GET_h());
	Rectangle rec2 = Rectangle(Jugador->GET_x(), Jugador->GET_y(), Jugador->GET_w(), Jugador->GET_h());

	return rec1.IntersectsWith(rec2);
}

void cJuego::VerificarColision(Graphics ^g){
	for (int i = 0; i < Disco->GET_N() - 1; i++) {
		for (int j = i + 1; j < Disco->GET_N(); j++) {
			if (ColisionFigura(Disco->GET_Discos(i), Disco->GET_Discos(j))) {
				if (Disco->GET_Discos(i)->GET_representa() == 'a' && Disco->GET_Discos(j)->GET_representa() == 'r') {
					Disco->GET_Discos(i)->SET_Choque(true);
					Disco->GET_Discos(j)->SET_Choque(true);
					Disco->AgregarColison(g, Disco->GET_Discos(i)->GET_x(), Disco->GET_Discos(i)->GET_y());
				}
				if (Disco->GET_Discos(j)->GET_representa() == 'a' && Disco->GET_Discos(i)->GET_representa() == 'r') {
					Disco->GET_Discos(i)->SET_Choque(true);
					Disco->GET_Discos(j)->SET_Choque(true);
					Disco->AgregarColison(g, Disco->GET_Discos(i)->GET_x(), Disco->GET_Discos(i)->GET_y());
				}
			}
		}
	}
	for (int i = 0; i < Disco->GET_N(); i++) {
		if (ColisionJugadorFigura(Disco->GET_Discos(i))) {
			Jugador->SET_x(200);
			Jugador->SET_y(100);
			Disco->EliminarPorChoque();
			choque = true;
		}
	}
}

void cJuego::Mover(Graphics^g, Direccion teclapulsada){
	VerificarColision(g);
	Jugador->Mover(g, teclapulsada);
	Disco->Mover(g);
	Disco->Eliminar(g);
}
void cJuego::Mover2(Graphics ^g) {
	Disco->Mover2(g, Jugador->GET_x(), Jugador->GET_y());
}
void cJuego::Agregar(Graphics ^g){
	Disco->Agregar(g);
}
void cJuego::TeclaPulsada(Direccion teclapulsada) { Jugador->TeclaPulsada(teclapulsada); }
void cJuego::SET_Choque(bool choque) { this->choque = choque; }
bool cJuego::GET_Choque() { return choque; }
void cJuego::AsignarCargaX(int x) { Jugador->SET_x(x);}
void cJuego::AsignarCargaY(int y) { Jugador->SET_y(y);}
int cJuego::GET_jugador_x() { return Jugador->GET_x(); }
int cJuego::GET_jugador_y() { return Jugador->GET_y(); }