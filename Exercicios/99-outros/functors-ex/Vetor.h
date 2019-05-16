#ifndef _VETOR_H_
#define _VETOR_H_

#include <iostream>


class Vetor {
public:
	Vetor(int max = 100) {
		_dados = new int[max];
	}
	virtual ~Vetor() {
		delete _dados;
	}

	// retorna um dado do vetor
	int operator() (int i) {
		return _dados[i];
	}

	// retorna um dado do vetor multiplicado pelo fator
	int operator() (int i, int fator) {
		return _dados[i] * fator;
	}
	
	// retorna o endereco de uma posicao do vetor
	int &operator[] (int i) {
		return _dados[i];	
	}


	
private:
	int *_dados;
	

};

#endif
