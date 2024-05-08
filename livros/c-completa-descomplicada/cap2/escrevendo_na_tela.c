#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Esse texto sera escrito na tela");
	
	int x = 10;
	// Escrita de um valor inteiro
	printf("%d\n", x);
	
	float y = 5.0;
	// Escrita de um valor inteiro e outro real
	printf("%d %f\n" x, y);

	// Junto ao tipo de saída, pode-se adicionar texto.
	
	printf("Total = %d\n", x);
	printf("%d de caixas\n", x);
	printf("Total de %d caixas\n", x);
	return 0;
}
