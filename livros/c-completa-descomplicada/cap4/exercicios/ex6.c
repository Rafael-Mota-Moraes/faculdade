#include <stdio.h>

/*
Faça um programa que receba a altura e o sexo de uma pessoa
e calcule e mostre seu peso ideal, utilizando as seguintes
fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7
*/

int main()
{
    float altura;
    printf("Digite a altura: ");
    scanf("%f", &altura);

    float peso_ideal_homem = (72.7 * altura) - 58;
    float peso_ideal_mulher = (62.1 * altura) - 44.7;

    printf("Peso ideal homem: %f\n", peso_ideal_homem);
    printf("Peso ideal mulher: %f\n", peso_ideal_mulher);

    return 0;
}
