#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que contenha uma estrutura representando uma
data válida. Essa estrutura deve conter os campos dia, mês e ano. Em
seguida, leia duas datas e armazene nessa estrutura. Calcule e exiba o
número de dias que decorreram entre as duas datas.
*/

struct Data
{
    int dia;
    int mes;
    int ano;
};

int main()
{
    struct Data data1, data2;
    int dias1 = 0, dias2 = 0;
    int dias_no_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Digite a primeira data (dia mes ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dia mes ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    for (int ano = 0; ano < data1.ano; ano++)
    {
        dias1 += (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ? 366 : 365;
    }
    for (int mes = 0; mes < data1.mes - 1; mes++)
    {
        dias1 += dias_no_mes[mes];
        if (mes == 1 && (data1.ano % 4 == 0 && (data1.ano % 100 != 0 || data1.ano % 400 == 0)))
        {
            dias1++;
        }
    }
    dias1 += data1.dia;

    for (int ano = 0; ano < data2.ano; ano++)
    {
        dias2 += (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ? 366 : 365;
    }
    for (int mes = 0; mes < data2.mes - 1; mes++)
    {
        dias2 += dias_no_mes[mes];
        if (mes == 1 && (data2.ano % 4 == 0 && (data2.ano % 100 != 0 || data2.ano % 400 == 0)))
        {
            dias2++;
        }
    }
    dias2 += data2.dia;

    int diferenca = dias2 - dias1;
    if (diferenca < 0)
    {
        diferenca = -diferenca;
    }

    printf("O número de dias entre as duas datas é: %d dias\n", diferenca);

    return 0;
}