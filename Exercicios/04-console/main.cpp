#include "Produto.h"
#include "Jogo.h"
#include "Console.h"

int main() {
	
	/* 
	// 1a etapa
	Produto p1;
	Produto p2;
	Produto p3;
	
	p1.imprime();
	p2.imprime();
	p3.imprime();
	*/
	
	// 2a etapa
	Jogo j1;
	Jogo j2;
	Console c1;
	Console c2;
	
	j1.setId(1);
	j1.setNome("Poker");
	j1.setDescr("Um jogo mucho legal");
	j1.setPreco(20.90);
	j1.setQtde(2);

	j2.setId(2);
	j2.setNome("Dorminhoco");
	j2.setDescr("Um jogo mucho sono");
	j2.setPreco(1.99);
	j2.setQtde(10);

	c1.setId(1);
	c1.setNome("Pleisteicho 3");
	c1.setDescr("Graficos animao");
	c1.setPreco(2999.90);
	c1.setQtde(1);
	
	c2.setId(2);
	c2.setNome("Atari");
	c2.setDescr("Graficos bosta");
	c2.setPreco(10.50);
	c2.setQtde(5);
	
	j1.imprime();
	j2.imprime();
	c1.imprime();
	c2.imprime();
	c1.calculaTotal();
	c2.calculaTotal();

}

