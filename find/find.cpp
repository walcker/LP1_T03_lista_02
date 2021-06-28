#include <iostream>
#include <vector>
using namespace std;
int main() {

    // Declara das variáveis.
    //int cont =0;
    int n; 
    char m,k;             

    //Requisita ao usuário o número de valores do vetor
    cout << "Entre com o número de objetos do vetor: ";
    cin >> n;
    cout << endl;

    //Cria o vetor no tamanho que o usuário requisita
    char vetor[n];

    for (int i = 0 ; i < n ; i++){

       // Insere elementos no vetor
        cout << "Entre com  os objetos do vetor." <<  endl;
        cin >> m;
        vetor[i] = m;
    }

    for (int i = 0 ; i < n ; i++){

       // Imprime o vetor
        cout << vetor[i] << " ";
    }

    cout << endl;
    
    //Pede o objeto a ser comparado ao usuário
    cout << " Entre com o objeto que quer encontar: ";
    cin >> k;

    //Compara o objeto ao objeto do vetor e retorna o resultado
    for (int i = 0 ; i < n ; i++){
      if(vetor[i] == k){
        cout << i << endl;
      }
    }

}
