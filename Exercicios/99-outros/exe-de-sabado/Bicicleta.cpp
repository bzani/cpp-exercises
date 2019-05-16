#include "Bicicleta.h"

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

