#include <stdio.h>
#include <stdlib.h>

void func1() {
	int x; // variável local
}

void func2() {
	int x; // variavel local
}

int main() {
	int x;
	scanf("%d", &x);
	
	if(x == 5) {
		int y = 1;
		printf("%d\n", y);
	}
	
	return 0;
}