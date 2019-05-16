#include <iostream>
#include <vector>
#include <algorithm>                 // para usar o sort()
#include <deque>

using namespace std;

int main() {

    /* ---------------- VECTOR ------------------ */
    vector<int> v1;                 // cria um vetor de int vazio; usamos <int> pois eh template
    vector<int> v2(7);              // inicializa com tamanho 7
    vector<float> v3(10, 2.99);       // cria um vetor de 10 posicoes inicializado com 2.99
    
    v2[0] = 7;
    v2[1] = 8;
    
    // acessa as posicoes do vetor
    for (int i = 2; i < 7 ; i++) {
        v2[i] = i * 100;            
    }
    
    // usando iterator
    vector<int>::iterator it_vector;
    for (it_vector = v2.begin() ; it_vector != v2.end() ; it_vector++) {
        cout << *it_vector << endl;
    }
    
    // retorna o tamanho do vetor
    cout << v3.capacity() << endl;
    
    // construtor de copia
    vector<int> v4(v2);

    for (int i = 0 ; i < 7 ; i++) {
        v2[i] = 100 - i;
    }
    
    // ordena o vetor
    sort(v2.begin(), v2.end());
    for (it_vector = v2.begin() ; it_vector != v2.end() ; it_vector++) {
        cout << *it_vector << endl;
    }

    /* ---------------- DEQUE ------------------ */
    // igual o vector: var(tamanho, inicializacao)
    deque<int> d1(3, 9);        
    deque<int> d2(7);
    
    for (int i = 0 ; i < 3 ; i++) {
        cout << d1[i] << endl;
    }
    
    // iteradores
    deque<int>::iterator it_deque;
    for (it_deque = d1.front() ; it_deque != d1.end() ; it_deque++) {
        cout << *it_deque << endl;
    }
    
    deque<string> d3;
    d3.push_back("laranja");
    d3.push_back("jaca");
    d3.push_back("melancia");
    
    deque<string>::iterator it_string;
    for (it_string = d3.begin() ; it_string != d3.end() ; it_string++) {
        cout << *it_string << endl;
    }
    
    string primeiro = d3.pop_front();
    cout << primeiro << endl;
    

    /* ---------------- LIST ------------------ */
    list<int> l1(3, 9);
    list<string> l2;
    
    l2.push_back("azul");
    l2.push_back("verde");
    l2.push_back("amarelo");
    l2.push_back("vermelho");
    l2.push_back("branco");
    l2.push_back("azul");
    
    list<string> l3(l2);
    list<string>::iterator it_list;
    // imprime
    for (it_list = l2.begin() ; it_list != l2.end() ; it_list++) {
        cout << *it_list << endl;
    }
    l3.reverse();
    // imprime
    l3.sort();
    // imprime
    l3.remove("amarelo");
    // imprime
    l3.unique();
    // imprime


};

