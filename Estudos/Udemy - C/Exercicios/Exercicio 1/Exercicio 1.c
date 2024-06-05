#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentuação
    setlocale(LC_ALL,"");

    //Crie um algoritimo que leia 2 notas e mostre a média entre elas.

    //Variaveis para adicionar o valor
    float nota1, nota2, media;

    //Definindo a primeira nota
    printf("Sua primeira nota é: ");
    scanf("%f", &nota1);

    //Definindo a segunda nota
    printf("\nSua segunda nota é: ");
    scanf("%f", &nota2);

    //Explicação da conta
    printf("\nA suas notas são %.2f e %.2f",nota1,nota2);

    //Conta da média
    media = (nota1+nota2)/2;

    //Valor da média
    printf("\nSua média é de : %.2f\n", media);

    system("pause");

}
