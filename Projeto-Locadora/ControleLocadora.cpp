#include "ControleLocadora.h"

/**
 * Construtor
 **/
ControleLocadora::ControleLocadora() {
}

/**
 * Destrutor
 **/
ControleLocadora::~ControleLocadora() {
}

/**
 * Inicia processamento do sistema
 **/
void ControleLocadora::inicia() {

    bool saida = false;

    while (!saida) {
        
		// Exibe o menu
		_menu.mostraMenu();

        // le opcao do usuario
        Opcao opt = _menu.leOpcao();

        // Trata a opcao
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

/**
 * Insere veiculo no sistema
 **/
void ControleLocadora::insere() {
	Tipo tipo = _menu.leTipo();
	int indice = _veiculo.tamanho();

    // Trata a opcao
    if (tipo == MOTO) {
		Moto *moto = new Moto();
		*moto = _menu.leDadosMoto(indice);
		_veiculo += moto;
	} else if (tipo == BICICLETA) {
		Bicicleta *bicicleta = new Bicicleta();
		*bicicleta = _menu.leDadosBicicleta(indice);
		_veiculo += bicicleta;
	} else {
        _menu.mostraMsgErro("Veiculo inexistente!");
	}
}

/**
 * Consulta dados de um veiculo
 **/
void ControleLocadora::consulta() {
	int i = _menu.leElemento();
	if (i >= 0 && i < _veiculo.tamanho()) {
		_veiculo[i].imprime();
	} else {
		_menu.mostraMsgErro("Identificador nao encontrado!");
	}
}

/**
 * Lista todos os veiculos do sistema
 **/
void ControleLocadora::lista() {
	if (_veiculo.tamanho() == 0) {
		_menu.mostraMsgErro("Nenhum veiculo cadastrado!");
	} else {
		for (int i=0; i<_veiculo.tamanho(); i++) {
			_veiculo[i].imprime();
		}
	}
}

