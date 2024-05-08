#include <stdio.h>
#include <stdlib.h>

int main() {
	int x; // declara a variavel mas não define o vaalor
	printf("x = %d\n", x); // lixo de memória
	x = 5; // define o valor de 'x' como sendo 5
	printf("x = %d\n", x);
	
	return 0;
}
