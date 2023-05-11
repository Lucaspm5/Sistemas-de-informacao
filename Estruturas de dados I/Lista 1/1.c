#include <stdio.h>
#include <limits.h>

int main()
{
    int X;
    int cont = 0, soma = 0, maior = 0, media = 0, menor = INT_MAX;
    int auxiliary[cont];

    while(scanf("%d", &X))
    {
        if (X == -1) break;
        else
            auxiliary[cont++] = X;      
    }
    
    for (int i = 0;i < cont;i++)
    {
        if (auxiliary[i] > maior) {maior = auxiliary[i];}
        if (auxiliary[i] < menor) {menor = auxiliary[i];}

        soma += auxiliary[i];
    }

    media = soma / cont;

    printf("%d\n",soma);
    printf("%d\n",media);
    printf("%d - %d\n",menor, maior);

    return 0;
}