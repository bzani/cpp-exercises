#include "TelaLocadora.h"

/**
 * Construtor
 */
TelaLocadora::TelaLocadora() {
}

/**
 * Destrutor
 */
TelaLocadora::~TelaLocadora() {
}

/**
 * Exibe o menu na tela
 */
void TelaLocadora::mostraMenu() {
    cout << endl;
    cout << " ================================================= " << endl;
    cout << "   MENU " << endl;
    cout << " ================================================= " << endl;
    cout << " Digite a opcao desejada: " << endl;
    cout << " (1) Adicionar Veiculo" << endl;
    cout << " (2) Consultar Veiculo" << endl;
    cout << " (3) Listar Veiculos" << endl;
    cout << " (4) Sair" << endl;
    cout << endl;
}

void TelaLocadora::mostraMsgErro(string msg) {
    cout << " *** " << msg << " ***" << endl;
}

Opcao TelaLocadora::leOpcao() {
    char opt[256];
    cout << " > ";
    cin >> opt;
    cin.ignore(INT_MAX, '\n');
    cout << endl;
    return Opcao(atoi(opt));
}

Tipo TelaLocadora::leTipo() {
    cout << " Digite o tipo do veiculo: " << endl;
    cout << " (1) Moto" << endl;
    cout << " (2) Bicicleta" << endl << endl;
    cout << " > ";
    char tipo[256];
    cin >> tipo;
    cin.ignore(INT_MAX, '\n');
    cout << endl;
    return Tipo(atoi(tipo));
}

int TelaLocadora::leElemento() {
    cout << " Digite o indice do veiculo: " << endl;
    cout << " > ";
    char elem[256];
    cin >> elem;
    cin.ignore(INT_MAX, '\n');
    cout << endl;
    return atoi(elem);
}

Moto TelaLocadora::leDadosMoto(int i) {
    Moto moto;
	stringstream codigo;
	codigo << "m" << i;

	/* Dados veiculo */
	moto.setCodigo(codigo.str());
	moto.setModelo(leString("Modelo"));
	moto.setCor(leString("Cor"));

	/* Dados moto */
    moto.setPlaca(leString("Placa"));
    moto.setCilindradas(leNumero("Cilindradas"));
    moto.setAno(leNumero("Ano"));
	return moto;
}

Bicicleta TelaLocadora::leDadosBicicleta(int i) {
    Bicicleta bicicleta;
	stringstream codigo;
	codigo << "b" << i;

	/* Dados veiculo */
	bicicleta.setCodigo(codigo.str());
	bicicleta.setModelo(leString("Modelo"));
	bicicleta.setCor(leString("Cor"));
    
	/* Dados bicicleta */
	bicicleta.setCestinha(leBoolean("Cestinha"));
	return bicicleta;
}

string TelaLocadora::leString(string msg) {
//    cout << setw(15);
    cout << msg << ": ";
    string str;
    getline(cin, str);
    return str;
}

int TelaLocadora::leNumero(string msg) {
//    cout << setw(15);
    cout << msg << ": ";
    char num[256];
    cin >> num;
    return atoi(num);
}

bool TelaLocadora::leBoolean(string msg) {
//    cout << setw(15);
    cout << msg << " (S/N): ";
    char boo[256];
    cin >> boo;
	return (boo[0] == 'S' || boo[0] == 's') ? true : false;
}


