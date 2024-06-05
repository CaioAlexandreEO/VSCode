#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 5;

    //Condicional simples
    if(a == 5){
        printf("A variavel a = 5");
    };

    //Numeros pares e impares
    if(a%2 == 1){
        printf("\nA variavel a e impar");
    }else{
        printf("\nA variavel a é par");
    };

    float opcao = 1;
    if(opcao == 1){
        printf("\nA opcao e igual a 1");
    }else if(opcao==2){
        printf("\nA opcao e igual a 2");
    }else{
        printf("\nA opcao nao e 1 e nem 2");
    }
    system("Pause");
}
