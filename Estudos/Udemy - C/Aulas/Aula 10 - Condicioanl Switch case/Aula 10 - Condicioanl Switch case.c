#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    int a = 1;
    char b = 'x';

    //if / else
    if(a==1){
        printf("\nOpção escolhida foi a 1");
    }else if(a==2){
        printf("\nOpção escolhida foi a 2");
    }else if(a=3){
        printf("\nOpção escolhida foi a 3");
    }else{
        printf("\nOpção escolhida invalida");
    }

    //Switch case
    switch(a){
        case 1:
            printf("\nOpção escolhida foi a 1");
            break;
        case 2:
            printf("\nOpção escolhida foi a 2");
            break;
        case 3:
            printf("\nOpção escolhida foi a 3");
            break;
        default:
            printf("\nOpção escolhida invalida!");
            break;
    }

    //Switch case com char
    switch(b){
    case'x':
        printf("a letra é x");
        break;
    case'w':
        printf("a letra é w");
        break;
    case'y':
        printf("a letra é y");
        break;
    default:
        printf("a opção é invalida");
        break;
    }




        system("pause");
}
