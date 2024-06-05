#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Função principal do programa
void main(){
    setlocale(LC_ALL,"");


    //Definindo as variaveis

    int matriz[2][2];

    //Definindo valores
    printf("Escolha um número para sua matiz [0][0]: ");
    scanf("%d",&matriz[0][0]);
    printf("Escolha um número para sua matiz [0][1]: ");
    scanf("%d",&matriz[0][1]);
    printf("Escolha um número para sua matiz [1][0]: ");
    scanf("%d",&matriz[1][0]);
    printf("Escolha um número para sua matiz [1][1]: ");
    scanf("%d",&matriz[1][1]);

    //Imprimindo as matrizes
    printf("\nSua matriz [0][0] é: %d", matriz[0][0]);
    printf("\nSua matriz [0][1] é: %d", matriz[0][1]);
    printf("\nSua matriz [1][0] é: %d", matriz[1][0]);
    printf("\nSua matriz [1][1] é: %d", matriz[1][1]);

    printf("\nSua matriz com a linhas trocadas são:");
    printf("\n[1][0] = %d   [1][1] = %d\n[0][0] = %d   [0][1] = %d",matriz[1][0] , matriz[1][1] ,matriz[0][0] ,matriz[0][1]);


system("pause");
}
