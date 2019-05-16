#ifndef _ALUNO_H_
#define _ALUNO_H_

#include <iostream>
#include <string>

using namespace std;

class Aluno {
	
	public:
		//construtor/destrutor
		Aluno(string nome="", string matricula="", int idade=0, int tamanho=10)
		{ 
			_nome = nome;
			_matricula = matricula;
			_idade = idade;
			_disciplinas = new string[tamanho];
		};
		~Aluno() { };
		
	    //getters
		string getNome() { return _nome; }
	    string getMatricula() { return _matricula; }
	    int getIdade() { return _idade; }
	    
	    //setters
		void setNome(string nome="") { _nome = nome; }
	    void setMatricula(string matricula="") { _matricula = matricula; }
	    void setIdade(int idade=0) { _idade = idade; }
		
		//cout override
		friend ostream& operator<<(ostream& out, Aluno& aluno)
		{
		    out << aluno.getNome();
		    return out;
		}

	private:
		//atributos
		string _nome;
		string _matricula;
		int _idade;
		string *_disciplinas;
};

#endif
