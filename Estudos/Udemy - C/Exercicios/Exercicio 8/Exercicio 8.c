#include <stdio.h>
#include <stdlib.h>

void main(){

    //Crie um algoritmo que imprima os números de 10 até 0 de forma regressiva. (usando While, Do While  e for)
    int a = 10, b = 10, c=10;


    //while
    while(a>=0){
        printf("\n%d",a);
        a = a-1;
    }


    //do while
    do{
        printf("\n%d",b);
        b--;
    }while (b>=0);


    //for
    for(c=10; c>=0; c--){
        printf("\n%d", c);
    }



system("pause");
}
