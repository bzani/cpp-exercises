#ifndef _TELA_MENU_H_
#define _TELA_MENU_H_

#include <iostream>
#include <iomanip>
#include <string>

#include "contato.h"

using namespace std;

/**
 * Define os valores possiveis de uma opcao.
 */
enum Opcao {
    INSERIR = 1,
    CONSULTAR,
    SAIR
};

/**
 * Essa classe controla o menu da aplicacao.
 */
class TelaMenu {
public:
    // ------------------------------------------------------------------------
    // CONSTRUTORES / DESTRUTORES
    // -----------------------------------------------------------------------
    TelaMenu();
    ~TelaMenu();

    // -----------------------------------------------------------------------
    // METODOS
    // -----------------------------------------------------------------------

    // Exibe o menu na tela
    void exibeMenu();

    // Exibe os dados de um contato na tela
    void exibeContato(Contato &contato);

    // Le uma opcao escolhida do teclado
    Opcao leOpcao();

    // Le os dados de um contato do teclado
    Contato leContato();

    // Exibe uma mensagem na tela
    void exibeMsg(string msg);

private:
    // Le uma string do teclado
    string leString(string msg);

};

#endif // TELAMENU_H
