#include <stdio.h>
#include <stdlib.h>

/*
Crie uma estrutura para representar as coordenadas de um ponto no plano
(posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
distância dele até a origem das coordenadas, isto é, a posição (0,0).
*/

struct ponto
{
    int x;
    int y;
};

int main()
{
    struct ponto p1;

    printf("Digite x e y: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("x=%d, y=%d\n", p1.x, p1.y);
    int distancia = abs(p1.x - p1.y);

    printf("A distancia eh: %d", distancia);

    return 0;
}