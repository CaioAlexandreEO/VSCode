#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 5, b = 10, c = 15;
    char d = "x";

    //Maior
    if(a>2){
        printf("\n %d eh maior que 2",a);
    }

    //Menor
    if(a<7){
        printf("\n %d eh menor que 7",a);
    }

    //Maior/Menor igual
    if(a>=b){
        printf("\n %d eh maior que %d",a,b);
    }else{
        printf("\n %d eh menor que %d",a,b);
    }

    //Diferente
    if(c!=10){
        printf("\n %d nao eh 10", c);
    }
    //Ou
    if(d!='z'){
        printf("\n %d nao eh z", d);
    }


    system("pause");
}
