#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};

    int *ptr = arr;

    printf("%d\n", *ptr);

    ptr++;

    printf("%d\n", *ptr);

    ptr++;

    printf("%d\n", *ptr);

    return 0;
}