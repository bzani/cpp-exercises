#ifndef _MOTO_DAO_H_
#define _MOTO_DAO_H_

#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <list>
#include "Moto.h"

using namespace std;

class MotoDAO {
	public:
		MotoDAO() {};
		~MotoDAO() {};
		
		void insere(Moto m1);
		list<Moto> consulta();

		bool arqExiste(const char *filename);		
};

#endif
