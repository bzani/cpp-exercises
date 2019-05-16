#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Produto {
    public:
        Produto(int id=0, string nome="", float preco=0) {
            _id = id;
            _nome = nome;
            _preco = preco;
        }
        
        int getId() { return _id; }
        string getNome() { return _nome; }
        float getPreco() { return _preco; }
        
        void imprime() {
            cout << "-----------------" << endl;
            cout << "PRODUTO" << endl;
            cout << "-----------------" << endl;
            cout << "id:\t" << _id << endl;
            cout << "nome:\t" << _nome << endl;
            cout << "preco:\t" << _preco << endl;
            cout << endl;
        }
        
    private:
        int _id;
        string _nome;
        float _preco;
};

int main() {
    
    vector<Produto> vetor(3);

    Produto p1 = Produto(1, "Jogo", 300);
    Produto p2 = Produto(2, "Camisa", 100);
    Produto p3 = Produto(3, "Geladeira", 800);

    vetor[0] = p1;
    vetor[1] = p2;
    vetor[2] = p3;

    for (int i=0 ; i < vetor.size() ; i++) {
        vetor[i].imprime();
    }
    
    // este comando dira se objeto eh imutavel ou nao (se alterar, nao eh!)
    vetor[0].getNome()[0] = 'x';

    for (int i=0 ; i < vetor.size() ; i++) {
        vetor[i].imprime();
    }
    
}
