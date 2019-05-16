#include <iostream>

int vetor(int v[], int indice, int tamanho) throw (int) {
	
	if (indice < 0 || indice >= tamanho)
	{
		throw "indice invalido";
	}
	return v[indice];
}

using namespace std;

//MAIN
int main()
{
	int result;
	int v[] = { 1, 2, 4, 5, 6, 7,8,9,10 };

	//executa função
	try{
		result = vetor(v, -3, 9);

		cout << "Resultado" << result << endl;
	}
	//identifica erro
	catch (const char *msg)
	{
		cout << msg <<endl;
	}
	
}
