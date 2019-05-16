#ifndef _CONTROLE_AGENDA_H
#define _CONTROLE_AGENDA_H

#include "telamenu.h"
#include "contato.h"

/**
 * Classe que controla a agenda
 */
class ControleAgenda {
public:
    // ------------------------------------------------------------------------
    // CONSTRUTORES / DESTRUTORES
    // -----------------------------------------------------------------------

    ControleAgenda();
    virtual ~ControleAgenda();

    // -----------------------------------------------------------------------
    // METODOS
    // -----------------------------------------------------------------------

    void inicia();

private:

    // -----------------------------------------------------------------------
    // ATRIBUTOS
    // -----------------------------------------------------------------------
    TelaMenu _menu;
    Contato *_contatos;
    int _numContatos;

    // Metodos internos
    void insere();
    void consulta();

};

#endif // CONTROLEAGENDA_H
