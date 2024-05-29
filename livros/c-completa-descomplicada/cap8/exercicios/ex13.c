#include <stdio.h>
#include <stdlib.h>

/*
Crie uma enumeração representando os itens de uma lista de compras.
Agora, escreva um programa que leia um valor inteiro do teclado e exiba o
nome do item comprado e o seu preço.
*/

enum lista_compras
{
    ARROZ = 1,
    FEIJAO,
    MACARRAO,
    CARNE,
    LEITE,
    OVO,
    PÃO,
    QUEIJO,
    FRUTAS,
    LEGUMES
};

int main()
{
    int item;
    printf("Digite o número do item comprado (1 para Arroz, 2 para Feijão, ... 10 para Legumes): ");
    scanf("%d", &item);

    switch (item)
    {
    case ARROZ:
        printf("Item: Arroz\nPreço: R$ 10,00\n");
        break;
    case FEIJAO:
        printf("Item: Feijão\nPreço: R$ 8,00\n");
        break;
    case MACARRAO:
        printf("Item: Macarrão\nPreço: R$ 5,00\n");
        break;
    case CARNE:
        printf("Item: Carne\nPreço: R$ 30,00\n");
        break;
    case LEITE:
        printf("Item: Leite\nPreço: R$ 4,00\n");
        break;
    case OVO:
        printf("Item: Ovo\nPreço: R$ 12,00 (dúzia)\n");
        break;
    case PÃO:
        printf("Item: Pão\nPreço: R$ 7,00\n");
        break;
    case QUEIJO:
        printf("Item: Queijo\nPreço: R$ 25,00\n");
        break;
    case FRUTAS:
        printf("Item: Frutas\nPreço: R$ 15,00\n");
        break;
    case LEGUMES:
        printf("Item: Legumes\nPreço: R$ 10,00\n");
        break;
    default:
        printf("Item inválido.\n");
        break;
    }

    return 0;
}
