#include<stdio.h>

int main()
{
    int num, temp, digit, sum = 0;

    printf("Enter number: ");
    scanf("%d",&num);

    temp = num;

    while(num != 0)
    {
        digit = num % 10;
        sum = sum + digit*digit*digit;
        num = num / 10;
    }

    if(sum == temp)
        printf("Armstrong Number");
    else
        printf("Not Armstrong");

    return 0;
}