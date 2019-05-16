#ifndef _MOTO_H_
#define _MOTO_H_

#include "Veiculo.h"

#include <string>
#include <iostream>

using namespace std;

class Moto : public Veiculo {
	public:
		/**
		 * Construtor/Destrutor
		 **/
		Moto();
		~Moto();
		
		/**
		 * Getters 
		 **/
		string getPlaca() 	 	{ return _placa; }
		int getCilindradas()	{ return _cilindradas; }
		int getAno() 			{ return _ano; }
		
		/**
		 * Setters 
		 **/
		void setPlaca(string placa = "") 			{ _placa = placa; }
		void setCilindradas(int cilindradas = 0)	{ _cilindradas = cilindradas; }
		void setAno(int ano = 1900) 				{ _ano = ano; }
		
		/**
		 * Metodos 
		 **/
		void imprime();
		
	private:
		/**
		 * Atributos
		 **/
		string _placa;
		int _cilindradas;
		int _ano;
};

#endif
