#ifndef _HOMEM_ARANHA_H_
#define _HOMEM_ARANHA_H_

#include "Homem.h"
#include "Aranha.h"

using namespace std;

// *** DECLARANDO COM HERANCA MULTIPLA, LOCURA! ***
// Lembrando: visibilidade na heranca:
// - public:	nao muda nada!
// - protected:	tudo que eh public no pai, vira protected
// - private:	tudo que eh public/protected no pai, vira private
class HomemAranha : public Homem, public Aranha {
	public:
		void vesteUniforme() {
			cout << _nome << " vestindo uniforme" << endl;
		}
		
		// ** sobrescrevendo o metodo da classe Aranha **
		void soltaTeia() {
			cout << _nome << " soltando teias" << endl;
		}
	
};

#endif

