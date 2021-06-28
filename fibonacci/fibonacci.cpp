#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

int main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Declarando variáveis
    int n;
    int x =0, aux;
    int i;

    //Requisitando valor ao usuário
    cout << "entre com o valor." << endl;
    cin >> n; 
    cout << 1 << endl;      

    //Contagem da série até i número escolhido
    for(i = 1; i < (n - 3);){
      aux = i + x ;
      x = i;
      i = aux;

      cout << i << endl;

    };

    return 0;
}

