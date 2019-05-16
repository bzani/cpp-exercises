#include <iostream>

using namespace std;

class Matriz {
	public:
	    Matriz () {}
	    int operator()(int y) {
	        return _x + y;
	    }
		int operator()(int i, intj) {
			
		}
		void imprime() {
			
		}
		
	private:
	    int dados[4][4];
};

int main() {
 
    MinhaClasse m(5);
    cout << m(6);

};
