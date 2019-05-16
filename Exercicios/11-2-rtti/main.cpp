#include <typeinfo>
#include <iostream>

using namespace std;

class A {
    public:
        virtual ~A() {};
        void imprimeA() {
            cout << "Metodo de A" << endl;
        }
};
class B : public A {
    public:
        virtual ~B() {};
        void imprimeB() {
            cout << "Metodo de B" << endl;
        }
};
void funcao(A& a) {
    // converte objeto tipo A para B
    try {
        cout << typeid(a).name() << endl;
        B& b = dynamic_cast<B&>(a);
        b.imprimeB();
    } 
    catch(const bad_cast& e) {
        cout << "Objeto nao eh tipo B" << endl;
    }
};

int main() {
    A *array[3];
    array[0] = new A();
    array[1] = new B();
    array[2] = new A();
    for (int i=0 ; i < 3 ; i++) {
        funcao(*array[i]);
        delete array[i];
    }
};

