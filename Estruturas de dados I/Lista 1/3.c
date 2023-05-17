#include <stdio.h>

#define ent(x,y) scanf("%d %d",&x,&y)

int expoencial(int x, int expoente)
{   
    if (x == 1 || expoente == 0) return 1;
    if (x == 2 && expoente == 1) return x;
    else
    {
        return x * expoencial(x, expoente - 1);
    }
}

int main()
{
    int N, expoente;

    ent(N, expoente);

    printf("%d\n",expoencial(N,expoente));

    return 0;
}
