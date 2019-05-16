#ifndef _HOMEM_H_
#define _HOMEM_H_

#include <string>
#include <iostream>

using namespace std;

class Homem {
	public:
		// CONSTRUTORES
		// - exemplo abaixo atribui um valor "default" para o construtor, ou seja,
		//   eh como se estivessemos declarando um construtor vazio (nome = "") e 
		//   outro inicializador (nome = nome)
		Homem(string nome = "") {  
			_nome = nome;
		}
		
		// METODOS
		void setNome(string nome) { 
			_nome = nome; 
		}
		
		void anda() { 
			cout << _nome << " andando..." << endl;
		}
		
		// - neste caso nao podemos usar o construtor "malandro": void anda(int vel = 0)
		//   pois ja declaramos um construtor vazio logo acima
		void anda(int vel) {
			cout << _nome << " andando a " << vel << "m/s" << endl;
		}
			
		void corre() { 
			cout << _nome << " correndo..." << endl;
		}
		
	protected:
		string _nome;
		
};

#endif
