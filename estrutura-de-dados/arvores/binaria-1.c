#include <stdio.h>
#include <stdlib.h>

// Structs
struct arvore
{
    int chave;          // 4 bytes
    struct arvore *pai; // 8 bytes
    struct arvore *esq; // 8 bytes
    struct arvore *dir; // 8 bytes
};

// Funções
void inserir(struct arvore **arv, int chave);
void em_ordem(struct arvore *arv);
struct arvore *busca(struct arvore *no, int chave);
struct arvore *minimo(struct arvore *x);
struct arvore *maximo(struct arvore *x);
struct arvore *sucessor(struct arvore *x);

int main()
{
    struct arvore *arv = NULL;
    int v[] = {15, 6, 3, 2, 4, 7, 13, 9, 18, 17, 20}, i;

    for (i = 0; i < 11; i++)
        inserir(&arv, v[i]);

    em_ordem(arv);

    for (int i = 0; i < 11; i++)
    {
        struct arvore *temp = busca(arv, v[i]);

        if (temp != NULL)
            printf("%d foi encontrado\n", temp->chave);
    }
    struct arvore *temp = busca(arv, 100);

    if (temp != NULL)
        printf("%d foi encontrado\n", temp->chave);
    else
        printf("100 não foi encontrado\n");
    printf("\nOk, inseridos!\n");

    printf("\n\nMINIMO E MÁXIMO\n\n");
    struct arvore *min = minimo(arv);
    struct arvore *max = maximo(arv);
    printf("Minimo: %d\nMáximo: %d\n", min->chave, max->chave);

    printf("\n\nSUCESSOR\n\n");
    struct arvore *sucec = sucessor(arv);
    printf("Sucessor de %d é %d\n", arv->chave, sucec->chave);
    return 0;
}

struct arvore *minimo(struct arvore *x)
{
    while (x->esq != NULL)
    {
        x = x->esq;
    }

    return x;
}

struct arvore *maximo(struct arvore *x)
{
    while (x->dir != NULL)
    {
        x = x->dir;
    }

    return x;
}

struct arvore *sucessor(struct arvore *x)
{
    if (x->dir != NULL)
        return minimo(x->dir);

    struct arvore *y = x->pai;

    while (y != NULL && x == y->dir)
    {
        x = y;
        y = y->pai;
    }

    return y;
}

struct arvore *busca(struct arvore *no, int chave)
{
    while (no != NULL && no->chave != chave)
    {
        if (chave < no->chave)
        {
            no = no->esq;
        }
        else
        {
            no = no->dir;
        }
    }

    return no;
}

void em_ordem(struct arvore *arv)
{
    if (arv == NULL)
        return;

    em_ordem(arv->esq);
    printf("%d ", arv->chave);
    em_ordem(arv->dir);
}

void inserir(struct arvore **arv, int chave)
{
    struct arvore *y = NULL;
    struct arvore *x = *arv;
    struct arvore *raiz = *arv;

    while (x != NULL)
    {
        y = x;
        if (chave == x->chave)
        {
            return;
        }
        else if (chave < x->chave)
        {
            x = x->esq;
        }
        else
        {
            x = x->dir;
        }
    }

    struct arvore *z = malloc(sizeof(struct arvore));
    z->chave = chave;
    z->pai = y;
    z->esq = NULL;
    z->dir = NULL;

    if (y == NULL)
    {
        *arv = z;
    }
    else if (z->chave < y->chave)
    {
        y->esq = z;
    }
    else
    {
        y->dir = z;
    }
}