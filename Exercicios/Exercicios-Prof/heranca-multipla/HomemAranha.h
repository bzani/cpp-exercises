#ifndef _HOMEM_ARANHA_H_
#define _HOMEM_ARANHA_H_

#include "Homem.h"
#include "Aranha.h"

class HomemAranha : public Homem, public Aranha {
public:
	void vesteUniforme() {
		cout << _nome << " vestindo uniforme" << endl;
	}

	void soltaTeia() {
		cout << _nome << " soltando teias" << endl;
	}

};

#endif
