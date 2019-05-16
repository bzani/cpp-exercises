#include "Moto.h"

/**
 * Construtor
 */
Moto::Moto() {
//	cout << "Chamando o construtor da Moto" << endl;
}

/**
 * Destrutor
 */
Moto::~Moto() {
//	cout << "Chamando o destrutor da Moto" << endl;
}

/**
 * Implementa a operacao 'imprime'
 **/
void Moto::imprime() {
	cout << "*************** " << endl;
	cout << "  MOTO          " << endl;
	cout << "*************** " << endl;
	cout << "- Codigo      : " << _codigo << endl;
	cout << "- Modelo      : " << _modelo << endl;
	cout << "- Cor         : " << _cor << endl;
	cout << "- Placa       : " << _placa << endl;
	cout << "- Cilindradas : " << _cilindradas << endl;
	cout << "- Ano         : " << _ano << endl;
	cout << endl;
}

