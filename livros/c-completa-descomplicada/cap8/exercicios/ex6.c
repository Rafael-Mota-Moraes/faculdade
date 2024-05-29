#include <stdio.h>
#include <stdlib.h>

/*
Crie uma estrutura representando uma hora. Essa estrutura deve conter os
campos hora, minuto e segundo. Agora, escreva um programa que leia um
vetor de tres posições dessa estrutura e imprima a maior hora.
*/

struct hora
{
    int hora;
    int minutos;
    int segundos;
};

#define SIZE 3

int main()
{
    struct hora horas[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("Digite hora, minutos e segundos: ");
        scanf("%d %d %d", &horas[i].hora, &horas[i].minutos, &horas[i].segundos);
    }

    int index_maior = 0;

    for (int i = 1; i < SIZE; i++)
    {
        if (horas[i].hora > horas[index_maior].hora)
        {
            index_maior = i;
        }
        else if (horas[i].hora == horas[index_maior].hora)
        {
            if (horas[i].minutos > horas[index_maior].minutos)
            {
                index_maior = i;
            }
            else if (horas[i].minutos == horas[index_maior].minutos)
            {
                if (horas[i].segundos > horas[index_maior].segundos)
                {
                    index_maior = i;
                }
            }
        }
    }

    printf("Maior hora eh: %02d:%02d:%02d\n", horas[index_maior].hora, horas[index_maior].minutos, horas[index_maior].segundos);

    return 0;
}