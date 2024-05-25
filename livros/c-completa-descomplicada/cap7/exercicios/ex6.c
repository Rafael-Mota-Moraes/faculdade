#include <stdio.h>
#include <stdlib.h>

/*
Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui.
Entre com um caractere (vogal ou consoante) e substitua todas as vogais da
palavra dada por esse caractere. Ao ﬁnal, imprima a nova string e o
número de vogais que ela possui.
*/

int main()
{
    char str[100];
    printf("Digite sua string: ");
    fgets(str, 100, stdin);

    char chr;
    printf("Digite o caractere: ");
    scanf("%c", &chr);

    char ch = str[0];
    int i = 0, qtd_vogais = 0;

    while (ch != '\0')
    {
        ch = str[i];

        if (
            ch == 'A' || ch == 'a' ||
            ch == 'E' || ch == 'e' ||
            ch == 'I' || ch == 'i' ||
            ch == 'O' || ch == 'o' ||
            ch == 'U' || ch == 'u')
        {
            qtd_vogais++;
            str[i] = chr;
        }

        i++;
    }

    printf("Qtd vogais: %d\n", qtd_vogais);
    printf("Nova string: %s\n", str);

    return 0;
}
