#include <stdio.h>

int main()
{
    int x = 100;

    int *p = &x;

    int **q = &p;

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("**q = %d\n", **q);

    return 0;
}