#ifndef _VETOR_H_
#define _VETOR_H_

#include <iostream>
#include <string>

using namespace std;

template <class T> class Vetor {
	public:
		/**
		 * Construtor/Destrutor 
		 **/
		Vetor (int max=256) {
			this->topo = 0;
			this->maximo = max;
			this->vet = new T*[max];
		}
		~Vetor() { 
			delete this->vet; 
		}
		
		/**
		 * Getters
		 **/
		int getTopo() { 
			return this->topo; 
		}
		
		/**
		 * Metodos
		 **/
		
		// verifica se vetor esta vazio
		bool estaVazio() {
			return this->topo == 0;
		}
		
		// utiliza operador += para concatenar ao vetor 
		void operator+=(T *item) { 
			if (this->topo < maximo) {
				this->vet[this->topo] = item;
				this->topo++;
			}
		}
		
		// utiliza operador [] retornar elemento na posicao "i" do vetor
		virtual T& operator[](int i) {
			return *this->vet[i];
		}
		
		// retorna numero de elementos do vetor
		int tamanho() {
			return this->topo;
		}

	private:
		/**
		 * Atributos
		 **/
		T **vet;
		int topo;
		int maximo;
};

#endif

