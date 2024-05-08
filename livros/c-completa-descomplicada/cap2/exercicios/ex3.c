#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um número
inteiro e depois imprima a mensagem “Valor
lido:”, seguido do valor inteiro. Use apenas um
comando printf().
*/

int main() {
	int n;
	scanf("%d", &n);
	printf("Valor lido: %d", n);
	return 0;
}

