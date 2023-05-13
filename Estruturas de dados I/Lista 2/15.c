#include <stdio.h>
#include <stdlib.h>
//-----------------------
int preenche(int **arr, int value) {
    int size = 0;

    while (scanf("%d",&value)) 
    {
        if (value == 0) break;

        size++;

        *arr = realloc(*arr, size * sizeof(int));

        *((*arr) + size - 1) = value;
    }

    return size;
}
//-----------------------
void print(int *arr, int size) {

    int *copy = arr;

    for (int i = 0; i < size; i++) 
    {
        printf("%d ", *copy);
        copy++;
    }
}
//-----------------------
int main() 
{
    int value;
    int *arr = NULL;

    int size = preenche(&arr, value);
    
    print(arr, size);

    return 0;
}
