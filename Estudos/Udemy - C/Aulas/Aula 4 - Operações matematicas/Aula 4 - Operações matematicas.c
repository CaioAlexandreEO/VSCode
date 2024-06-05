#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
    setlocale(LC_ALL,"");

    //Definindo variaveis
    int a = 6, b = 3;

    //Soma
    printf("\nA soma de a e b é = %d", a + b);
    //Ou
    printf("\nA soma de a = %d e b = %d é igual a :%d", a, b, a+b);

    //Subtração
    printf("\nA subtração de a e b é = %d", a - b);
    //Ou
    printf("\nA subtração de a =%d e b = %d é igual a =%d", a, b,a-b);

    //Divisão
    printf("\nA divisão de a e b é =%d", a/b);
    //Ou
    printf("\nA divisão de a = %d e b = %d e =%d", a, b, a/b);

    //Multiplicação
    printf("\nA multiplicação de a e b é = %d", a*b);
    //Ou
    printf("\nA multiplicação de a = %d e b = %d é = %d", a, b, a*b);

    //Resto da divisão
    printf("\nO resto da divisão de a e b é = %d", a % b);

    //Valor absoluto
    printf("\nO valor absoluto de -3 é de = %d", abs(-3));

    system("pause");


}
