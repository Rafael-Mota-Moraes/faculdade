#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Digite um simbolo de pontuacao: ");
    ch = getchar();

    switch (ch)
    {
    case '.':
        printf("Ponto\n");
        break;
    case ',':
        printf("Virgula\n");
        break;
    case ':':
        printf("Dois Pontos\n");
        break;
    case ';':
        printf("Ponto e virgula\n");
        break;
    default:
        printf("Nao eh pontuacao.");
        break;
    }

    return 0;
}