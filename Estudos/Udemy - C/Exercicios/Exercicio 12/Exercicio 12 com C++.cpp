#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <locale.h>

using namespace std;

//Fun��o principal do programa
int main(){
    setlocale(LC_ALL,"");

    //Preencha uma matriz 2x2 lendo valores do usu�rio e depois troque os valores entre a primeira e a segunda linha

    int matriz[2][2], i, j;


    for(i=0 ; i<2 ; i++){
            for(j=0 ; j<2 ; j++){
        cin>>matriz[i][j];
            }
        }



    for(i=0 ; i<2 ; i++){
            for(j=0 ; j<2 ; j++){
        cout<<"Sua matriz �:"<<matriz[i][j]<<" "<<"\n";
            }
        }

    for(i=0 ; i<2 ; i++){
            for(j=0 ; j<2 ; j++){
        cout<<"Agora sua matriz invertida �:"<<matriz[j][i]<<" "<<"\n";
            }
        }



system("pause");
}
