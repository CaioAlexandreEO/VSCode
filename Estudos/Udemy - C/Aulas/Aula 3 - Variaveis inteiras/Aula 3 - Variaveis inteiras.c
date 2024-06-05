#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");


    int a = 5;
    int b = 7, c;

    printf("%d", a);

    //Concatenando
    printf("\nO valor da var a é: %d %d\n", a, b);

    //Mudando o valor de 'a'
    a = 15;

    //Adicionando valor a uma variavel
    scanf("%d", &c);



    printf("\nO valor da var a é: %d %d", a, c);

    printf("\nOi");

    system("pause");
}
