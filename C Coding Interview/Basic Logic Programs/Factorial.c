#include<stdio.h>

int main(){
    int num;
    long fact=1;

    printf("Enter the num\n");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        fact= fact*i;
    }

    printf("%ld",fact);
    
    return 0;
}