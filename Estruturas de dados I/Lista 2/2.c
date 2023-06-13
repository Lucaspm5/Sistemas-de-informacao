#include <stdio.h>

int main() {
    int a, b;
    (&a > &b) ? printf("%p\n", &a) : printf("%p\n", &b);
    return 0;
}
