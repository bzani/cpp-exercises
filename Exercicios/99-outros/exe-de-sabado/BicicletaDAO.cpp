#include "BicicletaDAO.h"

// insere bicicleta no arquivo de dados "bicicleta.txt"
void BicicletaDAO::insere(Bicicleta b1) {
	ofstream saida("bicicletas.txt", fstream::app);
	saida << b1;
    saida.close();
}

// le registros do arquivo de bicicletas e retorna lista
list<Bicicleta>* BicicletaDAO::consulta() {
	// verifica se arquivo existe
	if (!arqExiste("bicicletas.txt")) {
		ofstream arq("bicicletas.txt");
    	arq.close();
	}

	// abre arquivo para leitura
	ifstream leitura("bicicletas.txt");

	list<Bicicleta>* l;
	// loop de leitura/insercao na lista
	while (!leitura.eof()) {
		Bicicleta b = new Bicicleta();
		leitura >> b;
		l.push_back(b);
	}
	leitura.close();
    
	return l;
}

bool BicicletaDAO::arqExiste(const char *filename)
{
  	ifstream ifile(filename);
  	return ifile;
}

