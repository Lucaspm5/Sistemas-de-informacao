#include <stdio.h>

int soma(int a, int b) 
{
    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;

    if (min + 1 >= max) return 0;
    else return (min + 1) + soma(min + 1, max);
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int auxiliary = soma(a, b);

    printf("%d\n",auxiliary);

}