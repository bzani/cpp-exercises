#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, float> m1;
    m1.insert(pair<const string, float>("jaca", 1.99));         // adiciona elementos
    m1.insert(pair<const string, float>("melao", 2.99));        // level hard
    m1.insert(pair<const string, float>("uva", 3.45));          //
    
    map<string, float>::iterator it;
    
    // imprime insert hard
	cout << "--------------------" << endl;
	cout << "imprime hard" << endl;
	cout << "--------------------" << endl;
	for (it = m1.begin() ; it != m1.end() ; it++) {
        cout << it->first << "\t\t";
        cout << it->second << endl;
    }
    
    m1["pera"] = 7.99;                                          // adiciona elementos
    m1["banana"] = 0.89;                                        // level easy
    m1["uva"] = 5.99;                                           // **insercao em elemento ja existente => alteracao

    // imprime insert easy
	cout << "--------------------" << endl;
	cout << "imprime easy" << endl;
	cout << "--------------------" << endl;
    for (it = m1.begin() ; it != m1.end() ; it++) {
        cout << it->first << "\t\t";
        cout << it->second << endl;
    }

	cout << "--------------------" << endl;
	cout << "existe uva?" << endl;
	cout << "--------------------" << endl;
    int c = m1.count("uva");
    if (c != 0) {
        cout << "existe!" << endl;
    }
}

