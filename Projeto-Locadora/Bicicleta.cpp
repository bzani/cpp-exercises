#include "Bicicleta.h"

/**
 * Construtor
 **/
Bicicleta::Bicicleta() {
//	cout << "Chamando o construtor da Bicicleta" << endl;
}

/**
 * Destrutor
 **/
Bicicleta::~Bicicleta() {
//	cout << "Chamando o destrutor da Bicicleta" << endl;
}

/**
 * Implementa a operacao 'imprime'
 **/
void Bicicleta::imprime() {
	string cestinha = _cestinha == false ? "nao" : "sim";
	cout << "*************** " << endl;
	cout << "  BICICLETA     " << endl;
	cout << "*************** " << endl;
	cout << "- Codigo      : " << _codigo << endl;
	cout << "- Modelo      : " << _modelo << endl;
	cout << "- Cor         : " << _cor << endl;
	cout << "- Cestinha    : " << cestinha << endl;
	cout << endl;
}

