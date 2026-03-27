#include<stdio.h>

void main(){
    int num,rev=0;

    printf("\nEnter the number:");
    scanf("%d",&num);

    for(int i=0;i<32;i++)
    {
        rev = rev << 1;
        rev = rev | (num & 1);
        num = num >> 1;
    }

    printf("\nReversed bits number: %d",rev);
}