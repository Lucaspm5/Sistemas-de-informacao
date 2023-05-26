#include <stdio.h>

int soma(int k) 
{
    return (k > 0) ? k + soma(k - 1) : 0;
}


int main()
{
    int k;

    scanf("%d", &k);

    printf("%d\n",soma(k));

    return 0;
}