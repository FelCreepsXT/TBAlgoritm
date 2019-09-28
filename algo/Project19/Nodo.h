#pragma once
#include "string"

template<class T>
class Nodo {
public:
	Nodo<T>*siguiente;
	T valor;
public:
	Nodo(T valor, Nodo<T>*siguiente = nullptr) {
		this->valor = valor;
		this->siguiente = siguiente;
	}

	~Nodo(){}
};