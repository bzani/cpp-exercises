#ifndef _CONTA_H_
#define _CONTA_H_

#include <string>

using namespace std;

/* Classe Conta */
class Conta {
	public:
			// CONSTRUTORES
			// - Construtor: inicializa atributos. Forma alternativa de inicializar:
			Conta(int numero, string titular) : _numero(numero), _titular(titular), _saldo(0) {}
	
			// DESTRUTORES
			~Conta() {}
			
			// METODOS
			void deposita(double quantia);
			void retira(double quantia);
			void transfere(Conta &outra, double quantia);
			
			// *** Declaracao de um metodo virtual ***
			// - A classe passa a ser abstrata, ou seja, nao pode ser instanciada!
			// - "= 0" no final da declaracao denota ser metodo virtual *puro*
			virtual void imprimeExtrato() = 0;
			
	protected:
			// ATRIBUTOS
			int _numero;
			string _titular;
			double _saldo;
};

#endif
