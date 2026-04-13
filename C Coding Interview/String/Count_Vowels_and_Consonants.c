#include<stdio.h>

int main()
{
    char str[100];
    int i=0, vowels=0, cons=0;

    printf("Enter string: ");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        char ch = str[i];

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowels++;
        else
            cons++;

        i++;
    }

    printf("Vowels=%d Consonants=%d", vowels, cons);

    return 0;
}