#include <stdio.h>

void update(int *x)
{
    *x = 500;
}

int main()
{
    int a = 100;

    update(&a);

    printf("%d\n", a);

    return 0;
}