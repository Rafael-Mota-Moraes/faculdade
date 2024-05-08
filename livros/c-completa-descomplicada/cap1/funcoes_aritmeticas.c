#include <stdio.h>
#include <stdlib.h>
#include "aritmetica.h" // Inclui nossa biblioteca

int main() {
	int x, y, z;
	char ch;
	printf("Digite uma operacao matematica (+, -, *, /): ");
	ch = getchar();
	printf("Digite dois numeros: ");
	scanf("%d %d", &x, &y);
	switch(ch) {
		case '+': z = soma(x, y); break;
		case '-': z = subtracao(x, y); break;
		case '*': z = produto(x, y); break;
		case '/': z = divisao(x, y); break;
		default: printf("Escolha uma opcao correta!");
	}
	
	printf("Resultado = %d\n", z);
	
}
