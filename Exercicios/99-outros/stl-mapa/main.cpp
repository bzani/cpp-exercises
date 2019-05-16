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
	
	// iterator
    map<string, string>::iterator it;

	// loop de leitura
	cout << "Digite nome da cor e em seguida valor RGB | zero para parar" << endl << endl;

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
		    it = m1.find(rgb);
		    if (it == m1.end()) {
		    	m1.insert(pair<const string, string>(rgb, nome_cor));
			} else {
				cout << "Valor RGB ja fornecido! Tente outro valor" << endl;
			}
		}
	}

    // finaliza gravacao de cores no mapa; inicia leitura de cores por RGB
	cout << endl << "--" << endl;
    cout << "INFORMACOES SALVAS..." << endl;
    cout << endl;
	cout << "--" << endl;
    cout << "Realizar leitura de cores...Informe valor RGB | zero para sair" << endl;

	while (true) {
		
		// le entrada
		cin >> rgb;

		// verifica se quebra loop
		if (rgb.compare("0") == 0) {
			break;
		}

		// trata entradas
		if (rgb == "") {
			cout << "Valor RGB invalido." << endl;;
		} else {
		    map<string, string>::iterator it;
		    it = m1.find(rgb);
		    if (it == m1.end()) {
		        cout << "Nao achou!" << endl << endl;
			} else {
		    	cout << "Cor: " << it->second << endl << endl;
			}
		}
	}

	return 0;	
}
