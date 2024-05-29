#include <stdio.h>
#include <stdlib.h>

/*
Crie uma enumeração representando os dias da semana. Agora, escreva
um programa que leia um valor inteiro do teclado e exiba o dia da semana
correspondente
*/

enum dias_semana
{
    DOMINGO,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO
};

int main()
{
    int dia;
    printf("Digite o dia da semana (0 para Domingo, 1 para Segunda, ... 6 para Sábado): ");
    scanf("%d", &dia);

    if (dia < 0 || dia > 6)
    {
        printf("Dia da semana inválido.\n");
        return 1; // Termina o programa com código de erro
    }

    switch (dia)
    {
    case DOMINGO:
        printf("Dia da semana: Domingo\n");
        break;
    case SEGUNDA:
        printf("Dia da semana: Segunda\n");
        break;
    case TERCA:
        printf("Dia da semana: Terça\n");
        break;
    case QUARTA:
        printf("Dia da semana: Quarta\n");
        break;
    case QUINTA:
        printf("Dia da semana: Quinta\n");
        break;
    case SEXTA:
        printf("Dia da semana: Sexta\n");
        break;
    case SABADO:
        printf("Dia da semana: Sábado\n");
        break;
    default:
        printf("Dia da semana inválido.\n");
        break;
    }

    return 0;
}
