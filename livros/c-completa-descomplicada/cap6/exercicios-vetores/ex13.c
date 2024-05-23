#include <stdio.h>

/*
Faça um programa para ler 10 números diferentes a serem armazenados
em um vetor. Os números deverão ser armazenados no vetor na ordem em
que forem lidos, sendo que, caso o usuário digite um número que já foi
digitado, o programa deverá pedir a ele para digitar outro número. Note
que cada valor digitado pelo usuário deve ser pesquisado no vetor,
veriﬁcando se ele existe entre os números que já foram fornecidos. Exiba na
tela o vetor ﬁnal que foi digitado.
*/

int main()
{
    int numeros[10];
    int i, j, num;

    printf("Digite 10 numeros diferentes:\n");

    for (i = 0; i < 10; i++)
    {
        do
        {
            scanf("%d", &num);
            for (j = 0; j < i; j++)
            {
                if (num == numeros[j])
                {
                    printf("Numero ja digitado, por favor digite outro: ");
                    num = -1;
                    break;
                }
            }
        } while (num == -1);

        numeros[i] = num;
    }

    printf("Vetor final:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
