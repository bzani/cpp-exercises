#ifndef _CONTA_CORRENTE_H
#define _CONTA_CORRENTE_H

#include "Conta.h"

#include <iostream>

/** Classe Conta Corrente */
class ContaCorrente : public Conta {
	public:
			// CONSTRUTORES
			ContaCorrente(int numero, string titular) : Conta(numero, titular) {}
			
			// METODOS
			void imprimeExtrato() {
				cout << "-- Conta Corrente --" << endl;
				cout << "Numero..........: " << _numero << endl;
				cout << "Titular.........: " << _titular << endl;
				cout << "Saldo...........: " << _saldo << endl;
				cout << endl;
				
			}
};

#endif
