#include "Produto.h"
#include <iostream>
#include <iomanip>

void Produto::imprime() { 
	cout << "-- PRODUTO -- " << endl;
	cout << "Id..........: " << _id    << endl;
	cout << "Nome........: " << _nome  << endl;
	cout << "Descricao...: " << _descr << endl;
	cout << "Preco.......: " << _preco << endl;
	cout << "Quantidade..: " << _qtde  << endl;
	cout << endl;
}

float Produto::calculaTotal() { 
	return (_qtde * _preco); 
}

