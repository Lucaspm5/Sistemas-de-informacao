#include <stdio.h>
#include <stdlib.h>

#define size 10
#define alocacao(x, size) x = (int*)malloc(size * sizeof(int))
#define READ(x, size) do { \
        for (unsigned i = 0;i < size;i++) \
            scanf("%d",&*(x + i)); \
    }while(0)

int *obtem_produtos_zerados(int *codigo, int *estoque, int n, int *qtd_zerados)
{
    int i;
    int cont = 0;
    int *produtos_zerados = NULL;

    for (i = 0;i < n;i++)
    {
        if (*(estoque + i) == 0)
            cont++;
    }

    produtos_zerados = (int*)malloc(cont * sizeof(int));

    cont = 0;
    
    for (i = 0;i < n;i++)
    {
        if (*(estoque + i) == 0)
            *(produtos_zerados + cont++) = *(codigo + i);
    }

    *qtd_zerados = cont;

    return produtos_zerados;
}

int main()
{
    int *codigo = NULL;
    int *estoque = NULL;

    alocacao(codigo, size);
    alocacao(estoque, size);

    READ(codigo, size);
    READ(estoque, size);

    int qtd_zerados = 0;
    int *produtos_zerados = NULL;

    produtos_zerados = obtem_produtos_zerados(codigo, estoque, size, &qtd_zerados);

    for (unsigned i = 0;i < qtd_zerados;i++)
        printf("%d ", *(produtos_zerados + i));
    
    free(codigo);
    free(estoque);
    free(produtos_zerados);

    return 0;
}
