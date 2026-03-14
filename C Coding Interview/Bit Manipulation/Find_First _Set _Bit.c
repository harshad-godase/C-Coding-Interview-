#include<stdio.h>

void main(){
    int num,pos=0;

    printf("\nEnter the number:");
    scanf("%d",&num);

    while((num & 1) == 0)
    {
        num = num >> 1;
        pos++;
    }

    printf("\nFirst set bit position: %d",pos);
}