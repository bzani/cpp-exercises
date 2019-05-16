#include "ControleLocadora.h"

/*
 * inicia programa
 */
void ControleLocadora::inicia() {

    bool saida = false;

    while (!saida) {
        
		_menu.mostraMenu();
        
		Opcao opt = _menu.leOpcao();

        switch (opt) {

	        case INSERIR:
	            insere();
	            break;
	
	        case CONSULTAR:
	            consulta();
	            break;
	
	        case LISTAR:
	            lista();
	            break;
	
	        case SAIR:
	            saida = true;
	            break;
	
	        default:
	            _menu.mostraMsgErro("Opcao invalida!");
        }
    }
}

/*
 * insere veiculo
 */
void ControleLocadora::insere() {
    // le tipo (moto ou bicicleta)
	Tipo tipo = _menu.leTipo();
	int indice = _veiculo.tamanho();

    // insere moto
	if (tipo == MOTO) {
		Moto *moto = new Moto();
		*moto = _menu.leDadosMoto(indice);
		/* _veiculo += moto;  => usar DAO */
		MotoDAO* mDAO;
		mDAO->insere(*moto);

    // insere bicicleta
	} else if (tipo == BICICLETA) {
		Bicicleta *bicicleta = new Bicicleta();
		*bicicleta = _menu.leDadosBicicleta(indice);
		/* _veiculo += bicicleta;  => usar DAO */
		BicicletaDAO* bDAO;
		bDAO->insere(*bicicleta);
	} else {
        _menu.mostraMsgErro("Veiculo inexistente!");
	}
}

/*
 * extrai todos os veiculos gravados em arquivo
 */
Vetor<Veiculo> ControleLocadora::extraiArqDAO() {
	
	Vetor<Veiculo> v;
	
	// BICICLETA: consulta de arquivo e armazena em lista
	BicicletaDAO bDAO;
	list<Bicicleta> lb;
	lb = bDAO.consulta();
	// integra no vetor de veiculos
	list<Bicicleta>::iterator itB;
	for(itB = lb.begin(); itB != lb.end(); ++itB) {
		cout << "#BICICLETA " << endl; //@teste
		v += itB;
		cout << "#BICICLETA INSERIU" << endl; //@teste
	}
	
	// MOTO: consulta de arquivo e armazena em lista
	MotoDAO mDAO;
	list<Moto> lm = mDAO.consulta();
	// integra no vetor de veiculos
	list<Moto>::iterator itM;
	for(itM = lm.begin(); itM != lm.end(); ++itM) {
		cout << "#MOTO " << endl; //@teste
		v += *itM;
		cout << "#MOTO INSERIU" << endl; //@teste
	}
	
	return v;
}

/**
 * consulta dados de um veiculo
 **/
void ControleLocadora::consulta() {
	int i = _menu.leElemento();
	
	_veiculo = extraiArqDAO();
	
	if (_veiculo.tamanho() == 0) {
		_menu.mostraMsgErro("Nenhum veiculo cadastrado!");
	} else {
		_veiculo[i].imprime();
	}
}

/**
 * Lista todos os veiculos do sistema
 **/
void ControleLocadora::lista() {
	_veiculo = extraiArqDAO();
	
	// imprime veiculos do vetor
	if (_veiculo.tamanho() == 0) {
		_menu.mostraMsgErro("Nenhum veiculo cadastrado!");
	} else {
		for (int i=0; i<_veiculo.tamanho(); i++) {
			_veiculo[i].imprime();
		}
	}
}

