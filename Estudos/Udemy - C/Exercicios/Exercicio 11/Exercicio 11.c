#include <stdlib.h>
#include <stdio.h>

void main(){

    //Crie um algoritmo que leia 3 valores para um vetor de 3 posições e depois calcule a média dos valores acessando o vetor.

    //Definindo vetor
    int vetor[3], media, cont;

    //Definindo cada vetor
    for (cont=0;cont<3;cont++){
    printf("Defina os valores do seu vetor[%d]", cont);
    scanf("%d", &vetor[cont]);
    }
     //Calculo
    media=(vetor[cont])/3;

    //Imprimindo a media dos vetores
    printf("A media dos seus valores eh de: %d", media);


system("pause");
}
