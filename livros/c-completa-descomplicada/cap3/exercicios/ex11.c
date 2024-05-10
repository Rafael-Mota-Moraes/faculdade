#include <stdio.h>
#include <stdlib.h>

/*
Leia o valor do raio de um círculo. Calcule e imprima a área
do círculo correspondente. A área do círculo é A = π * raio2,
sendo π = 3.141592.
*/

int main()
{
    float raio, area;
    const float PI = 3.141592;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    area = PI * (raio * raio);
    printf("Area: %f\n", area);

    return 0;
}