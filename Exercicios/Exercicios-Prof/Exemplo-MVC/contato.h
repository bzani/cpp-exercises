#ifndef _CONTATO_H_
#define _CONTATO_H_

#include <string>
using namespace std;

/**
 * Define os dados de um contato
 */
class Contato {
public:
    // ------------------------------------------------------------------------
    // CONSTRUTORES / DESTRUTORES
    // -----------------------------------------------------------------------
    Contato();

    // -----------------------------------------------------------------------
    // METODOS
    // -----------------------------------------------------------------------

    void setNome(string nome);
    void setTelefone(string telefone);
    void setEmail(string email);

    string getNome();
    string getTelefone();
    string getEmail();


    // -----------------------------------------------------------------------
    // ATRIBUTOS
    // -----------------------------------------------------------------------
private:
    string _nome;
    string _telefone;
    string _email;

};

#endif // CONTATO_H
