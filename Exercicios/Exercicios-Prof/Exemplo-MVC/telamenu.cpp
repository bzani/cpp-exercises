#include "telamenu.h"

/**
 * Construtor
 */
TelaMenu::TelaMenu() {
}

/**
 * Destrutor
 */
TelaMenu::~TelaMenu() {
}

/**
 * Exibe o menu na tela
 */
void TelaMenu::exibeMenu() {
    cout << " --- MENU --- " << endl;
    cout << "1) Adicionar contato" << endl;
    cout << "2) Consultar contatos" << endl;
    cout << "3) Sair" << endl;
}

/**
 * Exibe os dados de um contato na tela
 */
void TelaMenu::exibeContato(Contato &contato) {
    cout << " --- CONTATOS ---" << endl;
    cout << "Nome......: " << contato.getNome() << endl;
    cout << "Telefone..: " << contato.getTelefone() << endl;
    cout << "Email.....: " << contato.getEmail() << endl;
    cout << endl;
}


/**
 * Le uma opcao escolhida do teclado
 */
Opcao TelaMenu::leOpcao() {
    int opt = 0;
    cout << ">: ";
    cin >> opt;
    cin.ignore(INT_MAX, '\n');
    return Opcao(opt);
}


/**
 * Le os dados de um contato do teclado
 */
Contato TelaMenu::leContato() {
    Contato contato;

    contato.setNome(leString("Nome"));
    contato.setTelefone(leString("Telefone"));
    contato.setEmail(leString("Email"));

    return contato;
}

/**
 * Le e retorna uma string lida do teclado
 */
string TelaMenu::leString(string msg) {

    // Formata a mensagem na tela
    cout << setw(10);
    cout << msg << ": ";

    // Le os dados da string
    string str;
    getline(cin, str);

    return str;
}

/**
 * Exibe uma mensagem na tela.
 */
void TelaMenu::exibeMsg(string msg) {
    cout << "!!! " << msg << " !!!" << endl;
}
