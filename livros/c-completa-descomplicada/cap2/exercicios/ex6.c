#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um valor do tipo
double e depois o imprima na forma de notação
científica.
*/

int main() {
	float n1 = 15000000;
	scanf("%f", &n1);
	printf("Valor lido: %.5e", n1); // Imprimiu 0
	return 0;
}

