#include <stdio.h>

int main()
{
    int arr[100], n, i, j, k, first;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    // Optional: remove this line if k will always be less than n
    k = k % n;

    for(j = 0; j < k; j++)
    {
        first = arr[0];

        for(i = 0; i < n - 1; i++)
            arr[i] = arr[i + 1];

        arr[n - 1] = first;
    }

    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}