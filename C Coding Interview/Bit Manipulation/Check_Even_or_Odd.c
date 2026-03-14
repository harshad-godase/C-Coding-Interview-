#include<stdio.h>

void main(){
    int num;

    printf("\nEnter the number:");
    scanf("%d",&num);

    if(num & 1)
        printf("\nNumber is Odd");
    else
        printf("\nNumber is Even");
}