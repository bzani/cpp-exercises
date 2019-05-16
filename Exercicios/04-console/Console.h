#ifndef _CONSOLE_H_
#define _CONSOLE_H_

#include "Produto.h"
#include <string>

using namespace std;

class Console : public Produto {
	public:
		// CONSTRUTORES
		Console() { };
		
		// DESTRUTOR
		~Console() { };

		// SETTERS
		void setNumConsoles(int num_consoles = 0) { _num_consoles = num_consoles; }
		
		// GETTERS
		int getNumConsoles() { return _num_consoles; }

		// METODOS
		float calculaTotal();
		void imprime();
		
	private:
		int _num_consoles;
		
};

#endif
