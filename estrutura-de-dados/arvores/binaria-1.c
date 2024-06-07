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

    inserir(&arv, 10);
    inserir(&arv, 7);
    inserir(&arv, 15);
    inserir(&arv, 11);

    em_ordem(arv);

    printf("Ok, inseridos!\n");

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
