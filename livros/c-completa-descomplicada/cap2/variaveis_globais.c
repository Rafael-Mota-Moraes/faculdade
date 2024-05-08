#include <stdio.h>
#include <stdlib.h>

int x = 5; // Variável global

void incr() {
	x++; // acesso a variável global
}

int main(){
	printf("x = %d\n", x); // acesso a variavel global
	incr();
	printf("x = %d\n", x); // acesso a variavel global
	
	
	return 0;
}
