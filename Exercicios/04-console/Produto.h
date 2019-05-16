#ifndef _PRODUTO_H_
#define _PRODUTO_H_

#include <string>

using namespace std;

class Produto {
	public:
		// CONSTRUTORES
		Produto() { 
			_id = 0;
			_nome = "";
			_descr = "";
			_preco = 0;
			_qtde = 0;
		}
		Produto(int id, string nome) { _id = id; _nome = nome; }
		
		// DESTRUTOR
		~Produto() { };

		// SETTERS
		void setId(int id = 0)             { _id = id; }
		void setNome(string nome = "")     { _nome = nome; }
		void setDescr(string descr = "")   { _descr = descr; }
		void setPreco(float preco = 0)     { _preco = preco; }
		void setQtde(int qtde = 0)         { _qtde = qtde; }
		
		// GETTERS
		int getId()         { return _id; }
		string getNome()    { return _nome; }
		string getDescr()   { return _descr; }
		float getPreco()    { return _preco; }
		int getQtde()       { return _qtde; }

		// METODOS
		float calculaTotal();
		void imprime();
		
	protected:
		int _id;
		string _nome;
		string _descr;
		float _preco;
		int _qtde;
		
};

#endif
