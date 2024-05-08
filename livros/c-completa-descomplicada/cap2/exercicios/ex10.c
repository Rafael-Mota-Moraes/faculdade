#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa que solicite ao usuário
entrar com o valor do dia, mês e ano (inteiros).
Em seguida, imprima os valores lidos separados
por uma barra (\).
*/

int main() {
	int d, m, a;
	scanf("%d %d %d", &d, &m, &a);
	printf("%d\\%d\\%d", d, m, a);
	
	return 0;
}
