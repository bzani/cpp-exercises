#ifndef _CONTROLE_LOCADORA_H_
#define _CONTROLE_LOCADORA_H_

#include "TelaLocadora.h"
#include "Vetor.h"
#include "Veiculo.h"
#include "Moto.h"
#include "Bicicleta.h"

class ControleLocadora {
	
	public:
		/**
		 * Construtor/Destrutor
		 **/
	    ControleLocadora();
		~ControleLocadora();
		
		/**
		 * Metodos
		 **/
	    void inicia();

	private:
		/**
		 * Atributos
		 **/
	    TelaLocadora _menu;
	    Vetor<Veiculo> _veiculo;
	
		/**
		 * Metodos internos
		 **/
	    void insere();
	    
		void consulta();
	    
		void lista();

};

#endif
