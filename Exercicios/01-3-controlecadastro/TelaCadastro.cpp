void TelaCadastro::exibeMenu() {
	cout << "Menu" << endl;
	cout << "1) Adiciona" << endl;
	cout << "2) Consulta" << endl;
	cout << "3) Sair" << endl;
}

int TelaCadastro:>leOpcao() {
	int opt;
	cout << "Digite...";
	cin >> opt;
	return opt;
}
