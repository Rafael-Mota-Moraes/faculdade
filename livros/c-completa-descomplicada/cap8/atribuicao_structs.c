#include <stdio.h>
#include <stdlib.h>

struct ponto
{
    int x;
    int y;
};

struct novo_ponto
{
    int x;
    int y;
};

int main()
{
    struct ponto p1, p2 = {1, 2};
    struct novo_ponto p3;
    p1 = p2;
    printf("x = %d, y = %d\n", p1.x, p1.y);

    // ERRO! Tipos diferentes
    // p3 = p2;

    return 0;
}
