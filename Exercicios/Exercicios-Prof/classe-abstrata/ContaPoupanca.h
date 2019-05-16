



#ifndef _CONTA_POUPANCA_H_
#define _CONTA_POUPANCA_H_

#include <iostream>

#include "Conta.h"

/** Classe Conta Poupanca */
class ContaPoupanca : public Conta {
public:
	// CONSTRUTORES
	ContaPoupanca(int numero, string titular) : Conta(numero, 
							  titular) {}


	// METODOS
	void imprimeExtrato() {
		cout << "*** Conta Poupanca ***" << endl;
		cout << "Numero....: " << _numero << endl;
		cout << "Titular...: " << _titular << endl;
		cout << "Saldo.....: " << _saldo << endl;
		cout << endl;	
	}

};


#endif
