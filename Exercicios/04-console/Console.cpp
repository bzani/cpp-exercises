#include "Console.h"
#include <iostream>
#include <iomanip>

void Console::imprime() { 
	cout << "-- CONSOLE -- " << endl;
	cout << "Id..........: " << _id    << endl;
	cout << "Nome........: " << _nome  << endl;
	cout << "Descricao...: " << _descr << endl;
	cout << "Preco.......: " << _preco << endl;
	cout << "Quantidade..: " << _qtde  << endl;
	cout << endl;
}

float Console::calculaTotal() { 
	float preco_desc = (_qtde * _preco * 0.9); 
	cout << "Preço da empada com desconto: " << preco_desc << endl;
}

