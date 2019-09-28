#pragma once
#include "cDiscoAzul.h"
#include "cDiscoPlomo.h"
#include "cDiscoRojo.h"
#include "cDiscos.h"

class arrDisco {
private:
	cDiscos **arreglo;
	int N;
public:
	arrDisco();
	~arrDisco();

	void Agregar(Graphics ^g);
	void Eliminar(Graphics ^g);
	void Mover(Graphics ^g);
	void Mover2(Graphics ^g, int xx, int yy);
	void AgregarColison(Graphics ^g, int xx,int yy);
	void EliminarPorChoque();

	int GET_N();
	cDiscos *GET_Discos(int indice);
};
arrDisco::arrDisco(){
	N = 0;
	arreglo = new cDiscos *[N];
}
arrDisco::~arrDisco(){
	for (int i = 0; i < N; i++)
		delete arreglo[i];
	delete arreglo;
}

void arrDisco::Agregar(Graphics ^g){
	Random ^rd = gcnew Random();
	cDiscos *dato;
	int numero = rd->Next(1, 3);
	if (numero == 1 || numero == 2) {
		cDiscos **aux = new cDiscos *[N + 1];
		if (aux != NULL) {
			for (int i = 0; i < N; i++)
				aux[i] = arreglo[i];
			if (numero == 1) dato = new cDiscoAzul(rd->Next(0, g->VisibleClipBounds.Width - 50), rd->Next(0, g->VisibleClipBounds.Height - 50), 5, 5, "disco_azul.png", 'a',false);
			if (numero == 2) dato = new cDiscoRojo(rd->Next(0, g->VisibleClipBounds.Width - 50), rd->Next(0, g->VisibleClipBounds.Height - 50), 5, 5, "disco_rojo.png", 'r',false);
			aux[N] = dato;
			N++;
			if (arreglo != NULL)
				delete arreglo;
			arreglo = aux;
		}
	}
}
void arrDisco::Eliminar(Graphics ^g){
	for (int i = 0; i < N; i++) {
		if (arreglo[i]->GET_choque() == true) {
			cDiscos **aux = new cDiscos*[N - 1];
			for (int k = 0; k < i; k++)
				aux[k] = arreglo[k];
			for (int k = i + 1; k < N; k++)
				aux[k - 1] = arreglo[k];
			delete arreglo;
			N--;
			arreglo = aux;
		}
	}
}
void arrDisco::Mover(Graphics ^g){
	for (int i = 0; i < N; i++) {
		if (arreglo[i]->GET_representa() == 'a' || arreglo[i]->GET_representa() == 'r')
			arreglo[i]->Mover(g);
	}
}
void arrDisco::Mover2(Graphics ^g, int xx, int yy) {
	for (int i = 0; i < N; i++) {
		if (arreglo[i]->GET_representa() == 'p')
			arreglo[i]->Mover2(g, xx, yy);
	}
}
void arrDisco::AgregarColison(Graphics ^g, int xx,int yy) {
	cDiscos **aux = new cDiscos *[N + 1];
	if (aux != NULL) {
		for (int i = 0; i < N; i++)
			aux[i] = arreglo[i];
		cDiscos *dato = new cDiscoPlomo(xx, yy, 5, 5, "disco_plomo.png", 'p',false);
		aux[N] = dato;
		N++;
		if (arreglo != NULL)
			delete arreglo;
		arreglo = aux;
	}
}
int arrDisco::GET_N() { return N; }
cDiscos *arrDisco::GET_Discos(int indice) { return arreglo[indice]; }

void arrDisco::EliminarPorChoque(){
	for (int i = 0; i < N; i++) {
		arreglo[i]->SET_Choque(true);
	}

	for (int i = 0; i < N; i++) {
		if (arreglo[i]->GET_elimina() == true) {
			cDiscos **aux = new cDiscos*[N - 1];
			for (int k = 0; k <= i - 1; k++)
				aux[k] = arreglo[k];
			for (int k = i + 1; k < N; k++)
				aux[k - 1] = arreglo[k];
			delete arreglo;
			N--;

			arreglo = aux;
		}
	}
}