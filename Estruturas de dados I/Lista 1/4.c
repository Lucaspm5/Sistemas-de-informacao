#include <stdio.h>

int inverso(int x)
{   
    if (x <= 9) return x;

    else
    {
        // Imprimi o ultimo numero
        printf("%d",x % 10);
        return inverso(x / 10); // Pula a casa decimal
    }
}

int main()
{
    int N;

    scanf("%d", &N);

    printf("%d\n",inverso(N));

    return 0;
}