#ifndef _PILHA_H_
#define _PILHA_H_

#include <iostream>
#include <string>

using namespace std;

/*** template SEMPRE JUNTO COM CLASS!!! class eh continuacao do template ***/
template <class T>
class Pilha {
	public:
		// Construtor
		Pilha (int max=256) {
			this->topo = 0;
			this->maximo = max;
			this->vetor = new T[max]; //int [max]
		}
		
		~Pilha() { delete this->vetor; }
		
		bool estaVazio() {
			return this->topo == 0;
		}
		
		void operator+=(T item) { //int item
			if (topo < maximo) {
				vetor[topo] = item;
				topo++;
			}
		}
		T operator--(int flag) { //int operator
			T retorno; //int retorno=0
			if (!estaVazio()) {
				topo--;
				retorno = vetor[topo];
			}
			return retorno;
		}
		
	private:
		T *vetor; //int *vetor
		int topo;
		int maximo;
};

#endif

