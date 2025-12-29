#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter number of rows:");
    scanf("%d", &n);

    for (int k = 1; k <= n; k++)
    {
        if (k % 2 != 0)
        {
            for (int m = 1; m <= k; m++)
                printf("%d ", m);
            printf("\n");
        }

        else
        {
            for (char i = 65; i <= 64 + k; i++)
                printf("%c ", i);
            printf("\n");
        }
    }
    return 0;
}