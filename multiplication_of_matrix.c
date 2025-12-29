#include <stdio.h>
int main()
{
    int row1, row2, col1, col2, i, j;
    printf("Enter number of rows of first matrix:");
    scanf("%d", &row1);
    printf("Enter number of columns of first matrix:");
    scanf("%d", &col1);
    printf("Enter number of rows of second matrix:");
    scanf("%d", &row2);
    printf("Enter number of columns of second matrix:");
    scanf("%d", &col2);

    if (col1 != row2)
    {
        printf("The multiplication is not possible....");
        return 0;
    }
    int arr[row1][col1], brr[row2][col2];
    printf("Enter elements of matrix first:");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
            scanf("%d", &arr[i][j]);
    }
    printf("Enter elements of matrix second:");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
            scanf("%d", &brr[i][j]);
    }
    int crr[row1][col2];
    int k;

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
            crr[i][j] = 0;
    }

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            for (k = 0; k < col1; k++)
            {
                crr[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    printf("Multiplication of matrix:");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }

    return 0;
}