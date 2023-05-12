#include <stdlib.h>

int main()
{
    int a;
    float b;
    char c;

    scanf("%d %f %c",&a,&b,&c);

    int *ptr_a;
    float *ptr_b;
    char *ptr;

    ptr_a = &a;
    ptr_b = &b;
    ptr = &c;

    printf("Antes - \n");
    printf("%d - %.2f - %c\n",a ,b, c);
    printf("Depois - \n");

    *ptr_a = 87;
    *ptr_b = 4848.4;
    *ptr = 'C';

    printf("%d - %.2f - %c\n",a,b,c);

    return 0;
}