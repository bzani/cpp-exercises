#include <iostream>
#include "Vetor.h"

using namespace std;

int main() {
	Vetor v1;

	v1[0] = 1;
	v1[1] = 10;
	v1[2] = 100;
	v1[3] = 1000;

	cout << v1(2) << endl;
	cout << v1(2, 5) << endl;


}

