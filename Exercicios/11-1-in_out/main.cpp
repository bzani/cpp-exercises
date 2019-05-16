#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int var1 = 10;
    float var2 = 3.1415;
    string var3 = "Texto";
    string var4 = "Exemplo de frase";
    string buffer;
    
    // grava dados no arquivo
    ofstream saida("arq.txt");
    
    saida << var1 << endl;
    saida << var2 << endl;
    saida << var3 << endl;
    saida << var4 << endl;
    saida.close();
    
    // le dados do arquivo
    ifstream entrada("arq.txt");
    while (!entrada.eof()) {

        entrada >> var1 >> var2;
        entrada >> var3;
        if(entrada.eof()) {
            break;
        }
        entrada >> buffer;
        getline(entrada, var4);
        
        
//        char aux;
//        entrada >> aux;
//        entrada >> var3;
//        getline(entrada, var4);
        
        
        cout << "var1: " << var1 << endl;
        cout << "var2: " << var2 << endl;
        cout << "var3: " << var3 << endl;
        cout << "var4: " << var4 << endl;
        
    }
    entrada.close();
};

