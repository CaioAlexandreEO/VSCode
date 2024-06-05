#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Crie um algoritimo que leia 2 valores e mostre o valor absoluto da diferença entre elas
    float valor1 = 0, valor2 = 0;

    //Adicionando valor1
    printf("Digite seu primeiro valor: ");
    scanf("%f", &valor1);

    //Adicionando valor2
    printf("\nDigite seu segundo valor: ");
    scanf("%f", &valor2);

    float valorabsoluto = abs(valor1-valor2);

    //Calculando o valor absoluto
    printf("O valor absoluto entre os dois valores %.2f e %.2f é de: %f\n", valor1, valor2, valorabsoluto);

    system("pause");



}
