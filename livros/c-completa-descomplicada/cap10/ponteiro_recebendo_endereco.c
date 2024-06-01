#include <stdio.h>
#include <stdlib.h>

int main()
{
    // endereço hxadecimal da porta serial
    int *p = 0x3F8;
    // O valor hexadecimal é convertido para outro valor hexadecimal: 0x5DC
    int *p1 = 1500;
    printf("Endereco de p: %p \n", p);
    printf("Endereco de p1: %p \n", p1);
    return 0;
}