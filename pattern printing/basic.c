#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows:");
    scanf("%d", &n);

    int m;
    printf("Enter number of stars in a row:");
    scanf("%d", &m);
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= m; i++)
            printf("*");
        printf("\n");
    }
    return 0;
}