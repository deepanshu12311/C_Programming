#include <stdio.h>

int main() {
    int row1, row2, col1, col2, i, j, k;

    printf("Enter number of rows for 1st matrix: ");
    scanf("%d", &row1);

    printf("Enter number of columns for 1st matrix: ");
    scanf("%d", &col1);

    printf("Enter number of rows for 2nd matrix: ");
    scanf("%d", &row2);

    printf("Enter number of columns for 2nd matrix: ");
    scanf("%d", &col2);

    if (col1 != row2) {
        printf("Matrix multiplication is not possible...");
        return 0;
    }

    int arr[row1][col1], brr[row2][col2], crr[row1][col2];

    printf("Enter elements of 1st matrix:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            scanf("%d", &brr[i][j]);
        }
    }

    // Initialize result matrix with 0
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            crr[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            for (k = 0; k < col1; k++) {
                crr[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    printf("\nResultant Matrix:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }

    return 0;
}