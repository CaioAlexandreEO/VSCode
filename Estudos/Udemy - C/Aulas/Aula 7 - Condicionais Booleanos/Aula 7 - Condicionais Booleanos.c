#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    bool a = true, b = false;

    //Se a for verdadeiro
    if(a){
        printf("\nA eh verdadeiro");
    }

    //Comparando B
    if(b){
        printf("\nB eh verdadeiro");
    }else{
        printf("\nB eh falso");
    }

    //Comparando uma falsidade
    if(!b){
        printf("\nb eh falso");
    }


    system("pause");
}
