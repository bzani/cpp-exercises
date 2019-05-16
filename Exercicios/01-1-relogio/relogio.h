#ifndef _RELOGIO_H_
#define _RELOGIO_H_

#include <iostream>

using namespace std;

class Relogio {
	public:
		// Construtores
		Relogio();
		Relogio(int,int,int);
		//Destrutor
		~Relogio();
		// Setters
		void setHora(int);
		void setMinuto(int);
		void setSegundo(int);
		// Getters
		int getHora()    { return _h; }
		int getMinuto()  { return _m; }
		int getSegundo() { return _s; }
		// Metodos
		void imprime();
		void soma(Relogio);
		
	private:
		int _h;
		int _m;
		int _s;
};

#endif

