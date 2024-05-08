#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um valor do tipo
float e depois o imprima usando o operador “%d”.
Veja o que aconteceu.
*/

int main() {
	float n;
	scanf("%d", &n);
	printf("Valor lido: %d", n); // Imprimiu 0
	return 0;
}

