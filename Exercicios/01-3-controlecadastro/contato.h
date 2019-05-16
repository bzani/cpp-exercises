#ifndef _CONTATO_H_
#define _CONTATO_H_

#include <string>

using namespace std;

class Contato {
	public:
		
		/* CONSTRUTORES */
		Contato() {
			_nome = "";
			_telefone = "";
			_email = "";
			_idade = 0;
		}
		
		/* AVASSALADORES */
		~Contato() { };
		
		/* SETTERS */
		void setNome (string nome) { _nome = nome; }
		void setEmail (string email) { _email = email; }
		void setTelefone (string telefone) { _telefone = telefone; }
		void setIdade (int idade) { _idade = idade; }
		
		/* GETTERS */
		string getNome() { return _nome; }
		string getEmail() { return _email; }
		string getTelefone() { return _telefone; }
		int getIdade() { return _idade; }
		
		/* FUNCOES */
		void imprime();
	private:
		string _nome, _telefone, _email;
		int _idade;
};

#endif
