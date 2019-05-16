#ifndef _ARANHA_H_
#define _ARANHA_H_

#include <iostream>
using namespace std;

class Aranha {
public:
	virtual void soltaTeia() {
		cout << "soltando teias!!!"<< endl;
	}

	virtual void escalaParedes() {
		cout << "escalando paredes!!!" << endl;
	}

};


#endif

