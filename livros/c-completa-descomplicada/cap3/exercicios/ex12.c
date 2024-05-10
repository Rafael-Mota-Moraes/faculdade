#include <stdio.h>
#include <stdlib.h>

/*
Leia a altura e o raio de um cilindro circular e imprima o
volume desse cilindro. O volume de um cilindro circular é
calculado por meio da seguinte fórmula:

V = π  * raio² * altura;

em que π = 3.141592
*/

int main()
{
    float raio, area, altura;
    const float PI = 3.141592;
    printf("Digite o raio: ");
    scanf("%f", &raio);

    printf("Digite a altura: ");
    scanf("%f", &altura);
    float volume = PI * (raio * raio) * altura;
    printf("Volume: %f\n", volume);

    return 0;
}