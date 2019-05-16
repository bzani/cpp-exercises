#include <stdlib.h>
#include "ProdutoDAO.h"

enum Opcoes {
	INSERIR = 1,
	CONSULTAR = 2,
	REMOVER = 3,
	LIMPAR = 4,
	GRAVAR = 5,
};

int main() {

	//==============================================================
	//	VARIAVEIS
	//==============================================================
	  
	// variaveis de controle
	int opc;

	// variaveis auxiliares
	int id;
	
	// variaveis do Produto
	Produto p1;
	ProdutoDAO pDAO;
	
	// lista para armazenamento do arquivo na memoria
	list<Produto> l1;

	//==============================================================
	//	LE ENTRADA MENU
	//==============================================================

	// loop do menu
	while (true) {
		
		// carrega produtos do arquivo na memoria
		l1 = pDAO.consulta();
		
		// exibe menu de opcoes
		cout << "-------------------------------" << endl;
		cout << "Escolha uma das opcoes:" << endl;
		cout << "1-cadastrar produto" << endl;
		cout << "2-exibir produtos" << endl;
		cout << "3-remover produto" << endl;
		cout << "4-limpar lista de produtos" << endl;
		cout << "5-gravar lista de produtos" << endl;
		cout << "0-sair" << endl;
		cout << "-------------------------------" << endl;
		
		cout << endl << ": ";
		cin >> opc;
		cout << endl;
	
		// verifica se quebra loop
		if (opc == 0) {
			cout << "tchau." << endl;
			break;
		}

		//==============================================================
		//	TRATA OPCAO
		//==============================================================

		switch (opc) {
			
		  //----------------------------------------------------------
			case INSERIR:
		  //----------------------------------------------------------
				do { 
					p1.criaProduto();
					if (p1.getId() == 0) break;
				} while (pDAO.insere(p1));
				break;
				
		  //----------------------------------------------------------
			case CONSULTAR:
		  //----------------------------------------------------------
				// chama DAO para consultar
				pDAO.exibe(l1);
				break;

		  //----------------------------------------------------------
			case REMOVER:
		  //----------------------------------------------------------
				cout << "Informe o id do produto para remover: ";

				// verifica se id eh numero e valido (maior que zero)
				id = p1.leId();
				if (id > 0) {
					// se id valido remove
					pDAO.remove(id);
				} else {
					msgErro("Id invalido!");
				}
		    	break;
		    
		  //----------------------------------------------------------
			case LIMPAR:
		  //----------------------------------------------------------
				pDAO.remove();
		    	break;
		    
		  //----------------------------------------------------------
			case GRAVAR:
		  //----------------------------------------------------------
				// atualiza arquivo com lista da memoria
				pDAO.grava(l1);
				break;
		    	
		  //----------------------------------------------------------
		  	default:
		  //----------------------------------------------------------
		  		msgErro("Opcao invalida!");
    			break;
		}
	}

	//==============================================================
	//	FIM
	//==============================================================
	return 0;	
}

