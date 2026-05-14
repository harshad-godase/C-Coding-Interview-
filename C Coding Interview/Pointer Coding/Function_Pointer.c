#include <stdio.h>

void display()
{
    printf("Hello\n");
}

int main()
{
    void (*ptr)(); // return_type (*pointer_name)(arguments)

    ptr = display;

    ptr();

    return 0;
}