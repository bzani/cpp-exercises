#ifndef _TELA_LOCADORA_H_
#define _TELA_LOCADORA_H_

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <stdlib.h>

#include "Veiculo.h"
#include "Moto.h"
#include "Bicicleta.h"

using namespace std;

/**
 * Tipos Enumeradas
 **/
enum Opcao {
    INSERIR = 1,
    CONSULTAR,
    LISTAR,
    SAIR
};

enum Tipo {
    MOTO = 1,
    BICICLETA
};

class TelaLocadora {
	public:
		/**
		 * Construtor/Destrutor
		 **/
		TelaLocadora();
		~TelaLocadora();

		/**
		 * Metodos
		 **/
	    
		// de saida
		void mostraMenu();
	    
    	void mostraMsgErro(string msg);

		// de entrada
		Opcao leOpcao();
		
		Tipo leTipo();
		
		int leElemento();

		Moto leDadosMoto(int i);
		
		Bicicleta leDadosBicicleta(int i);

	private:
		/**
		 * Atributos
		 **/
		string leString(string str);
		int leNumero(string str);
		bool leBoolean(string str);
};

#endif
