#ifndef _PONTO_H_
#define _PONTO_H_

#include <iostream>

using namespace std;

class Ponto {
	public:
		// Construtores
		Ponto();
		Ponto(int, int);
		// Destrutores
		~Ponto();
		// Setters
		void setX(int x)	{ _x = x; }
		void setY(int y)	{ _y = y; }
		// Getters
		int getX()			{ return _x; }
		int getY()			{ return _y; }
		// Metodos
		void imprime();
		float distancia(Ponto p2);
		
	private:
		int _x;
		int _y;

};

#endif
		
