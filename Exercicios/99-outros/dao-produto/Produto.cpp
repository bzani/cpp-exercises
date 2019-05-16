#include "Produto.h"

//==============================================================
//	FUNCOES AUXILIARES
//==============================================================

// replace char
string Produto::repl(string s, char c1, char c2) {
  replace( s.begin(), s.end(),c1,c2); 
  return s;
}

// trata entrada de id
int Produto::leId() {
	char rid[10];
	cin >> rid;
	return atoi(rid);
}

// trata entrada de descricao
string Produto::leDescr() {
	char aux [256];
	cin.ignore(1);
	gets(aux);
	return repl(aux,' ','_');
}

// imprime descricao formatado
string Produto::dsDescr(string ds) {
	return repl(ds,'_',' ');
}

// trata entrada de preco
float Produto::lePreco() {
	char rprc[256];
	cin >> rprc;
	return atof(rprc);
}

// cria objeto produto para inserir
void Produto::criaProduto() {

	// le ID
	cout << "Informe os dados a seguir" << endl;
	cout << "id: ";
	_id = leId();

	// id zero = cancela operacao
	if (_id == 0) return;

	// le DESCRICAO
	cout << "descricao: ";
	_descr = leDescr();

	// le PRECO
	cout << "preco: ";
	cin >> _preco;
	cout << endl;
}

//==============================================================
//	IMPRIME
//==============================================================
void Produto::imprime() { 
	cout << "--------------------------------" << endl;
	cout << "Id\t\t" << _id << endl;
	cout << "Descricao\t" << dsDescr(_descr) << endl;
	cout << "Preco\t\t" << _preco << endl;
	cout << "--------------------------------" << endl << endl;
}

