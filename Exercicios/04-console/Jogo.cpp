#include "Jogo.h"
#include <iostream>
#include <iomanip>

void Jogo::imprime() { 
	cout << "-- JOGO -- " << endl;
	cout << "Id..........: " << _id    << endl;
	cout << "Nome........: " << _nome  << endl;
	cout << "Descricao...: " << _descr << endl;
	cout << "Preco.......: " << _preco << endl;
	cout << "Quantidade..: " << _qtde  << endl;
	cout << endl;
}

