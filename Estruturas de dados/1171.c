#include <string.h>
#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);

    int frequencias[10000] = {0};

    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        frequencias[x]++;
    }

    for (int i = 0; i < 10000; i++){
        if (frequencias[i] != 0){
            printf("%d aparece %d vez(es)\n", i, frequencias[i]);
        }
    }

    return 0;
}