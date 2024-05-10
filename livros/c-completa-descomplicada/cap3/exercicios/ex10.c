#include <stdio.h>
#include <stdlib.h>

/*
A importância de R$ 780.000,00 será dividida entre três
ganhadores de um concurso, sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada
um dos ganhadores.
*/

int main()
{
    float total = 780000;
    float premio_primeiro = total * 0.46;
    float premio_segundo = total * 0.32;
    float premio_terceiro = total - premio_primeiro - premio_segundo;

    printf("Premio 1: R$ %.2f\n", premio_primeiro);
    printf("Premio 2: R$ %.2f\n", premio_segundo);
    printf("Premio 3: R$ %.2f\n", premio_terceiro);

    return 0;
}