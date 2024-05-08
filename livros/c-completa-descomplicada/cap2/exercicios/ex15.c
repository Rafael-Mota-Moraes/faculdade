#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia três variáveis:
char, int e float. Em seguida, imprima-as de três
maneiras diferentes: separadas por espaços, por
uma tabulação horizontal e uma em cada linha.
Use um único comando printf() para cada
operação de escrita das três variáveis.
*/



int main() {
	char var_char;
    int var_int;
    float var_float;

    printf("Digite um caractere, um numero inteiro e um numero de ponto flutuante:\n");
    scanf("%c %d %f", &var_char, &var_int, &var_float);

    // Imprime as variáveis separadas por espaços
    printf("%c %d %f\n", var_char, var_int, var_float);

    // Imprime as variáveis separadas por uma tabulação horizontal
    printf("%c\t%d\t%f\n", var_char, var_int, var_float);

    // Imprime uma variável em cada linha
    printf("%c\n%d\n%f\n", var_char, var_int, var_float);

    return 0;
}

