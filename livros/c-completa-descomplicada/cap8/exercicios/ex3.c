#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o
ponto superior esquerdo e o ponto inferior direito do retângulo. Cada
ponto é definido por uma estrutura Ponto, a qual contém as posições X e Y.
Faça um programa que declare e leia uma estrutura Retângulo e exiba a
área e o comprimento da diagonal e o perímetro desse retângulo.
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

    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%d %d", &ret.supEsq.x, &ret.supEsq.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%d %d", &ret.infDir.x, &ret.infDir.y);

    int largura = abs(ret.infDir.x - ret.supEsq.x);
    int altura = abs(ret.supEsq.y - ret.infDir.y);

    int area = largura * altura;
    int perimetro = 2 * (largura + altura);
    double diagonal = sqrt(largura * largura + altura * altura);

    printf("Área do retângulo: %d\n", area);
    printf("Perímetro do retângulo: %d\n", perimetro);
    printf("Comprimento da diagonal do retângulo: %.2f\n", diagonal);

    return 0;
}