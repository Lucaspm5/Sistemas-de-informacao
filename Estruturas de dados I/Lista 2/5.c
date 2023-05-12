#include <stdio.h>
#include <stdbool.h>

void retorna(int *a, int *b)
{
    int maior = *a;
    int menor = *b;

    bool auxiliary = (maior > menor);

    if (auxiliary)
    {
        *a = maior;
        *b = menor; 
    }else{
        *a = menor;
        *b = maior;
    }
}


int main()
{
    int A, B;

    scanf("%d %d",&A ,&B);

    retorna(&A,&B);

    printf("Maior - %d Menor - %d",A,B);

    return 0;
}