#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a,b;

    bool auxiliary = (&a > &b);

    if(auxiliary) printf("%p",&a);
    if(!auxiliary) printf("%p",&b);

    return 0;
}