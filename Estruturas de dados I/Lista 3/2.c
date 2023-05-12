#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    int X;
    int cont = 0, soma = 0, maior = 0, media = 0, menor = INT_MAX;
    int *auxiliary = NULL;

    auxiliary = (int*)calloc(cont, sizeof(int));

    while(scanf("%d", &X))
    {
        if (X == -1) break;
        else
            *(auxiliary + cont++) = X; 
    }
    
    for (int i = 0;i < cont;i++)
    {
        if (*(auxiliary + i) > maior) {maior = *(auxiliary + i);}
        if (*(auxiliary + i) < menor) {menor = *(auxiliary + i);}

        soma += *(auxiliary + i);
    }

    media = soma / cont;

    printf("%d\n",soma);
    printf("%d\n",media);
    printf("%d - %d\n",menor, maior);

    for (int i = 0;i < cont;i++)
        printf("%d ",*(auxiliary + i));

    free(auxiliary);
    
    return 0;
}
