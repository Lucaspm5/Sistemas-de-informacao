#include <stdio.h>

int exponencial(int b, int p)
{
    if (b == 0) return 1;
    if (p == 1) return b;

    else return b*exponencial(b, p - 1);
}

int main()
{
    int base, expoente;

    scanf("%d %d", &base, &expoente);

    printf("%d\n", exponencial(base, expoente));

    return 0;
}