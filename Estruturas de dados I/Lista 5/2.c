#include <stdio.h>

#define NULL ((void*)0)

int recressao(int k)
{
    if (k > 0) { printf("%d ", k);return recressao(k-1); }

    return NULL;
}

int main()
{
    int k;

    scanf("%d", &k);

    printf("%d\n",recressao(k));

    return 0;
}