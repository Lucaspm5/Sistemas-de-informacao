#include <stdio.h>

void soma(int *a, int *b)
{
    int soma = 0;

    soma = *a + *b;

    *a = soma;
}

int main()
{
    int a, b;

    scanf("%d %d",&a,&b);

    soma(&a,&b);
    
    printf("Soma: %d - B: %d",a,b);

    return 0;
}