#include "MotoDAO.h"

// insere moto no arquivo de dados "motos.txt"
void MotoDAO::insere(Moto m1) {
	ofstream saida("motos.txt", fstream::app);
	saida << m1;
    saida.close();
}

// le registros do arquivo de motos e retorna lista
list<Moto> MotoDAO::consulta() {
	// verifica se arquivo existe
	if (!arqExiste("motos.txt")) {
		ofstream arq("motos.txt");
    	arq.close();
	}

	// abre arquivo para leitura
	ifstream leitura("motos.txt");

	list<Moto> l;
	// loop de leitura/insercao na lista
	while (!leitura.eof()) {
		Moto m;
		leitura >> m;
		l.push_back(m);
	}
	leitura.close();
    
	return l;
}

bool MotoDAO::arqExiste(const char *filename)
{
  	ifstream ifile(filename);
  	return ifile;
}

