#include <stdio.h>
int main()
{
    int arr[5];
    int max = -1;
    for (int i = 0; i < 5; i++)
    {

        printf("Enter %d element: ", i);
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        if (max < arr[j])
        {
            max = arr[j];
        }
    }
    printf("Maximum value in whole array is %d", max);
    return 0;
} 