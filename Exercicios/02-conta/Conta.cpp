#include "Conta.h"

void Conta::deposita(double quantia) {
	_saldo += quantia;
}

void Conta::retira(double quantia) {
	_saldo -= quantia;
}

/* 	
	- NUNCA passar por "copia" um objeto, struct, etc...Pois isso aloca memoria nova 
	  e desnecessaria (ou seja, duplica o objeto/struct/... na memoria) para tratamento
	- Ao inves disso, declarar como ponteiro, assim tratamos o objeto diretamente.
	- Formas de declarar:
	void funcao(Objeto *obj) : na funcao referenciar com "this->atributo"
	void funcao(Objeto &obj) : na funcao referenciar normalmente "atributo" --> *best way*
	void funcao(const Objeto &obj) : na funcao o objeto nao vai ser alterado
*/
void Conta::transfere(Conta &outra, double quantia) { 
	this->retira(quantia);
	outra.deposita(quantia);
}


