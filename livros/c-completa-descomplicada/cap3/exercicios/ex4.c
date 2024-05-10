#include <stdio.h>
#include <stdlib.h>

/*
Leia quatro valores do tipo float. Calcule e exiba a média
aritmética desses valores
*/

int main()
{
    float n1, n2, n3, n4, media;
    printf("Digite 4 numeros: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1 + n2 + n3 + n4) / 4;
    printf("Media: %f\n", media);

    return 0;
}