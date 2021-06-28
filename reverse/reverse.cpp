#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

int main ( void ){

  //Permite usar acentos
  setlocale(LC_ALL,"");

  int vetor1[5], vetor2[5];    // Declara um vetor de inteiros.
  int i;
      for (int i = 0 ; i < 6 ; ++i){
        cout << "Entre com o valor " << i << endl;
          cin >> vetor1[i]; 
      }      // Insere elementos no vetor
      
      //Imprime vetor original na tela
      for(int i = 0; i < 6; ++i){
        cout << vetor1[i] << " ";
      }

      cout << endl;

      i = 5;
      
      //Inverte o vetor e imprime
      do{
        vetor2[i] = vetor1[i];
        cout << vetor2[i] << " ";
        i--;
      }while(i >= 0 );
} 
