#include <iostream>
#include <cstdlib>

#include "relogio.h"

using namespace std;

/** Main **/
int main() {
	//
	Relogio r1(10,17,50);
	Relogio r2(5,50,30);

	r1.imprime();
	r1.soma(r2);
	
	// Finaliza
	system("pause");
	return 0;
}


