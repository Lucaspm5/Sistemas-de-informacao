#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b;

    scanf("%d %d",&a,&b);

    bool auxiliary = (&a > &b);

    if(auxiliary) printf("%p",&a);
    else
        printf("%p",&b);
        
    return 0;
}