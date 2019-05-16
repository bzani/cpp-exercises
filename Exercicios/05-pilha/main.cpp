#include "pilha.h"

int main () {
	
	//	Pilha p;

	Pilha<int> p1;
	p1 += 3;
	p1 += 4;
	p1 += 5;
	
	while (!p1.estaVazio()) {
		cout << p1-- << endl;
	}

	Pilha<string> p2;
	p2 += "oi";
	p2 += "tudo";
	p2 += "bem";
	
	while (!p2.estaVazio()) {
		cout << p2-- << endl;
	}

}

