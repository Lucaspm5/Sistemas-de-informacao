#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void busca_substrings(char *s1, char *s2) {
    int size_s1 = strlen(s1);
    int size_s2 = strlen(s2);
    int valido = 0;

    for (int i = 0; i < size_s1; i++) {
        valido = 1;
        for (int j = 0; j < size_s2 && valido; j++) {
            if (i + j >= size_s1 || *(s1 + i + j) != *(s2 + j)) {
                valido = 0;
            }
        }
        if (valido) break;
    }

    if (valido)
        printf("%s ocorre em %s\n", s2, s1);
    else
        printf("%s nao ocorre em %s\n", s2, s1);
}

int main() {
    char *s1 = NULL;
    char *s2 = NULL;

    s1 = (char *)malloc(1000 * sizeof(char));
    s2 = (char *)malloc(1000 * sizeof(char));

    scanf("%[^\n]", s1);
    scanf("%*c");
    scanf("%[^\n]", s2);

    busca_substrings(s1, s2);

    free(s1);
    free(s2);

    return 0;
}
