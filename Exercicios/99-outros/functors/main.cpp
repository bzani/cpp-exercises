#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

class Item {
public:
	// construtor, destrutor
	Item(int a) : i(a) { };

	int i;
	
	bool operator< (Item item) const{
		return i < item.i;
	}
	
};

int main() {
	
	deque<Item> d1;

	Item i1(10);
	Item i2(20);

    d1.push_front(i1);
    d1.push_front(i2);
    
	deque<Item>::iterator it;
	sort(d1.begin(), d1.end());
	for (it = d1.begin(); it != d1.end(); it++) {
		cout << it->i << endl;
	}	
}

/* ********** VERSAO DEQUE_1 **********
	deque<Item> d1;

	Item i1("item1", 10);
	Item i2("item2", 20);
	Item i3("item3", 30);

    d1.push_front(i1);
    d1.push_front(i2);
    d1.push_front(i3);
    
	sort(d1.begin(), d1.end());
	
	deque<Item>::iterator it;
	for (it = d1.begin(); it != d1.end(); it++) {
		it->imprime();
	}	
*/


/* ********** VERSAO VECTOR **********
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Item {
	public:
		// construtor, destrutor
		Item(string nome="", float preco=0) {
			_nome = nome;
			_preco = preco;
		}
		~Item() {};
	
		// getters, setters
		string getNome() { return _nome; }
		float getPreco() { return _preco; }
		
		void setNome(string nome) { _nome = nome; }
		void setPreco(float preco) { _preco= preco; }
	
		// metodos
		void imprime() {
			cout << "------------ ITEM ------------" << endl;
			cout << "nome:\t" << _nome << endl;
			cout << "preco:\t" << _preco << endl << endl;
		};
		
		// para comparacoes iterator
		bool operator<(Item i) {
			return this->_preco < i.getPreco();
		}
		
	private:
		string _nome;
		float _preco;
};

class ItemOrdena : public Item {
	public:
		bool operator() (Item a, Item b) {
			return a.getPreco() < b.getPreco();
		}
	private:

};


int main() {
	vector<Item> v1(10);

	Item i1("item1", 10);
	Item i2("item2", 20);
	Item i3("item3", 30);

	//d1[0] = i1;
    v1.push_back(i1);
    v1.push_back(i2);
    v1.push_back(i3);
    
	sort(v1.begin(), v1.end());
	
}
*/
