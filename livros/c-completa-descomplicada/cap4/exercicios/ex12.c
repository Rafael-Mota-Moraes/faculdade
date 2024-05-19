#include <stdio.h>

int main()
{
    int diaSemana;

    printf("Digite o número do dia da semana (1 para Domingo, 2 para Segunda, etc.): ");
    scanf("%d", &diaSemana);

    switch (diaSemana)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terça-feira\n");
        break;
    case 4:
        printf("Quarta-feira\n");
        break;
    case 5:
        printf("Quinta-feira\n");
        break;
    case 6:
        printf("Sexta-feira\n");
        break;
    case 7:
        printf("Sábado\n");
        break;
    default:
        printf("Dia da semana inválido\n");
        break;
    }

    return 0;
}
