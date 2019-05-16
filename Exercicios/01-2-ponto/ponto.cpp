#include "ponto.h"

Ponto::Ponto(int x, int y) {
	cout << "Chamando construtor das Coordenadas-das-das" << endl;
	_x = x;
	_y = y;
};

Ponto::~Ponto() {
	cout << "Chamando destroçador das coordenadas-das" << endl;
};

void Ponto::imprime() {
	cout << "Ponto: (" << _x << "," << _y << ")" << endl;
}

float Ponto::distancia(Ponto p) {
	cout << "Distancia:" << "?" << endl;
	return 0;
}
