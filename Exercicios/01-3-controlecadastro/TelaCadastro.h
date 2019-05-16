#ifndef _TELA_CADASTRO_H_
#define _TELA_CADASTRO_H_

//includes

class TelaCadastro {
	public:
		TelaCadastro();
		void exibeMenu();				// imprime o menu
		int leOpcao();					// le opcao
		Contato leContato();			// 
		void exibeContato(Contato[]); 	// lista de contatos
};

#endif
