#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um número inteiro e
depois o imprima usando o operador “%f”. Veja o
que aconteceu.
*/

int main() {
	int n;
	scanf("%d", &n);
	printf("Valor lido: %f", n); // Imprimiu 0.0000...
	return 0;
}

