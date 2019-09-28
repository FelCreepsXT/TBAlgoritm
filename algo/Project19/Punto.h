#pragma once
#include<iostream>
#include <string>
#include <sstream>

class Punto {
private:
	int vida;
public:
	Punto(int vida = 0)
	{
		this->vida = vida;
	}

	int GET_vida() { return vida; }
};