#include<stdio.h>
#include<stdlib.h>

void main(){
    int cont;

    //Contando até 10
    for(cont = 1; cont<=10; cont++){
        printf("\n5 X %d = %d", cont, 5*cont);
    }

    for(cont = 0; cont<=30; cont = cont + 3){
        printf("\n3 + %d = %d", cont, cont+3);
    }



system("pause");
}
