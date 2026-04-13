#include <stdio.h>

int main() {
    int num, i = 0;
    int binary[32];

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}