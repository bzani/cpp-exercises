#ifndef _PONTO_H_
#define _PONTO_H_

#include <iostream>
using namespace std;

class Ponto {
public:
	// Construtor
	Ponto(int x = 0, int y = 0) : _x(x), _y(y) {
		// Faz nada
	}

	// Setters
	void setX(int x) { _x = x; }
	void setY(int y) { _y = y; }

	int getX() { return _x; }
	int getY() { return _y; } 

	// Sobrecarga dos operadores
	Ponto operator+(Ponto outro) {
		Ponto novo;
		novo.setX(_x + outro.getX());
		novo.setY(_y + outro.getY());
		return novo;
	}

	Ponto operator-(Ponto outro) {
		Ponto novo;
		novo.setX(_x - outro.getX());
		novo.setY(_y - outro.getY());
		return novo;
	}

	Ponto operator*(int escalar) {
		Ponto novo;
		novo.setX(_x * escalar);
		novo.setY(_y * escalar);
		return novo;
	}

	Ponto operator*(Ponto outro) {
		Ponto novo;
		novo.setX(_x * outro.getX());
		novo.setY(_y * outro.getY());
		return novo;
	}

	// Operacoes
	Ponto soma(Ponto &outro) {
		Ponto novo;
		novo.setX(_x + outro.getX());
		novo.setY(_y + outro.getY());
		return novo;
	}

	Ponto subt(Ponto &outro) {
		Ponto novo;
		novo.setX(_x - outro.getX());
		novo.setY(_y - outro.getY());
		return novo;
	}

	Ponto mult(int escalar) {
		Ponto novo;
		novo.setX(_x * escalar);
		novo.setY(_y * escalar);
		return novo;
	}

	bool ehIgual(Ponto outro) {
		return _x == outro.getX() && _y == outro.getY();
	}

	void imprime() {
		cout << "(" << _x << ", " << _y << ")" << endl;
	}

private:
	// Coordernadas do ponto
	int _x, _y;
};




#endif
