#ifndef _CONTROLE_LOCADORA_H_
#define _CONTROLE_LOCADORA_H_

#include "TelaLocadora.h"
#include "Vetor.h"
#include "Veiculo.h"
#include "BicicletaDAO.h"
#include "MotoDAO.h"

class ControleLocadora {
	
	public:
		/**
		 * Construtor/Destrutor
		 **/
	    ControleLocadora() {};
		~ControleLocadora() {};
		
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
	    Vetor<Veiculo> extraiArqDAO();
		void consulta();
		void lista();

};

#endif
