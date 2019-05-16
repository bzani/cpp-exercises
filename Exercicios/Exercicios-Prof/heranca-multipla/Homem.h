#ifndef _HOMEM_H_
#define _HOMEM_H_

#include <string>
#include <iostream>

using namespace std;

class Homem {
public:
	// CONSTRUTORES
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
	
	void anda(int vel) {
		cout << _nome << " andando a " << vel << "m/s" << endl;
	}

	void corre() {
		cout << _nome << " correndo..." << endl;
	}

protected:
	// ATRIBUTOS	
	string _nome;

};











#endif

