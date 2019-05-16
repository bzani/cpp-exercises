#include "ponto.h"

int main() {
	Ponto p(1, 1);
	Ponto q(2, 2);
	Ponto r(3, 3);

	// Estilo novo
	Ponto s = p + q + r;
	s.imprime();

	s = (p + q + r * 3) - q * 3;
	s = s * 3;
	s.imprime();

	// Estilo antigo
//	Ponto s;
//	s = p.soma(q);
//	s = s.soma(r);
//	s.imprime();


}
