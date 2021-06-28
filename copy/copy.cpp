#include <iostream>
#include <vector>
using namespace std;
int main() {

    // Declara das variáveis.
    vector<int> vect; 
    int cont =0;
    int n;              

    //Requisita ao usuário o número de valores do vetor
    cout << "Entre com o número de objetos do vetor: ";
    cin >> n;
    cout << endl;

    for (auto i(0) ; i < n ; ++i)
        vect.push_back(i);          // Insere elementos no vetor
    vector<int>::const_iterator it; // Declara um iterator
    it = vect.begin();              // Atribui ao iterator o inicio do vetor
    while (it != vect.end()) {      // Enquanto não chegou no fim
        cout << *it << " ";         // imprime o valor do elemento "apontado" pelo iterato
        ++it;  
        cont++;                     // move para o próximo elemento
    }

    cout << endl;
    cout << cont << endl;
}
