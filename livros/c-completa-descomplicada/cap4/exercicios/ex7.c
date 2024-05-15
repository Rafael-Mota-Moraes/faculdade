#include <stdio.h>

/*
Uma empresa vende o mesmo produto para quatro diferentes
estados. Cada estado possui uma taxa diferente de imposto
sobre o produto. Faça um programa em que o usuário entre
com o valor e o estado de destino do produto e o programa
retorne o preço ﬁnal do produto acrescido do imposto do
estado em que ele será vendido. Se o estado digitado não for
válido, mostrará uma mensagem de erro.
*/

int main()
{
    float valor;
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Valor em MG: %f\n", (valor * 1.07));
    printf("Valor em SP: %f\n", (valor * 1.12));
    printf("Valor em RJ: %f\n", (valor * 1.15));
    printf("Valor em MS: %f\n", (valor * 1.08));

    return 0;
}
