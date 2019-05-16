#include <iostream>
#include <set>

using namespace std;

int main () {
    set<int> s1;
    s1.insert(1);
    s1.insert(3);
    s1.insert(0);
    s1.insert(2);
    s1.insert(1);
    
    set<int>::iterator it;
    
    for (it = s1.begin() ; it != s1.end() ; it++) {
        cout << *it << endl;
    }
    
    int numero = 3;
	it = s1.find(numero);
    if (it == s1.end()) {
        cout << "nao achou " << numero << endl;
    } else {
        cout << "achou " << numero << endl;
    }
    
    int c = s1.count(2);
    if (c != 0) {
        cout << "achou " << numero << endl;
    }
    
    // remove elemento (valor)
    s1.erase(3);
}
