#include <stdio.h>

/*
Faça um programa que leia o salário de um trabalhador e o
valor da prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo
não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”
*/

int main()
{
    float salario, valor_prestacao;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestacao: ");
    scanf("%f", &valor_prestacao);

    if (valor_prestacao > (salario * 0.2))
    {
        printf("Empréstimo não concedido.\n");
    }
    else
    {
        printf("Empréstimo concedido\n");
    }
    return 0;
}
