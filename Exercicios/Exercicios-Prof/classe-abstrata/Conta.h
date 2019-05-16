


#ifndef _CONTA_H_
#define _CONTA_H_

#include <string>
using namespace std;

/* Classe Conta */
class Conta {
public:
	// CONSTRUTORES
	// - Construtor inicializa atributos
	Conta(int numero, string titular) : _numero(numero),
					    _titular(titular),
					    _saldo(0) {}
	~Conta() {}

	// METODOS
	void deposita(double quantia);
	void retira(double quantia);
	void transfere(Conta &outra, double quantia);

	// Declaracao de um metodo virtual
	// A classe passa a ser abstrata
	// 	- nao pode ser instanciada!!
	virtual void imprimeExtrato() = 0;		

protected:
	// ATRIBUTOS
	int _numero;
	string _titular;
	double _saldo;
};

#endif
