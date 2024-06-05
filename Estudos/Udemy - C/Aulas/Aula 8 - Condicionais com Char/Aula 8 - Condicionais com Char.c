#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    char letra = 'x';

    //Condicional Simples
    if(letra == 'x'){
        printf("\nA letra eh x");
    }


    //Usando %d para transformar a letra em numero da tabela ASCII
    printf("\n O codigo da letra e %d", letra);

    if(letra == 120){
        printf("\n A letra eh x");
    }


    system("pause");
}
