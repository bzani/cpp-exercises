



#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"

int main() {
	// Cria uma conta
	//Conta conta(123, "Rafael");	// ERROR! 

	ContaCorrente conta1(999, "Donatelo");
	conta1.deposita(1000);
	conta1.retira(150);

	conta1.imprimeExtrato();

	ContaPoupanca conta2(777, "Michelangelo");
	conta2.deposita(5000);
	conta2.retira(1.99);

	conta2.imprimeExtrato();

	cout << "Transfere" << endl;

	conta2.transfere(conta1, 3000);

	conta1.imprimeExtrato();
	conta2.imprimeExtrato();












}


