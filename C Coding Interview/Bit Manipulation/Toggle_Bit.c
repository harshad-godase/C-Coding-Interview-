#include<stdio.h>

void main(){
    int num,bit;

    printf("\nEnter the number:");
    scanf("%d",&num);

    printf("\nEnter the bit number (0-31):");
    scanf("%d",&bit);

    if(bit>=0 && bit<32)
    {
        int res = num ^ (1 << bit);
        printf("\nNumber after toggling bit %d is: %d",bit,res);
    }
    else
        printf("\nBit number invalid (0-31)");
}