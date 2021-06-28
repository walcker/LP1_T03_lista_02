#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <istream>
#include <sstream>
#include <iomanip>

using namespace std;

int main(void)
{

    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Declaração de variáveis
    int x = 0;
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    float A, B, C, D, E,y;

    //Requisitando dados ao usuário
    cout << "Digite os números de dois dígitos e aperte enter depois de cada um deles." << endl;
    cout << "Digite um número negativo para sair do programa." << endl;


    //Comparando as entradas com os intervalos    
    while(x >= 0){

        cin >> x;

        if(x >=0 && x<25){
            a++;
        }else if(x >=25 && x<50){
            b++;
        }else if(x >=50 && x<75){
            c++;
        }else if(x >=75 && x<100){
            d++;
        }else if(x < 0){
            
        }else{
          e++;
        }

    }

   //Imprimindo as porcentagens na tela
    A = (float) a/(a+b+c+d+e)*100;
    cout << A << endl;
    
    B = (float) b/(a+b+c+d+e)*100;
    cout << B << endl;
    
    C = (float) c/(a+b+c+d+e)*100;
    cout << C << endl;
    
    D = (float) d/(a+b+c+d+e)*100;
    cout << D << endl;
    
    E = (float) e/(a+b+c+d+e)*100;
    cout << E << endl;

}
