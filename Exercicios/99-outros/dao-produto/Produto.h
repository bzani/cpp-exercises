#ifndef _PRODUTO_H_
#define _PRODUTO_H_

#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

class Produto {
	public:
		// construtor-destrutor
		Produto(int id, string descr, float preco) {
			_id = id;
			_descr = descr;
			_preco = preco;
		};
		Produto(int id) { _id = id; };
		Produto() {};
		~Produto() {};
		
		// getters
		int getId() { return _id; }
		string getDescr() { return _descr; }
		float getPreco() { return _preco; }
		
		// setters
		void setId(int id) { _id = id; }
		void setDescr(string descr) { _descr = descr; }
		void setPreco(float preco) { _preco = preco; }
		
		// funcoes auxiliares
		string repl(string s, char c1, char c2);
		int leId();
		string leDescr();
		string dsDescr(string ds);
		float lePreco();

		// metodos
		void criaProduto();
		void imprime();
		
		//cout override
		friend ostream& operator<<(ostream& out, Produto& prod)
		{
		    out << prod.getId() << " " << prod.getDescr() << " " << prod.getPreco() << endl;
		    return out;
		}
		
		//cin override
		friend istream& operator>>(istream& in, Produto& prod)
		{
		    int id;
		    string descricao;
		    float preco;
		    
			in >> id;
		    in >> descricao;
		    in >> preco;
		    
			prod.setId(id);
		    prod.setDescr(descricao);
		    prod.setPreco(preco);
		    
		    return in;
		}

		bool operator==(Produto p1)
		{
		    return (p1.getId() == _id);
		}
		
	private:
		// atributos
		int _id;
		string _descr;
		float _preco;
};

#endif

