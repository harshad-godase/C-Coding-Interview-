#include <stdio.h>

struct Student
{
    int roll;
    float marks;
};

int main()
{
    struct Student s1 = {1, 85.5};

    struct Student *ptr;

    ptr = &s1;

    printf("Roll = %d\n", ptr->roll);
    printf("Marks = %.2f\n", ptr->marks);

    return 0;
}