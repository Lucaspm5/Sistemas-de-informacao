#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define alocar(x,size) x =  (char*)malloc(size * sizeof(char))
#define ENT(x) scanf("%[^\n]", x)

char *nova_string(char *s1, char *s2, int size, int *ptr)
{
    int size1 = strlen(s1);
    int size2 = strlen(s2);
    int cont = 0;
    char *auxiliary = NULL;
    
    auxiliary = (char*)malloc(size1 * sizeof(char));

    for (int i = 0;i < size1;i++)
    {
        int j = 0;

        for (j = 0;j < size2;j++)
        {
            if (*(s1 + i) == *(s2 + j))
            break;
        }

        if (j == size2)
            *(auxiliary + cont++) = *(s1 + i);
    }

    *ptr = cont;

    return auxiliary;
}

int main()
{
    char *s1 = NULL;
    char *s2 = NULL;
    char *auxiliary = NULL;

    int size = 1000;
    int new_size = 0;

    alocar(s1, size);
    alocar(s2, size);

    ENT(s1);
    scanf("%*c");
    ENT(s2);

    auxiliary = nova_string(s1, s2, size, &new_size);

    for (int i = 0;i < new_size;i++)
        printf("%c",*(auxiliary + i));
    
    free(s1);
    free(s2);
    free(auxiliary);

 return 0;

}
