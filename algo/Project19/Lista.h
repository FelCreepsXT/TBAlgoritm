#pragma once
#include "Nodo.h"
#include "Punto.h"

template<class T>
class Lista {
private:
	Nodo<T>*inicio;
public:
	Lista() { inicio = nullptr; }
	~Lista() {
		Nodo<T>* temp;
		while (inicio->siguiente != nullptr) {
			temp = inicio;
			inicio = inicio->siguiente;
			delete temp;
			temp = nullptr;
		}
		delete inicio;
		inicio = nullptr;
	}

	void insertarInicio(T elem) {
		Nodo<T>*nodo = new Nodo<T>(elem);
		if (inicio == nullptr)
			inicio = nodo;
		else
			nodo->siguiente = inicio;
		inicio = nodo;
		nodo = nullptr;
	}

	void insertarFinal(T elem) {
		Nodo<T>*temp = inicio;
		while (temp != nullptr) {
			temp = temp->siguiente;
		}
		Nodo<T>*nodo = new Nodo<T>(elem);
		temp->siguiente = nodo;
		nodo = nullptr;
	}

	T eliminarInicio() {
		T eli;
		eli = inicio->valor;
		inicio = inicio->siguiente;
		return eli;
	}

	T eliminarFinal() {
		int pos = -1;
		Nodo<T>*temp = inicio;
		while (temp->siguiente != nullptr) {
			pos++;
			temp = temp->siguiente;
		}
		T eli = temp->valor;

		temp = inicio;
		int posbus = 0;
		while (posbus <= pos - 1) {
			temp = temp->siguiente;
			posbus++;
		}
		temp->siguiente = nullptr;
		return eli;
	}

	int Longitud() {
		if (inicio == nullptr)return 0;

		Nodo<T>*temp = inicio;
		int pos = 0;
		while (temp != nullptr) {
			pos++;
			temp = temp->siguiente;
		}
		return pos;
	}

	T GET_posicion(int pos) {
		//if (pos < 0 || pos>Longitud()) return;
		if (pos == 0) return inicio->valor;

		Nodo<T>*temp = inicio;
		int posi = 0;

		while (temp->siguiente != nullptr && posi < pos - 1) {
			posi++;
			temp = temp->siguiente;
		}
		return temp->valor;
	}
};