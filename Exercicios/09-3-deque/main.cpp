#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <deque>

#define TAM 10

using namespace std;

int main() {

	// variaveis de contorle
	char e[10];
	int ent=0;

	// deque
	deque<int> d1;
	
	// loop de leitura
	cout << "Digite um numero terminado com zero | zero para sair" << endl;

	while (true) {
		
		// le entrada
		cin >> e;
		ent = atoi(e);
		
		// verifica se quebra loop
		if (ent == 0) {
			break;
		}
		
		// trata numero lido
		if (ent % 10 != 0) {
			cout << "ERRO:: numero digitado nao termina com zero, abestado!" << endl;;

		} else {
			d1.push_back(ent);
		}
	}
	
    // realiza ordenacao no deque
	sort(d1.begin(), d1.end());

    // imprime elementos do deque com iterator
	cout << "-------------" << endl;
    cout << "imprime deque" << endl;
    cout << "-------------" << endl;
	deque<int>::iterator it;
    for (it = d1.begin() ; it != d1.end() ; it++) {
        cout << *it << endl;
    }
	
	return 0;	
}
