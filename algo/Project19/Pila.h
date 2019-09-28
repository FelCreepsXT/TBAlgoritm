#pragma once
#include "lista.h"

template<class T>
class Pila {
private:
	Lista<T> stck;
public:
	Pila<T>() {}

	void push(T e) {
		stck.insertarInicio(e);
	}

	T pop() {
		return(stck.eliminarInicio());
	}

	T peek() {
		return(stck.GET_posicion(1));
	}

	bool empty() {
		return(stck.Longitud() == 0);
	}

	int size() {
		return(stck.Longitud());
	}

};