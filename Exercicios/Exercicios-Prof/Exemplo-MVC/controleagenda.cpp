#include "controleagenda.h"

ControleAgenda::ControleAgenda() {
    _contatos = new Contato[100];
    _numContatos = 0;
}

ControleAgenda::~ControleAgenda() {
    delete _contatos;
}

/**
 * Gerencia a aplicacao
 */
void ControleAgenda::inicia() {

    bool saida = false;

    while (!saida) {
        // Exibe o menu
        _menu.exibeMenu();

        // le uma opcao do menu
        Opcao opt = _menu.leOpcao();

        // Trata a opcao
        switch (opt) {

        case INSERIR:
            insere();
            break;

        case CONSULTAR:
            consulta();
            break;

        case SAIR:
            saida = true;
            break;

        default:
            _menu.exibeMsg("Opcao invalida!");
        }
    }
}

/**
 * Insere um contato na agenda
 */
void ControleAgenda::insere() {
    Contato contato = _menu.leContato();
    _contatos[_numContatos] = contato;
    _numContatos++;
}

/**
 * Consuta os dados de todos contatos da agenda
 */
void ControleAgenda::consulta() {
    for (int i = 0; i < _numContatos; ++i) {
        _menu.exibeContato(_contatos[i]);
    }
}



