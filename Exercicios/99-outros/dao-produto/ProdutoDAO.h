#ifndef _PRODUTO_DAO_H_
#define _PRODUTO_DAO_H_

#include <fstream>
#include <list>

#include "Produto.h"

using namespace std;

void msgErro(string msg);
void msgOK(string msg);

class ProdutoDAO {
	public:
		ProdutoDAO() {};
		~ProdutoDAO() {};
		
		bool arqExiste(const char *filename);		
		bool prodExiste(Produto p);

		bool insere(Produto p);
		list<Produto> consulta();
		void exibe(list<Produto> lista);
		void grava(list<Produto> lista);
		bool remove();
		bool remove(int id);
		
};

#endif

