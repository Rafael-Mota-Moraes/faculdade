#include <stdio.h>
#include <stdlib.h>

/*
Leia um conjunto de números reais, armazenando-o em vetor. Em seguida,
calcule o quadrado de cada elemento desse vetor, armazenando esse
resultado em outro vetor. Os conjuntos têm, no máximo, 20 elementos.
Imprima os dois conjuntos de números.
*/

int main()
{
    float v[5];
    float v_quadrado[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um número: ");
        scanf("%f", &v[i]);
        v_quadrado[i] = v[i] * v[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Número: %f, quadrado: %f\n", v[i], v_quadrado[i]);
    }

    return 0;
}
