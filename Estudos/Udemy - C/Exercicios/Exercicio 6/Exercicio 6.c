#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia dois valores e depois crie um menu (Usando Switch Case) de 4 opções:
    //1-Somar, 2-Subtrair, 3-Dividir, 4-Multiplicar.
    //Depois que o usuario escolher uma opção, mostre o resultado da operação escolhida com os dois valores lidos.

    float valor1, valor2;

    //Definindo os valores
    printf("Digite dois valores: ");
    scanf("%f %f", &valor1, &valor2);

    int opcao;
    printf("Selecione o que deseja a baixo:\n1-Somar\n2-Subtrair\n3-Dividir\n4-Multiplicar\n--->");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("%.1f + %.1f = %.1f",valor1,valor2,valor1+valor2);
        break;
    case 2:
        printf("%.1f - %.1f = %.1f",valor1,valor2,valor1-valor2);
        break;
    case 3:
        printf("%.1f / %.1f = %.1f",valor1,valor2,valor1/valor2);
        break;
    case 4:
        printf("%.1f * %.1f = %.1f",valor1,valor2,valor1*valor2);
        break;
    default:
        printf("Opção invalida!");
    }


system("pause");
}
