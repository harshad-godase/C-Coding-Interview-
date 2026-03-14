#include<stdio.h>

void main(){
    int num,pos,len;

    printf("\nEnter the number:");
    scanf("%d",&num);

    printf("\nEnter starting bit position:");
    scanf("%d",&pos);

    printf("\nEnter number of bits:");
    scanf("%d",&len);

    int mask = (1 << len) - 1;

    int res = (num >> pos) & mask;

    printf("\nExtracted bit field value: %d",res);
}