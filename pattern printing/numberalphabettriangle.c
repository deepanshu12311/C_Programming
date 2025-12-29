#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows:");
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        for (int k = 1; k <= n; k++)
        {
            for (int m = 1; m <= k; m++)
                printf("%d ", m);
            printf("\n");
        }
    }
    else
    {
        for (int j = 1; j <= n; j++)
        {
            for (char i = 65; i <= 64 + j; i++)
                printf("%c ", i);
            printf("\n");
        }
    }
    return 0;
}