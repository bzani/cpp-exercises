#include "ProdutoDAO.h"

//==============================================================
//	FUNCOES AUXILIARES 
//==============================================================
void msgErro(string msg) {
	cout << "[ERRO] " << msg << " ***" << endl << endl;
};

void msgOK(string msg) {
	cout << "***" << endl;
	cout << msg << endl;
	cout << "***" << endl << endl;
};

//==============================================================
//	FUNCOES AUXILIARES DAO
//==============================================================
// checa se arquivo ja existe

bool ProdutoDAO::arqExiste(const char *filename)
{
  	ifstream ifile(filename);
  	return ifile;
}

// verifica se objeto existe em uma lista
bool ProdutoDAO::prodExiste(Produto p) {
	list<Produto> l = consulta();
	list<Produto>::iterator it;
	for(it = l.begin(); it != l.end(); ++it)
	{
	   	if (*it == p) {
		   return true;
		}
	}
	return false;
}

//==============================================================
//	FUNCOES DAO
//==============================================================
// insere produto no final do arquivo
bool ProdutoDAO::insere(Produto p) {
	if (p.getId() == 0) return false;
	
	ofstream saida("arq.txt", fstream::app);
	
	// verifica se id ja existe
	bool existe = prodExiste(p);
	if (!existe) {
		saida << p;
		msgOK("Produto inserido com sucesso.");
	} else {
		msgErro("Id ja existe! Favor escolher outro ou tecle 0 para cancelar.");
	}
    saida.close();

    return existe;
}

// carrega lista de produtos na memoria
list<Produto> ProdutoDAO::consulta() {
	if (!arqExiste("arq.txt")) {
		ofstream arq("arq.txt");
    	arq.close();
	}

	ifstream leitura("arq.txt");

	list<Produto> l;
	while (!leitura.eof()) {
		Produto prod;
		leitura >> prod;

		// nao insere com id 0 (invalido)
		if (prod.getId() != 0) {
			l.push_back(prod);
		}
	}
	leitura.close();
    
	return l;
}

// lista todos os produtos da memoria
void ProdutoDAO::exibe(list<Produto> l) {

	list<Produto>::iterator it;
	cout << "======== EXIBE PRODUTOS ========" << endl;
	for(it = l.begin(); it != l.end(); ++it)
	{
	   	it->imprime();
	}
	cout << "================================" << endl << endl;
}

// sobrescreve arquivo com lista atual na memoria
void ProdutoDAO::grava(list<Produto> lista) {

	ofstream saida("arq.txt");
	
	list<Produto>::iterator it;
	for (it = lista.begin() ; it != lista.end() ; ++it) {
		saida << *it;
    }

	saida.close();
}

// limpa registro de produtos
bool ProdutoDAO::remove() {

	list<Produto> l;
	grava(l);
	msgOK("Todos os produtos foram removidos com sucesso.");
}

// remove um produto do arquivo
bool ProdutoDAO::remove(int id) {

	list<Produto> l = consulta();

	Produto p(id);
	if (prodExiste(p)) {
		l.remove(p);
		grava(l);
		msgOK("Produto removido com sucesso.");
	} else {
		msgErro("Id nao encontrado!");
	}
	
}

