#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 4 notas e calcule a média entre elas.
    //Se o valor for maior que 7 informe que o aluno foi aprovado
    //Se não, foi reprovado


    //Definindo variaveis dos bimestres
    float bimestre1 = 0, bimestre2 = 0, bimestre3 = 0, bimestre4 = 0;

    //Adicionando valores as variaveis
    printf("Vamos adicionar suas notas no boletim!\nA nota do seu 1º bimestre é: ");
    scanf("%f", &bimestre1);

    printf("A nota do seu 2º bimestre é: ");
    scanf("%f", &bimestre2);

    printf("A nota do seu 3º bimestre é: ");
    scanf("%f", &bimestre3);

    printf("A nota do seu 4º bimestre é: ");
    scanf("%f", &bimestre4);

    //Calculo de média
    float media=(bimestre1 + bimestre2 + bimestre3 + bimestre4)/4;

    //Aprovação final
    if(media>=7){
        printf("Você foi aprovado!\n");
    }else{
        printf("Você foi reprovado!\n");
    }



    system("pause");
}
