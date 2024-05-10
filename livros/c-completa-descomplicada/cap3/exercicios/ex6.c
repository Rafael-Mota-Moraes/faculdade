#include <stdio.h>
#include <stdlib.h>

/*
Leia uma velocidade em km/h (quilômetros por hora) e
apresente convertida em m/s (metros por segundo). A fórmula
de conversão é M = K/36, sendo K a velocidade em km/h e M
em m/s.
*/

int main()
{
    int vel_km, vel_ms;

    printf("Digite a velocidade em Km/h: ");
    scanf("%d", &vel_km);
    vel_ms = vel_km / 36;
    printf("Veloidade em m/s %d", vel_ms);

    return 0;
}