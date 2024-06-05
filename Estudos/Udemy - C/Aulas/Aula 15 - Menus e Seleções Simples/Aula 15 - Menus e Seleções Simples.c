#include <stdio.h>
#include <stdlib.h>

void main(){



    //Maneira simples
    int opcao;

    //Sempre que tiver opção invalida ele retorna para o menu inicial
    while (opcao<1||opcao>4){

    printf("Escolha uma opcao: ");
    printf("\n1 - Opcao 1");
    printf("\n2 - Opcao 2");
    printf("\n3 - Opcao 3");
    printf("\n4 - Opcao 4");

    scanf("\n%d", &opcao);


    //Opções a escolher
    switch(opcao){
    case 1:
        printf("opcao 1 foi escolhida!");
        break;
    case 2:
        printf("opcao 2 foi escolhida!");
        break;
    case 3:
        printf("opcao 3 foi escolhida!");
        break;
    case 4:
        printf("opcao 4 foi escolhida!");
        break;
    default:
        printf("Opção invalida!")
    }
    }






system("pause");
}
