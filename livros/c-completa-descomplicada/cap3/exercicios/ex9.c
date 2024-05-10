#include <stdio.h>
#include <stdlib.h>

/*
Leia um ângulo em graus e apresente-o convertido em
radianos. A fórmula de conversão é R = G * π/180, sendo G o
ângulo em graus e R em radianos e π = 3.141592.
*/

int main()
{
    float ang_graus, ang_rad;
    const float PI = 3.141592;
    printf("Digite o angulo em graus: ");
    scanf("%f", &ang_graus);

    ang_rad = ang_graus * PI / 180;
    printf("Angulo em radianos: %f\n", ang_rad);

    return 0;
}