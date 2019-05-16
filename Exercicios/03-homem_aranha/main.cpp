#include "Homem.h"
#include "Aranha.h"
#include "HomemAranha.h"

int main() {
	
//	Homem h("Jonas");
//	h.anda();
//	h.corre();
//
//	Aranha a;
//	a.soltaTeia();
//	a.escalaParedes();	

	HomemAranha peter;
	peter.setNome("Peter Parker");
	peter.anda();			// veio da classe Homem
	peter.vesteUniforme();	// veio da classe HomemAranha
	peter.soltaTeia();		// veio da classe Aranha
	
	//
	cout << endl << "Polimorfismo - homem" << endl;
	Homem *homem = &peter;
	homem->anda();
	homem->corre();
	//homem->soltaTeia();  	// ** ERRO: nao funciona, pois "homem nao solta teia" **
	
	cout << endl << "Polimorfismo - aranha" << endl;
	Aranha *aranha = &peter;
	//aranha->anda();		// ** ERRO: nao funciona, pois "aranha nao anda" **
	aranha->soltaTeia();
	aranha->escalaParedes();
	
}

