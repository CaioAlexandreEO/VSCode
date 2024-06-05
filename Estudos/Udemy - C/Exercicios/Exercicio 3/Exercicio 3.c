#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 3 números inteiros de uma só vez
    //Coloque o resultado da multiplicação entre os 3 em uma variável própria
    //Depois exiba essa variável

    //Dados de variaveis
    float num1 = 0 , num2 = 0 , num3 = 0;

    //Definindo os valores
    printf("Digite 3 números inteiros: \n");
    scanf("%f %f %f", &num1, &num2, &num3);

    //Multiplicando as variaveis
    float mult = num1*num2*num3;

    //Resulado das variaveis
    printf("Os 3 números multiplicados resulta em: %.2f\n", mult);


    system("pause");

}
