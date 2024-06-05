#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 3 valores e ingorme se eles são iguais entre si para formarem os lados de um triangulo equilátero

    //Definindo valores as variaveis dos lados do triangulo
    float lado1, lado2, lado3;

    //Dando valor as variaveis
    printf("Escreva as 3 medidas do seu triangulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    //Condições para um triangulo equilatero
    if ((lado1 == lado2) && (lado1==lado3)){
        printf("Seu triangulo equilatero é valido, ou seja, tem todos os lados iguais!");
    }else{
        printf("Seu triangulo não tem os 3 lados iguais!");
    }



    system("pause");
}
