#include <stdio.h>

#define size 10

int main()
{

    int *ptr = NULL;
    int arr[size];

    ptr = arr;

    for (int i = 0;i < size;i++)
        scanf("%d",&arr[i]);

    for (int i = 0;i < size;i++)
        (*(ptr + i))++;

    for (int i = 0;i < size;i++)
        printf("%d ",arr[i]);

    return 0;
}