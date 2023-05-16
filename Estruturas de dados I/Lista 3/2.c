#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
    int X;
    int cont = 0, soma = 0, maior = 0, media = 0, menor = INT_MAX;
    int *auxiliary = NULL;

    while(scanf("%d", &X))
    {
        if (X == -1) break;
        else {
            auxiliary = realloc(auxiliary, (cont + 1) * sizeof(int));
            *(auxiliary + cont++) = X; 
        }
    }
    
    for (int i = 0;i < cont;i++)
    {
        if (*(auxiliary + i) > maior) {maior = *(auxiliary + i);}
        if (*(auxiliary + i) < menor) {menor = *(auxiliary + i);}

        soma += *(auxiliary + i);
    }

    media = soma / cont;

    printf("Soma - %d\n",soma);
    printf("Media - %d\n",media);
    printf("Menor: %d - Maior: %d\n",menor, maior);


    printf("vetor: ");
    for (int i = 0;i < cont;i++)
        printf("%d ",*(auxiliary + i));

    free(auxiliary);
    
    return 0;
}
