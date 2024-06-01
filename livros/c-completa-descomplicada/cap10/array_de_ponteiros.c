#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pvet[2];
    int x = 10, y[2] = {20, 30};
    pvet[0] = &x;
    pvet[1] = y;

    // imprime os endereços das variáveis
    printf("Endereco de pvet[0]: %p\n", pvet[0]);
    printf("Endereco de pvet[1]: %p\n", pvet[1]);

    // imprime o conteúdo de uma variável
    printf("Conteudo em pvet[0]: %d\n", *pvet[0]);

    // imprime a posição de um vetor
    printf("Conteudo pvet[1][1]: %d\n", pvet[1][1]);

    return 0;
}