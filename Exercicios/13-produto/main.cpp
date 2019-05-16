#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

class Produto {
    public:
        Produto(int id=0, string nome="", float preco=0, int qtde=0) {
            _id = id;
            _nome = nome;
            _preco = preco;
            _qtde = qtde;
        }
        
        int getId() { return _id; }
        string getNome() { return _nome; }
        float getPreco() { return _preco; }
        int getQtde() { return _qtde; }
        
        void setId(int id) { _id = id; }
        void setNome(string nome) { _nome = nome; }
        void setPreco(float preco) { _preco = preco; }
        void setQtde(int qtde) { _qtde = qtde; }
        
        void imprime() {
            cout << "+------------+" << endl;
            cout << "|   PRODUTO  |" << endl;
            cout << "+------------+" << endl;
            cout << "id:\t" << _id << endl;
            cout << "nome:\t" << _nome << endl;
            cout << "preco:\t" << _preco << endl;
            cout << "qtde:\t" << _qtde << endl;
            cout << endl;
        }
        
		//cout override
		friend ostream& operator<<(ostream& out, Produto& prod)
		{
            out << prod.getId() << " " << prod.getNome() << " " << prod.getPreco() << " " << prod.getQtde();
		    return out;
		}

		//cin override
		friend istream& operator>>(istream& in, Produto& prod)
		{
		    int id;
		    string nome;
		    float preco;
		    int qtde;
		    
			in >> id;
		    in >> nome;
		    in >> preco;
		    in >> qtde;
		    
			prod.setId(id);
		    prod.setNome(nome);
		    prod.setPreco(preco);
		    prod.setQtde(qtde);
		    
		    return in;
		}

    private:
        int _id;
        string _nome;
        float _preco;
        int _qtde;
};

int main() {

	list<Produto> lista;
	list<Produto>::iterator it;
	
	// abre o modulo
	ifstream leitura("arq.txt");
	
	// leitura dos dados
	while (!leitura.eof()) {

	    // leitura do arquivo modo 1
		/* 
		int id;
	    leitura >> id;
	    
	    string nome;
	    leitura >> nome;
	    
	    float preco;
	    leitura >> preco;
	    
	    int qtde;
	    leitura >> qtde;
		
		Produto prod(id, nome, preco, qtde);
	    */

	    // leitura do arquivo modo 2 *hard*
		Produto prod;
		leitura >> prod;

	    lista.push_back(prod);
		
	}
    leitura.close();
	
	// escreve saida
	ofstream saida("saida.txt");
	
	for (it = lista.begin() ; it != lista.end() ; it++) {

    	// imprime modo 1
		// Produto pr = *it;
    	// pr.imprime();

    	// imprime modo 2
    	it->imprime();

    	// escrever modo *hard*
		saida << *it << endl;
    }

};

