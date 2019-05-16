#ifndef _CONTA_POUPANCA_H
#define _CONTA_POUPANCA_H

#include "Conta.h"

#include <iostream>

/** Classe Conta Big Fat Poupanca */
class ContaPoupanca : public Conta {
	public:
			// CONSTRUTORES
			ContaPoupanca(int numero, string titular) : Conta(numero, titular) {}
			
			// METODOS
			void imprimeExtrato() {
				cout << "-- Conta Poupanca --" << endl;
				cout << "Numero..........: " << _numero << endl;
				cout << "Titular.........: " << _titular << endl;
				cout << "Saldo...........: " << _saldo << endl;
				cout << endl;
				
			}
};

#endif
