


#include "Conta.h"

void Conta::deposita(double quantia) {
	_saldo += quantia;
}

void Conta::retira(double quantia) {
	_saldo -= quantia;
}


void Conta::transfere(Conta &outra, double quantia) {
	this->retira(quantia);
	outra.deposita(quantia);
}

// exemplo de chamada da funcao
//	troca(x, y);

void troca(int &a, int &b) {
	int aux = a;
	a = b;
	b = aux;
}

//	troca(&x, &y);
// void troca(int *a, int *b) {
//	int aux = *a;
//	*a = *b;
//	*b = aux;
//}










