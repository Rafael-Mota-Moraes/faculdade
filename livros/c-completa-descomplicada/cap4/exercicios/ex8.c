#include <stdio.h>

/*
Escreva um programa que, dada a idade de um nadador,
classiﬁque-o em uma das seguintes categorias:
*/

int main()
{
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7)
        printf("Categoria infantil A\n");
    else if (idade >= 8 && idade <= 10)
        printf("Categoria infantil B\n");
    else if (idade >= 11 && idade <= 13)
        printf("Categoria juvenil A\n");
    else if (idade >= 14 && idade <= 17)
        printf("Categoria juvenil B\n");
    else if (idade >= 18)
        printf("Categoria senior\n");

    return 0;
}
