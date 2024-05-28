#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crie uma estrutura representando um aluno de uma disciplina. Essa
estrutura deve conter o número de matrícula do aluno, seu nome e as notas
de três provas. Agora, escreva um programa que leia os dados de cinco
alunos e os armazene nessa estrutura. Em seguida, exiba o nome e as notas
do aluno que possui a maior média geral dentre os cinco.
*/

struct aluno
{
    int num_matricula;
    char nome[30];
    float notas[3];
};

int main()
{
    struct aluno alunos[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o numero da matricula: ");
        scanf("%d", &alunos[i].num_matricula);
        getchar();

        printf("Digite o nome do aluno: ");
        fgets(alunos[i].nome, 30, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        for (int j = 0; j < 3; j++)
        {
            printf("Nota da prova %d: ", (j + 1));
            scanf("%f", &alunos[i].notas[j]);
        }
    }
    float maior_media = 0;
    int indice_maior_media = 0;

    for (int i = 0; i < 5; i++)
    {
        float media = 0, total_notas = 0;
        printf("Nome: %s\n", alunos[i].nome);
        printf("Numero da matricula: %d\n", alunos[i].num_matricula);

        printf("Notas: ");
        for (int j = 0; j < 3; j++)
        {
            printf("%.2f ", alunos[i].notas[j]);
            total_notas += alunos[i].notas[j];
        }
        printf("\n");
        media = total_notas / 3;

        printf("Media do aluno: %.2f\n", media);
        if (media > maior_media)
        {
            maior_media = media;
            indice_maior_media = i;
        }
        printf("\n");
    }

    printf("\nAluno com a maior media geral:\n");
    printf("Nome: %s\n", alunos[indice_maior_media].nome);
    printf("Numero da matricula: %d\n", alunos[indice_maior_media].num_matricula);
    printf("Media: %.2f\n", maior_media);

    return 0;
}