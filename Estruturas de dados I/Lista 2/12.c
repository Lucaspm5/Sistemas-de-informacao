#include <stdbool.h>
#include <stdio.h>

int sort(int *a, int *b, int *c)
{   
    bool auxilary = false;

    if (*a == *b && *b == *c) return 1;
    
    else{
        while (!auxilary) 
        {
            auxilary = true;
            if (*a > *b) 
            {
                int flag = *a;
                *a = *b;
                *b = flag;
                auxilary = false;
            }
            if (*b > *c) 
            {
                int flag = *b;
                *b = *c;
                *c = flag;
                auxilary = false;
            }
        }
        return 0;
    }
    return NULL;
}

int main() 
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int result = sort(&a, &b, &c);

    printf("%d %d %d\n", a, b, c);

    if (result)
        printf("Os 3 valores foram iguais\n");
    else
        printf("Existem valores diferentes\n");

    return 0;
}
