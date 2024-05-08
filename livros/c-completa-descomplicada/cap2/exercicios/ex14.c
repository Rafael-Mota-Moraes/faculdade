#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia três caracteres do
tipo char e depois os imprima um em cada linha.
Use um único comando printf() para isso.
*/



int main() {
	char ch1, ch2, ch3;
	scanf("%c %c %c", &ch1, &ch2, &ch3);
	printf("%c\n%c\n%c", ch1, ch2, ch3);
	
	return 0;
}

