void ControleCadastro::inicia() {
	TelaCadastro menu;
	bool terminou = false;
	while (!terminou) {
		// exibe o menu
		menu.exibeMenu();
		// le uma opcao
		int opt = menu.leOpcao();
		// trata opcao
		if (opt == 1) {
			adicionaContato();
		}
		else if(opt == 2) {
			consultaContato();
		}
		else if(opt == 3) {
			terminou = true;
		}
	}
}
