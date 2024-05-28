#include <stdio.h>
#include <math.h>
#include <stdlib.h> // Para a função abs

/*
Usando a estrutura Retângulo do exercício anterior, faça um programa que
declare e leia uma estrutura Retângulo e um Ponto, e informe se esse ponto
está ou não dentro do retângulo.
*/

struct Ponto
{
    int x;
    int y;
};

struct Retangulo
{
    struct Ponto supEsq;
    struct Ponto infDir;
};

int main()
{
    struct Retangulo ret;
    struct Ponto p;

    printf("Digite as coordenadas do ponto superior esquerdo do retângulo (x y): ");
    scanf("%d %d", &ret.supEsq.x, &ret.supEsq.y);

    printf("Digite as coordenadas do ponto inferior direito do retângulo (x y): ");
    scanf("%d %d", &ret.infDir.x, &ret.infDir.y);

    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%d %d", &p.x, &p.y);

    // Verificar se o ponto está dentro do retângulo
    if (p.x >= ret.supEsq.x && p.x <= ret.infDir.x && p.y <= ret.supEsq.y && p.y >= ret.infDir.y)
    {
        printf("O ponto (%d, %d) está dentro do retângulo.\n", p.x, p.y);
    }
    else
    {
        printf("O ponto (%d, %d) não está dentro do retângulo.\n", p.x, p.y);
    }

    return 0;
}
