#include<stdio.h>
#include<string.h>

void reverse(char str[], int start, int end)
{
    char temp;
    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char str[100];
    int i, start=0;

    printf("Enter sentence: ");
    gets(str);

    int len = strlen(str);

    reverse(str, 0, len-1);

    for(i=0;i<=len;i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            reverse(str, start, i-1);
            start = i+1;
        }
    }

    printf("Reversed words = %s", str);

    return 0;
}