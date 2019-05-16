#ifndef _MOTO_H_
#define _MOTO_H_

#include "Veiculo.h"

#include <string>
#include <iostream>

using namespace std;

class Moto : public Veiculo {
	public:
		// Construtor/Destrutor
		Moto() {};
		~Moto() {};
		
		// Getters 
		string getPlaca() 	 	{ return _placa; }
		int getCilindradas()	{ return _cilindradas; }
		int getAno() 			{ return _ano; }
		
		// Setters 
		void setPlaca(string placa = "") 			{ _placa = placa; }
		void setCilindradas(int cilindradas = 0)	{ _cilindradas = cilindradas; }
		void setAno(int ano = 1900) 				{ _ano = ano; }
		
		// Metodos 
		void imprime();
		

		//cout override
		friend ostream& operator<<(ostream& out, Moto& m)
		{
		    out << m.getCodigo() << " " << m.getModelo() << " " << m.getCor() << " " << m.getPlaca() << " " << m.getCilindradas() << " " << m.getAno() << endl;
		    return out;
		}
		
		//cin override
		friend istream& operator>>(istream& in, Moto& m)
		{
			string codigo;
			string modelo;
			string cor;
			string placa;
			int cilindradas;
			int ano;
		    
			in >> codigo;
		    in >> modelo;
		    in >> cor;
		    in >> placa;
		    in >> cilindradas;
		    in >> ano;
		    
			m.setCodigo(codigo);
		    m.setModelo(modelo);
		    m.setCor(cor);
		    m.setPlaca(placa);
		    m.setCilindradas(cilindradas);
		    m.setAno(ano);
		    
		    return in;
		}

	private:
		// Atributos
		string _placa;
		int _cilindradas;
		int _ano;
};

#endif
