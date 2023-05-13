#include <stdio.h>

int main() 
{
    int A, *B, **C, ***D;
    
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    printf("O dobro de %d é %d\n", A, *B * 2);
    printf("O triplo de %d é %d\n", A, **C * 3);
    printf("O quádruplo de %d é %d\n", A, ***D * 4);

    return 0;
}
