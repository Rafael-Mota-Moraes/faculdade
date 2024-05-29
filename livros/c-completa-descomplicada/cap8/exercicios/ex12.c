#include <stdio.h>
#include <stdlib.h>

/*
Crie uma enumeração representando os meses do ano. Agora, escreva um
programa que leia um valor inteiro do teclado e exiba o nome do mêscorrespondente e quantos dias ele possui.
*/

enum meses_ano
{
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
};

int main()
{
    int mes;
    printf("Digite o mês do ano (1 para Janeiro, 2 para Fevereiro, ... 12 para Dezembro): ");
    scanf("%d", &mes);

    switch (mes)
    {
    case JANEIRO:
        printf("Mês: Janeiro\nDias: 31\n");
        break;
    case FEVEREIRO:
        printf("Mês: Fevereiro\nDias: 28 ou 29\n");
        break;
    case MARCO:
        printf("Mês: Março\nDias: 31\n");
        break;
    case ABRIL:
        printf("Mês: Abril\nDias: 30\n");
        break;
    case MAIO:
        printf("Mês: Maio\nDias: 31\n");
        break;
    case JUNHO:
        printf("Mês: Junho\nDias: 30\n");
        break;
    case JULHO:
        printf("Mês: Julho\nDias: 31\n");
        break;
    case AGOSTO:
        printf("Mês: Agosto\nDias: 31\n");
        break;
    case SETEMBRO:
        printf("Mês: Setembro\nDias: 30\n");
        break;
    case OUTUBRO:
        printf("Mês: Outubro\nDias: 31\n");
        break;
    case NOVEMBRO:
        printf("Mês: Novembro\nDias: 30\n");
        break;
    case DEZEMBRO:
        printf("Mês: Dezembro\nDias: 31\n");
        break;
    default:
        printf("Mês inválido.\n");
        break;
    }

    return 0;
}
