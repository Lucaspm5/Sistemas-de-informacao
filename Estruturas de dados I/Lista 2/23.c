#include <stdio.h>
#include <limits.h>

int maior_n(int *arr, int size)
{
    int maior = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (maior < *(arr + i))
        {
            maior = *(arr + i);
        }
    }
    return maior;
}

/*int maior_k(int *arr, int size)
{
    int maior = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (maior < *(arr + i))
        {
            maior = *(arr + i);
        }
    }
    return maior;
}*/

int main()
{
    int N;
    int K;

    scanf("%d", &N);
    scanf("%d", &K);

    int arr[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    int maior = maior_n(arr, N);

    printf("Maior elemento em N: %d\n", maior);
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");

    int maior2 = maior_n(arr, K);
    printf("Maior elemento em K: %d\n", maior2);
    for (int i = 0; i < K; i++)
        printf("%d ", arr[i]);

    return 0;
}
