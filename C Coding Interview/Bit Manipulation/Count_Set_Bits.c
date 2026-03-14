#include<stdio.h>

void main(){
    int num,count=0;

    printf("\nEnter the number:");
    scanf("%d",&num);

    while(num)
    {
        count = count + (num & 1);
        num = num >> 1;
    }

    printf("\nNumber of set bits: %d",count);
}