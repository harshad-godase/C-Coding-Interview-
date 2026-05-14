#include <stdio.h>

int* getValue()
{
    static int x = 100; //Never return address of local variable.
    //Because local variable destroyed after function ends. so use static variable. static variable life time is entire program. so we can return address of static variable.

    return &x;
}

int main()
{
    int *ptr;

    ptr = getValue();

    printf("%d\n", *ptr);

    return 0;
}