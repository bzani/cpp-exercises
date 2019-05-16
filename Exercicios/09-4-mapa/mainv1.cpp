/*
#include <stdlib.h>
#include <string>
#include <iostream>
#include <map>

using namespace std;

int main() {

	// variaveis de contorle
	string ent1;
	string nome_cor;
	string rgb;

	// mapa
	map<string, string> m1;
	
	// loop de leitura
	cout << "Digite nome da cor e em seguida valor RGB | zero para sair" << endl << endl;

	while (true) {
		
		// le entrada
		cout << "Nome da cor: ";
		cin >> ent1;

		// verifica se quebra loop
		if (ent1.compare("0") == 0) {
			break;
		}

		nome_cor = ent1;
		
		cout << "RGB: ";
		cin >> rgb;

		cout << endl;

		// trata entradas
		if (nome_cor == "" || rgb == "") {
			cout << "Entrada invalida, forneca as informacoes corretamente <nome da cor ; #rgb>" << endl;;
		} else {
			m1.insert(pair<const string, string>(nome_cor, rgb));
		}
	}

    // imprime elementos do mapa com funcoes
	cout << "------------" << endl;
    cout << "imprime mapa" << endl;
    cout << "------------" << endl;
    cout << "nome\tRGB" << endl;
    cout << "------------" << endl;

    map<string, string>::iterator it;
    for (it = m1.begin() ; it != m1.end() ; it++) {
        cout << it->first << "\t";
        cout << it->second << endl;
    }
	
	return 0;	
}
*/
