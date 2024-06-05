#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a = 10;

    //Conectivo lógico E (AND) Se uma comparação for falsa não entra no bloco
    if(a>5 && a<15){
        printf("\n A variavel 'a' esta entre 5 e 15!");
    }

    //Conectivo lógico OU (OR) Se uma comparação for verdadeira, entra no bloco
    if(a>5 || a<15){
        printf("\n A variavel 'a' esta entre 5 e 15!");
    }

    //Misturando conectivos
    if((a>5 && a<15) || a == 20 ){
        printf("\n A variavel 'a' esta entre 5 e 15 ou vale 20!");
    }

    system("pause");
}
