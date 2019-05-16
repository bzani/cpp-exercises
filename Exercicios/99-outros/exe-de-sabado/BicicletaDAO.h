#ifndef _BICICLETA_DAO_H_
#define _BICICLETA_DAO_H_

#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <list>
#include "Bicicleta.h"

using namespace std;

class BicicletaDAO {
	public:
		BicicletaDAO() {};
		~BicicletaDAO() {};
		
		void insere(Bicicleta b1);
		list<Bicicleta> consulta();

		bool arqExiste(const char *filename);		
};


#endif
