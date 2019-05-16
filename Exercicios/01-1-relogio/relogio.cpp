#include "relogio.h"

Relogio::Relogio() {
	cout << "Chamando construtor do Relogio" << endl;
	_h = 0;
	_m = 0;
	_s = 0;
}

Relogio::Relogio(int h, int m, int s) {
	_h = h;
	_m = m;
	_s = s;
};

Relogio::~Relogio() {
	cout << "Chamando destrutor do Relogio" << endl;
}

void Relogio::setHora(int h) {
	if (h > 23) {
		cout << "Hora bugada" << endl;
	} else {
		_h = h;
	}
}

void Relogio::setMinuto(int m) {
	if (m > 59) {
		cout << "Minuto bugado" << endl;
	} else {
		_m = m;
	}
}

void Relogio::setSegundo(int s) {
	if (s > 59) {
		cout << "Segundo bugado" << endl;
	} else {
		_s = s;
	}
}

void Relogio::imprime() {
	cout << "HORA:  " << _h << ":" << _m << ":" << _s << endl;
}

void Relogio::soma(Relogio r2) {
	long seg = (r2._s) + (r2._m * 60) + (r2._h * 60 * 60) 
	         + (_s) + (_m * 60) + (_h * 60 * 60);
	Relogio aux(0,0,0);
	aux._s = seg%60;
	aux._m = seg%3600/60;
	aux._h = seg/3600;
	
	cout << "SOMA:  " << aux._h << ":" << aux._m << ":" << aux._s << endl;
}



