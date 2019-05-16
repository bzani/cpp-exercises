#ifndef _BICICLETA_H_
#define _BICICLETA_H_

#include "Veiculo.h"

#include <string>
#include <iostream>

using namespace std;

class Bicicleta : public Veiculo  {
	public:
		// Construtores/Destrutores
		Bicicleta() {};
		~Bicicleta() {};
		
		// Getters
		bool getCestinha()	{ return _cestinha; }
		
		// Setters 
		void setCestinha(bool cestinha = false) { _cestinha = cestinha; }
		
		// Metodos 
		void imprime();
		
		//cout override
		friend ostream& operator<<(ostream& out, Bicicleta& b)
		{
		    out << b.getCodigo() << " " << b.getModelo() << " " << b.getCor() << " " << b.getCestinha() << endl;
		    return out;
		}
		
		//cin override
		friend istream& operator>>(istream& in, Bicicleta& b)
		{
			string codigo;
			string modelo;
			string cor;
			bool cestinha;
		    
			in >> codigo;
		    in >> modelo;
		    in >> cor;
		    in >> cestinha;
		    
			b.setCodigo(codigo);
		    b.setModelo(modelo);
		    b.setCor(cor);
		    b.setCestinha(cestinha);
		    
		    return in;
		}
	private:
		// Atributos
		bool _cestinha;		
};

#endif
