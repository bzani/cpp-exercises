#ifndef _VEICULO_H_
#define _VEICULO_H_

#include <string>
#include <iostream>

using namespace std;

class Veiculo {
	public:
		/**
		 * Construtores/Destrutores
		 **/
		Veiculo() {};
		~Veiculo() {};
		
		/**
		 * Getters
		 **/
		string getCodigo() 	{ return _codigo; }
		string getModelo() 	{ return _modelo; }
		string getCor() 	{ return _cor; }
		
		/**
		 * Setters
		 **/
		void setCodigo(string codigo = "") 	{ _codigo = codigo; }
		void setModelo(string modelo = "") 	{ _modelo = modelo; }
		void setCor(string cor = "") 		{ _cor = cor; }
		
		/**
		 * Metodos
		 **/
		virtual void imprime() = 0;

	protected:
		/**
		 * Atributos
		 **/
		string _codigo;
		string _modelo;
		string _cor;
};

#endif
