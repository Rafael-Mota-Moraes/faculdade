#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia certa quantidade de números, imprima o
maior deles e quantas vezes o maior número foi lido. A quantidade de
números a serem lidos deve ser fornecida pelo usuário.
*/

int main()
{
    int quantidade, numero, maior_numero, contagem_maior;

    // Solicita ao usuário a quantidade de números a serem lidos
    printf("Digite a quantidade de números a serem lidos: ");
    scanf("%d", &quantidade);

    // Verifica se a quantidade é válida
    if (quantidade <= 0)
    {
        printf("A quantidade de números deve ser maior que zero.\n");
        return 1;
    }

    // Inicializa as variáveis
    maior_numero = -2147483648; // Menor valor possível para um int
    contagem_maior = 0;

    // Lê os números fornecidos pelo usuário
    for (int i = 0; i < quantidade; i++)
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numero);

        // Atualiza o maior número e sua contagem
        if (numero > maior_numero)
        {
            maior_numero = numero;
            contagem_maior = 1;
        }
        else if (numero == maior_numero)
        {
            contagem_maior++;
        }
    }

    // Imprime o resultado
    printf("O maior número é: %d\n", maior_numero);
    printf("O maior número foi lido %d vezes\n", contagem_maior);

    return 0;
}