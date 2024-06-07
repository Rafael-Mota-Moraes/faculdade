#include <stdio.h>
#include <stdlib.h>

struct arvore
{
    int chave;          // 4 bytes
    struct arvore *pai; // 8 bytes
    struct arvore *esq; // 8 bytes
    struct arvore *dir; // 8 bytes
};

void inserir(struct arvore **arv, int chave);
void em_ordem(struct arvore *arv);

int main()
{
    struct arvore *arv = NULL;
    int v[] = {15, 6, 3, 2, 4, 7, 13, 9, 18, 17, 20}, i;

    for (i = 0; i < 11; i++)
        inserir(&arv, v[i]);

    em_ordem(arv);

    printf("\nOk, inseridos!\n");

    return 0;
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
