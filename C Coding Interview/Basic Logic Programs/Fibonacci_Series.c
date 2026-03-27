#include<stdio.h>

int main(){
    int num ,c, a=0,b=1;

    printf("Enter the number\n");
    scanf("%d",&num);

    printf("%d %d",a,b);

    for (int i = 3; i <= num; i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
    
    return 0;
}