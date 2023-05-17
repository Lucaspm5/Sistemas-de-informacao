#include <stdio.h>
#include <limits.h>

#define size 5

void min_max(int *v, int n, int *min, int *max) 
{
    *min = *max = v[0];

    for (int i = 1; i < n; i++) 
    {
        if (v[i] < *min) *min = v[i];
        if (v[i] > *max) *max = v[i];
    }
}

int main() 
{
    int v[size];

    for (int i = 0;i < size;i++)
        scanf("%d", &v[i]);

    int min, max;

    min_max(v, size, &min, &max);

    printf("min: %d\n", min);
    printf("max: %d\n", max);

    return 0;
}
