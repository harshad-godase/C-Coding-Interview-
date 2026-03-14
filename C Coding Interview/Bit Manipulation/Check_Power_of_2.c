#include<stdio.h>

void main(){
    int num;

    printf("\nEnter the number:");
    scanf("%d",&num);

    if(num>0 && (num & (num-1)) == 0)
        printf("\nNumber is power of 2");
    else
        printf("\nNumber is NOT power of 2");
}