#include <stdio.h>
int main()
{
    int arr[10], i, max, min;
    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for (i = 0; i < 10; i++)

        if (arr[i] < min)
            min = arr[i];

    for (i = 0; i < 10; i++)
        if (arr[i] > max)
            max = arr[i];
    printf("%d is min and %d is max", min, max);
    return 0;
}