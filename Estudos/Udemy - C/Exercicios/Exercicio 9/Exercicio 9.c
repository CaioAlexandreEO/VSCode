#include <stdio.h>
#include <stdlib.h>


void main(){
//Crie um algoritmo que imprima os números pares de 10 a 20 usando while, do while ou for
    int a;


    printf("Os numeros de 10 a 20 que sao par:");


    for(a=10;a<=20; a++){
            if(a%2==0){
                printf("\n%d eh par", a);
            }else{
                printf("\n%d eh impar", a);
            }
    }

system("pause");
}




#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
    setlocale(LC_ALL,"");

    //Definindo variaveis
    int primo,resultado;

    //Definindo o valor escolhido
    printf("Escolha um número: ");
    scanf("%d", &primo);
    resultado=primo%primo;

    for(primo>=2; primo>=2; primo>=2){
        if(resultado==0){
            printf("Seu número é primo!");
            break;
        }else{
        printf("Seu número não é primo");
        break;
        }
    }





system("pause");
}
