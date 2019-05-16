#ifndef _BICICLETA_H_
#define _BICICLETA_H_

#include "Veiculo.h"

#include <string>
#include <iostream>

using namespace std;

class Bicicleta : public Veiculo  {
	public:
		/**
		 * Construtores/Destrutores
		 **/
		Bicicleta();
		~Bicicleta();
		
		/**
		 * Getters
		 **/
		bool getCestinha()	{ return _cestinha; }
		
		/**
		 * Setters 
		 **/
		void setCestinha(bool cestinha = false) { _cestinha = cestinha; }
		
		/**
		 * Metodos 
		 **/
		void imprime();
		
	private:
		/**
		 * Atributos
		 **/
		bool _cestinha;		
};

#endif
