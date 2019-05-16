#include "contato.h"

/**
 * Construtor
 */
Contato::Contato() {
    _nome = "";
    _telefone = "";
    _email = "";
}


void Contato::setNome(string nome) {
    _nome = nome;
}

void Contato::setTelefone(string telefone) {
    _telefone = telefone;
}

void Contato::setEmail(string email) {
    _email = email;
}

string Contato::getNome() {
    return _nome;
}

string Contato::getTelefone() {
    return _telefone;
}

string Contato::getEmail() {
    return _email;
}
