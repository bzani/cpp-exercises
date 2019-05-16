#include <stdlib.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

class Produto {
	public:
		// construtor
		Produto(int id=0, string descr="", float preco=0) {
			_id = id;
			_descr = descr;
			_preco = preco;
		}
		// destrutor
		~Produto() {};
		
		// getters
		int getId() { return _id; }
		string getDescr() { return _descr; }
		float getPreco() { return _preco; }
		
		// setters
		void setId(int id) { _id = id; }
		void setDescr(string descr) { _descr = descr; }
		void setPreco(float preco) { _preco = preco; }

		// imprime
		void imprime() { 
			cout << "-------------------------------" << endl;
			cout << "Id\t\t" << _id << endl;
			cout << "Descricao\t" << _descr << endl;
			cout << "Preco\t\t" << _preco << endl;
			cout << "-------------------------------" << endl << endl;
		}
		
	private:
		// atributos
		int _id;
		string _descr;
		float _preco;
};

int main() {

	// variaveis de contorle
	int opc;

	// variaveis auxiliares
	int id;
	string descr;
	float preco;
	Produto p1;
	list<Produto>::iterator it;

	// lista
	list<Produto> l1;
	
	while (true) {
		
		// loop de leitura
		cout << "-------------------------------" << endl;
		cout << "Escolha uma das opcoes:" << endl;
		cout << "1-cadastrar produto" << endl;
		cout << "2-exibir produto" << endl;
		cout << "3-remover produto" << endl;
		cout << "0-sair" << endl;
		cout << "-------------------------------" << endl;
		
		cout << endl;
		cout << ": ";
		cin >> opc;
		cout << endl;
	
		// verifica se quebra loop
		if (opc == 0) {
			break;
		}

		// trata entradas
		switch (opc) {
			
			// *** INSERE ***
			case 1:
				
				cout << "Informe os dados a seguir" << endl;
				cout << "id: ";
				cin >> id;
				cout << "descricao: ";
				cin >> descr;
				cout << "preco: ";
				cin >> preco;
				cout << endl;
				
				p1 = Produto(id, descr, preco);
				l1.push_back(p1);
				break;
				
			// *** CONSULTA ***
			case 2:
				cout << "Informe o id do produto para exibir: ";
				cin >> id;
				
				for(it = l1.begin(); it != l1.end(); ++it)
				{
				    if(it->getId() == id) {
				    	it->imprime();
						break;
					}
				}
				if (it == l1.end()) {
					cout << endl << "Produto nao encontrado!" << endl << endl;
				}
				break;

			// *** REMOVE ***
			case 3:
				cout << "Informe o id do produto para remover: ";
				cin >> id;
				
				for(it = l1.begin(); it != l1.end(); ++it)
				{
				    if(it->getId() == id) {
				    	l1.erase(it);
						cout << endl << "Produto removido com sucesso!" << endl << endl;
						break;
					}
				}
				if (it == l1.end()) {
					cout << endl << "Produto nao encontrado!" << endl << endl;
				}
		    	
		    	break;
		    	
			// *** NADA ***
		  	default:
		  		cout << "Opcao invalida!" << endl;
    			break;

						  		
		}
	}

	return 0;	
}

