#include<stdio.h>

void main(){
    int num,b1,b2;

    printf("\nEnter the number:");
    scanf("%d",&num);

    printf("\nEnter first bit position:");
    scanf("%d",&b1);

    printf("\nEnter second bit position:");
    scanf("%d",&b2);

    int bit1 = (num >> b1) & 1;
    int bit2 = (num >> b2) & 1;

    if(bit1 != bit2)
        num = num ^ ((1<<b1) | (1<<b2));

    printf("\nNumber after swapping bits: %d",num);
}