#ifndef _JOGO_H_
#define _JOGO_H_

#include "Produto.h"
#include <string>

using namespace std;

class Jogo : public Produto {
	public:
		// CONSTRUTORES
		Jogo() { };
		
		// DESTRUTOR
		~Jogo() { };

		// METODOS
		void imprime();
		
};

#endif
