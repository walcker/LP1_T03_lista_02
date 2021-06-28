#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int SIZE = 5; // input size.

int main(void)
{
    //Definindo variáveis
    int i, valor, cont = 0;
    
    //Requisitando os valores ao usuário e testando quais os negativos
    for (i = 0; i < SIZE; i++){
        cout << "entre com o valor " << i << endl;
        cin >> valor;
            if (valor < 0){
                cont = cont +1;
            }
    }

   //Imprimindo o resultado na tela
    cout << "Temos " << cont << " valores negativos" << endl;

    return 0;
}
